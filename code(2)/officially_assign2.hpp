#pragma once

#include <stdlib.h>
#include <iostream>
#include "assign2_exception.hpp"
#include "assign2_tree.hpp"


//using namespace assign2_exception;
#define CHILD_DIRECTION_LEFT 0
#define CHILD_DIRECTION_RIGHT 1

#define ADD_NODE_LEFT(father, child) \
    add_node(father, child, CHILD_DIRECTION_LEFT)

#define ADD_NODE_RIGHT(father, child) \
    add_node(father, child, CHILD_DIRECTION_RIGHT)




/**
 * add node @p child to @p father 's corresponding child according to the @p child_direction
 * 
 * if @p child_direction equals @link{CHILD_DIRECTION_LEFT}, add @p child to @p father 's left child
 * if @p child_direction equals @link{CHILD_DIRECTION_RIGHT}, add @p child to @p father 's right child
 * 
 * @todo task 1, 20 pts
 * 
 * @exception assign2_exception::NULL_POINTER_EXCEPTION
 * @exception assign2_exception::DUPLICATED_LEFT_CHILD_EXCEPTION
 * @exception assign2_exception::DUPLICATED_RIGHT_CHILD_EXCEPTION
 * @exception assign2_exception::DUPLICATED_FATHER_EXCEPTION
 * @exception assign2_exception::INVALID_CHILD_DIRECTION_EXCEPTION
 */
assign2_exception::exception add_node(tree_node *father, tree_node *child, int child_direction)
{
    assign2_exception::exception e = 0;
    if(father == nullptr || child == nullptr){
        e|= NULL_POINTER_EXCEPTION;
    }else if(!(child_direction==CHILD_DIRECTION_LEFT||child_direction==CHILD_DIRECTION_RIGHT)){
        e|= INVALID_CHILD_DIRECTION_EXCEPTION;
    }else if(child_direction==CHILD_DIRECTION_LEFT){

            if(father->l_child != nullptr){
                e|= DUPLICATED_LEFT_CHILD_EXCEPTION;
                if(father->l_child->data==child->data){
                    child->node_count = child->node_count+1;
                }                
            }else{
                father->l_child = child;
                child->father = father;
                child->tree_count = child->tree_count + 1;

                tree_node * ptr = new tree_node();
                ptr = child;
                if(ptr!=nullptr && ptr->father!=nullptr){
                    while(ptr->father!=nullptr){
                        ptr = ptr->father;
                        ptr->tree_count = ptr->tree_count+1;
                    }   
                }   
            }        
    }else if(child_direction==CHILD_DIRECTION_RIGHT){

        if(father->r_child != nullptr){
            e|= DUPLICATED_RIGHT_CHILD_EXCEPTION;
            if(father->r_child->data==child->data){
                 child->node_count = child->node_count+1;
            }
        }else{
            father -> r_child = child;
            child -> father = father;
            child->tree_count = child->tree_count + 1;

            tree_node * ptr = new tree_node();
            ptr = child;
            if(ptr!=nullptr && ptr->father!=nullptr){
                while(ptr->father!=nullptr){
                    ptr = ptr->father;
                    ptr->tree_count = ptr->tree_count+1;
                }
            }   
        }    
    }
    return e;
}





/**
 * judge whether the node @p node is the left or right child of its father, and store the result to @p child_direction
 * 
 * @todo task 2, 15 pts
 * 
 * @exception assign2_exception::NULL_POINTER_EXCEPTION
 * @exception assign2_exception::ROOTS_FATHER_EXCEPTION
 */


assign2_exception::exception judge_child_direction(tree_node *node, int *child_direction){
    //child_direction = & Child_Direction;

    assign2_exception::exception e = 0;
    if(node==nullptr || child_direction==nullptr){
        e|= NULL_POINTER_EXCEPTION;
    }
    else if(node->father == nullptr){
        e|= ROOTS_FATHER_EXCEPTION;
    }
    else if((node->father->l_child)==node){
        *child_direction = CHILD_DIRECTION_LEFT;
        
    }else if((node->father->r_child)==node){
        *child_direction = CHILD_DIRECTION_RIGHT;
       
    }

    return e;
}



