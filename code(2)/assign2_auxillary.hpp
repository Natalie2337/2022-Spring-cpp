#pragma once

#include <stdlib.h>
#include "assign2_exception.hpp"
#include "assign2_tree.hpp"


using namespace assign2_exception;
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
exception add_node(tree_node *father, tree_node *child, int child_direction)
{
    exception e = 0;
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
exception judge_child_direction(tree_node *node, int *child_direction){
    //child_direction = & Child_Direction;

    exception e = 0;
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

exception insert_into_BST(BST *bst, uint64_t data, tree_node **inserted_node)
{
    exception e = 0;
    int capture = 0;
    if(bst==nullptr){
        e|=NULL_POINTER_EXCEPTION;
    }
    else if (bst->root == nullptr){ 
        if(bst->comp==nullptr){
            e|= NULL_COMP_FUNCTION_EXCEPTION;
        }else{
            tree_node * ptr = new tree_node();    //根节点为空，new一个node。 
            inserted_node = &ptr; 
            ptr->data = data;
            ptr->tree_count =1;
        }       
	}else{
        tree_node * ptr = new tree_node();
        //tree_node * ptr;
        ptr = bst->root;
        ptr->data = bst->root->data;//为ptr赋初值root的data
    
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

                    inserted_node = &new_ptr;
                    ptr->tree_count = ptr->tree_count+1;
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
                    ptr->tree_count = ptr->tree_count+1;
                    break;
                }
            }else{
                //节点存在
                ptr->node_count = ptr->node_count+1;
                //ptr->tree_count = ptr->tree_count+1;
            }    
        }

        //*inserted_node = ptr;    

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
exception find_in_BST(BST *bst, uint64_t data, tree_node **target_node)
{
    exception e = 0;
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
                    ptr->tree_count = ptr->tree_count+1;
                }else{
                    ptr = nullptr;
                    break;
                }
                    
            }else if(bst->comp(ptr->data,data)<0){
                if(ptr->r_child!=nullptr){
                    ptr->data = ptr->r_child->data;
                    ptr = ptr->r_child;//向右找
                    ptr->tree_count = ptr->tree_count+1;
                }else{
                    ptr = nullptr;
                    break;
                }
            }else if(bst->comp(ptr->data,data)==0){
                //节点存在,comp(ptr->data,data)==0
                ptr->node_count = ptr->node_count+1;
                //ptr->tree_count = ptr->tree_count+1;
                break;
            }    
        }
        target_node = &ptr;    
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



void left_single_rotate(BST *bst , tree_node * C_node)
{
    //    E                                               E
    //    B                          ------>              C
    // A     C                                          B   D
    //          D                                     A


    //C_node就是我们要移到根节点的那个节点，目标节点

    tree_node * B_node = C_node->father; //原来位于中间的父节点B
    tree_node * E_node = B_node->father; //原来父节点的父节点E

    
    
    if(C_node->l_child!=nullptr)
    {
        B_node->r_child=C_node->l_child; //把原来中间B节点旋转成为C节点的左子节点，并把C原来的左子节点接到现在B节点的右子边上
        C_node->l_child->father = B_node; //记得同时更新C原来左子节点的父节点变成了B
    }
    
    C_node->l_child=B_node; //现在C节点的左子节点成了B节点
    B_node->father=C_node; //也记得同时更新原来的父节点B现在成了C的左子节点


    //现在C节点的父节点成了原来B节点的父节点E
    C_node->father = E_node;

    //同时记得更新E节点的新子节点C,并确定在左还是右
    if (E_node!=nullptr) 
    {
        //有个疑问，不知道应该在什么时候进行
        
        if (bst->comp(E_node->r_child->data,C_node->data)>0){
            //说明原来B节点应该在E的左子树上，这里有疑问，C是继续接在B原来的子边上，还是重新与E的另一边比较后再决定是否换位置
            E_node->l_child = C_node;
        }else{
            E_node->r_child = C_node;
        }           
    }
    else //不存在祖父节点，则原父节点为根，那么旋转后node为根
        bst->root=C_node;
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码


void right_single_rotate(BST *bst , tree_node * A_node)
{
         //E                                               E
         //B                          ------>              A
      //A     C                                          D   B
    //D                                                        C

    //A_node就是我们要移到根节点的那个节点，目标节点

    if(A_node->father!=nullptr){

        tree_node * B_node = A_node->father; //原来位于中间的父节点B
        unint64_t father_data = B_node->data; //存储原来B的data.

        if(B_node->father!=nullptr){
            //C_node存在爷爷节点的正常情况
            tree_node * E_node = B_node->father; //原来父节点的父节点E
            unint64_t grandpa_data = E_node->data; //存储原来E的data

            if(A_node->r_child!=nullptr){
                B_node->l_child=A_node->r_child; //把原来中间B节点旋转成为A节点的右子节点，并把A原来的右子节点接到现在B节点的左子边上
                A_node->r_child->father = B_node; //记得同时更新A原来右子节点的父节点变成了B
            }else{
                B_node->l_child = nullptr;
            }

            A_node->r_child=B_node; //现在A节点的右子节点成了B节点
            B_node->father=A_node; //也记得同时更新原来的父节点B现在成了C的左子节点

            if (bst->comp(grandpa_data,father_data)>0){
                E_node->l_child = A_node;
            }else if(bst->comp(grandpa_data,father_data)<0) {
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
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码




void rotate(BST *bst,tree_node* node)
{
    tree_node * node_father = node->father;
    tree_node * node_grandfather = node_father->father;
    int i,j;

    i=node_grandfather->l_child==node_father ? 0:1;
    j=node_father->l_child==node ?0:1;
    if (i=-1&&j==0){
        //AVL树中的LL型
        right_single_rotate(bst, node);
        right_single_rotate(bst, node);
    } 
        
    else if(i==0&&j==1) {
        //AVL树中的LR型
        left_single_rotate(bst,node);
        right_single_rotate(bst,node);      
    }
    else if(i==1&&j==0){
        //AVL树中的RL型
        right_single_rotate(bst, node);
        left_single_rotate(bst,node);  
    } 

    else {
         //AVL树中的RR型
        left_single_rotate(bst,node);
        left_single_rotate(bst,node);
    }                  
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码






exception splay(BST *bst, tree_node *node)
{
    exception e = 0;
    while (node->father!=bst->root && node!=bst->root){
       //当前结点不是根，或者不是其根的左右孩子，则根据情况进行旋转操作
       rotate(bst, node);
    } 
    if (node==bst->root->l_child){
        //当前结点为根的左孩子，只需进行一次单右旋
        right_single_rotate(bst, node);
    }   
    else if(node==bst->root->r_child){
        //当前结点为根的右孩子，只需进行一次单左旋
        left_single_rotate(bst, node);
    } 

    return e;
}
//特别声明：以上部分参照了https://blog.csdn.net/u014634338/article/details/49586689 博客的思路与代码