/**
 * insert specific @p data into @p bst, according to the @link{BST#comp(uint64_t, uint64_t)} function
 * 
 * @todo task 3, 20 pts
 * 
 * @exception assign2_exception::NULL_POINTER_EXCEPTION
 * @exception assign2_exception::NULL_COMP_FUNCTION_EXCEPTION
 * 
 */

assign2_exception::exception insert_into_BST(BST *bst, uint64_t data, tree_node **inserted_node)
{
    assign2_exception::exception e = 0;
    int capture = 0;
    if(bst==nullptr){
        e|=NULL_POINTER_EXCEPTION;
    }
    else if (bst->root == nullptr){ 
        if(bst->comp==nullptr){
            e|= NULL_COMP_FUNCTION_EXCEPTION;
        }else{
            tree_node * ptr = new tree_node();    //根节点为空，new一个node作为根节点。 
            inserted_node = &ptr; 
            ptr->data = data;
            ptr->tree_count =1;
        }       
	}else{
        tree_node * ptr = new tree_node();
        //tree_node * ptr;
        ptr = bst->root;
        //std:: cout<< ptr << " " << bst->root << std::endl;
        ptr->data = bst->root->data;//为ptr赋初值root的data
        ptr->tree_count = bst->root->tree_count;
        //std:: cout << "root_tree_count: " << ptr->tree_count << std::endl;

        while(bst->comp(ptr->data,data)!=0){
            if(bst->comp==nullptr){
                e|=NULL_COMP_FUNCTION_EXCEPTION;   
            }
            else if(bst->comp(ptr->data,data)>0){
                
                if(ptr->l_child!=nullptr){
                    ptr->data = ptr->l_child->data;
                    ptr = ptr->l_child;                    
                }else{
                    tree_node * new_ptr = new tree_node();
                    //tree_node * new_ptr;
                    //相当于add_node
                    ptr->l_child = new_ptr;


                    new_ptr->father = ptr;
                    new_ptr->data = data;

                    //std:: cout << "ptr_tree_count: " << ptr->tree_count << std::endl;
                    inserted_node = &new_ptr;
                    //std:: cout<<"new_left_child:  " << ptr->l_child << " " << new_ptr << " " << *inserted_node << std::endl;

                    ptr->tree_count = ptr->tree_count+1;
                    //更新从ptr开始往父辈找的所有节点
                    if(ptr!=nullptr && ptr->father!=nullptr){
                        while(ptr->father!=nullptr){
                        ptr = ptr->father;
                        ptr->tree_count = ptr->tree_count+1;
                        }
                    }   

                    capture = 1;
                    break;
                }
                    
            }else if(bst->comp(ptr->data,data)<0){
                if(ptr->r_child!=nullptr){
                    ptr->data = ptr->r_child->data;
                    ptr = ptr->r_child;
                }else{
                    //tree_node * new_ptr;
                    tree_node * new_ptr = new tree_node();
                    //相当于add_node
                    ptr->r_child = new_ptr;
                    new_ptr->father = ptr;
                    new_ptr->data = data;

                    inserted_node = &new_ptr;
                    //std:: cout<<"new_right_child:  " << ptr->r_child << " " << new_ptr << " " << *inserted_node << std::endl;


                    ptr->tree_count = ptr->tree_count+1;

                    //更新从ptr开始往父辈找的所有节点
                    if(ptr!=nullptr && ptr->father!=nullptr){
                        while(ptr->father!=nullptr){
                        ptr = ptr->father;
                        ptr->tree_count = ptr->tree_count+1;
                        }
                    }   

                    capture = 1;
                    break;
                }
            }
        }
        //std:: cout<< capture << std::endl;
        //std:: cout<< "root_tree_count after insert " << bst->root->tree_count << std::endl;
        
        //节点存在
        ptr->node_count = ptr->node_count+1;
        //ptr->tree_count = ptr->tree_count+1;
                
        
    }
    return e;
}



/**
 * find specific data in the BST, and storing the target tree node into ans
 * 
 * @todo task 4, 20 pts
 * 
 * @exception assign2_exception::NULL_POINTER_EXCEPTION
 * @exception assign2_exception::NULL_COMP_FUNCTION_EXCEPTION
 */

assign2_exception::exception find_in_BST(BST *bst, uint64_t data, tree_node **target_node)
{
    assign2_exception::exception e = 0;
    if(bst==nullptr){
        e|=NULL_POINTER_EXCEPTION;
    }
    else if (bst->root == nullptr){ 
        e|= NULL_COMP_FUNCTION_EXCEPTION;              
	}else{
        tree_node * ptr = new tree_node();
        //tree_node * ptr;
        ptr = bst->root;
        ptr->data = bst->root->data;//为ptr赋初值root的data
    
        while(ptr!=nullptr){
            if(bst->comp==nullptr){
                e|=NULL_COMP_FUNCTION_EXCEPTION;
            }
            else if(bst->comp(ptr->data,data)>0){
                if(ptr->l_child!=nullptr){
                    ptr->data = ptr->l_child->data;
                    ptr = ptr->l_child; 
                    
                }else{
                    ptr = nullptr;
                    target_node = &ptr;
                    break;
                }
                    
            }else if(bst->comp(ptr->data,data)<0){
                if(ptr->r_child!=nullptr){
                    ptr->data = ptr->r_child->data;
                    ptr = ptr->r_child;//向右找
                    
                }else{
                    ptr = nullptr;
                    target_node = &ptr;
                    break;
                }
            }else if(bst->comp(ptr->data,data)==0){
                //节点存在,comp(ptr->data,data)==0
                //ptr->tree_count = ptr->tree_count+1;
                //应该也不用更新node_count，因为也不重复
                    target_node = &ptr;
                    //std:: cout<< "data: " << data <<"  ptr->data: "<<  ptr->data <<std::endl;
                    //std:: cout<< "&ptr: " << *target_node << std::endl;
                    break;
            }    
        }

  
    }
    return e;
}


/**
 * splay tree node @p node to the root of binary search tree if @p node is in @p bst
 * 
 * @attention all the exceptions should be handled in Part One
 * 
 * @todo task 5, 30 pts
 * 
 * @exception assign2_exception::NULL_POINTER_EXCEPTION
 * @exception assign2_exception::NULL_COMP_FUNCTION_EXCEPTION
 * @exception assign2_exception::SPLAY_NODE_NOT_IN_TREE_EXCEPTION
 */


assign2_exception::exception left_single_rotate(BST *bst , tree_node * C_node)
{
    //    E                                               E
    //    B                          ------>              C
    // A     C                                          B   D
    //          D                                     A


    //C_node就是我们要移到根节点的那个节点，目标节点

    assign2_exception::exception e = 0;
    if(C_node==nullptr){
        e|=NULL_POINTER_EXCEPTION;
    }else if(C_node->father!=nullptr){
        //C_node存在父节点的情况

        tree_node * B_node = C_node->father; //原来位于中间的父节点B
        
        if(B_node->father!=nullptr){
            //C_node存在爷爷节点的正常情况

            tree_node * E_node = B_node->father; //原来父节点的父节点E
            
            if(C_node->l_child!=nullptr){
                B_node->r_child=C_node->l_child; //把原来中间B节点旋转成为C节点的左子节点，并把C原来的左子节点接到现在B节点的右子边上
                C_node->l_child->father = B_node; //记得同时更新C原来左子节点的父节点变成了B
            }else{
                B_node->r_child = nullptr;//如果C本来就没有左儿子，也要记得更新B现在的右儿子为nullptr。
            }
    
            C_node->l_child=B_node; //现在C节点的左子节点成了B节点
            B_node->father=C_node; //也记得同时更新原来的父节点B现在成了C的左子节点

            //现在C节点的父节点成了原来B节点的父节点E
            C_node->father = E_node;
            if(bst->comp==nullptr){
                e|= NULL_COMP_FUNCTION_EXCEPTION;
            }else if(bst->comp(E_node->data,B_node->data)>0){
                //原来的B节点在E节点的左端，所以此时C节点应该接在E节点的左端
                E_node->l_child = C_node;
            }else{
                E_node->r_child = C_node;
            }

        }else if(B_node->father==nullptr){
            //B没有父节点了，也就意味着B已经是root节点了。那就不需要更新与E的关系了。

            if(C_node->l_child!=nullptr){
                B_node->r_child=C_node->l_child; //把原来中间B节点旋转成为C节点的左子节点，并把C原来的左子节点接到现在B节点的右子边上
                C_node->l_child->father = B_node; //记得同时更新C原来左子节点的父节点变成了B
            }else{
                B_node->r_child = nullptr;//如果C本来就没有左儿子，也要记得更新B现在的右儿子为nullptr。
            }
    
            C_node->l_child=B_node; //现在C节点的左子节点成了B节点
            B_node->father=C_node; //也记得同时更新原来的父节点B现在成了C的左子节点
            
        }
    }else{
        //C节点都不存在父节点了，也更没有爷爷节点了，已经是移到了root处了。
        bst->root = C_node;
    }

    return e;
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码



assign2_exception::exception right_single_rotate(BST *bst , tree_node * A_node)
{
         //E                                               E
         //B                          ------>              A
      //A     C                                          D   B
    //D                                                        C

    //A_node就是我们要移到根节点的那个节点，目标节点
    assign2_exception::exception e = 0;
    if(A_node==nullptr){
        e|= NULL_POINTER_EXCEPTION;
    }
    else if(A_node->father!=nullptr){

        tree_node * B_node = A_node->father; //原来位于中间的父节点B

        if(B_node->father!=nullptr){
            //C_node存在爷爷节点的正常情况
            tree_node * E_node = B_node->father; //原来父节点的父节点E

            if(A_node->r_child!=nullptr){
                B_node->l_child=A_node->r_child; //把原来中间B节点旋转成为A节点的右子节点，并把A原来的右子节点接到现在B节点的左子边上
                A_node->r_child->father = B_node; //记得同时更新A原来右子节点的父节点变成了B
            }else{
                B_node->l_child = nullptr;
            }

            A_node->r_child=B_node; //现在A节点的右子节点成了B节点
            B_node->father=A_node; //也记得同时更新原来的父节点B现在成了C的左子节点

            if(bst->comp==nullptr){
                e|=NULL_COMP_FUNCTION_EXCEPTION;
            }
            else if (bst->comp(E_node->data,B_node->data)>0){
                E_node->l_child = A_node;
            }else if(bst->comp(E_node->data,B_node->data)<0) {
                E_node->r_child = A_node;
            }           

        }else if(B_node->father==nullptr){
            //B已经是root节点了，所以不需要更新A与E的关系了

            if(A_node->r_child!=nullptr){
                B_node->l_child=A_node->r_child; //把原来中间B节点旋转成为A节点的右子节点，并把A原来的右子节点接到现在B节点的左子边上
                A_node->r_child->father = B_node; //记得同时更新A原来右子节点的父节点变成了B
            }else{
                B_node->l_child = nullptr;
            }

            A_node->r_child=B_node; //现在A节点的右子节点成了B节点
            B_node->father=A_node; //也记得同时更新原来的父节点B现在成了C的左子节点

        }
    }else{
        bst->root=A_node;
    }

    return e;
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码




void rotate(BST *bst,tree_node* node)
{
    //双旋，对3个节点(子、父、爷爷)进行操作
    
    if(node->father!=nullptr && node->father->father!=nullptr){
        if((node==node->father->l_child) && (node->father == node->father->father->l_child)){
            //LL型
            right_single_rotate(bst, node->father);
            right_single_rotate(bst, node);
        }else if((node==node->father->r_child) && (node->father == node->father->father->r_child)){
            left_single_rotate(bst,node->father);
            left_single_rotate(bst,node);
        }else if((node==node->father->l_child) && (node->father == node->father->father->r_child)){
            //RL型
            right_single_rotate(bst, node);
            left_single_rotate(bst,node);
        }else{
            left_single_rotate(bst, node);
            right_single_rotate(bst,node);
        }
    }
          
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码



assign2_exception::exception splay(BST *bst, tree_node *node)
{
    assign2_exception::exception e = 0;

    if(node==nullptr){
        e|=NULL_POINTER_EXCEPTION;
    }
    else if(node->father != nullptr){
        tree_node * ptr = new tree_node();
        ptr = node;
        while(ptr->father!=nullptr){
            ptr=ptr->father;
        }
        if(ptr!= bst->root){//向上找最后找不到root上，说明不在这棵BST中
            e|=SPLAY_NODE_NOT_IN_TREE_EXCEPTION;
        }else{
            if(node->father->father == nullptr){
                //当前节点的父节点是根节点
                if(node==node->father->l_child){
                    right_single_rotate(bst, node);
                }else if (node == node->father->r_child){
                    left_single_rotate(bst, node);
                }    
            }else{
                if(node!=bst->root){
                    rotate(bst,node);
                }    
            }
        }
    }

    return e;
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码






