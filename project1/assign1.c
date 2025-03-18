#include "assign1_mat.h"
#include <math.h>
#include <stdio.h>

extern const int MODULO;

/**
 * Calculate power of x^n in O(log n)
 * @todo task 1, 20 pts
 *
 * @param x the base number
 * @param n the exponent number
 * @return the power, an integer
 */

int quick_power(int x, int n){
    if(n==0){
        return 1;
    }

    int partition_factor = quick_power(x,floor(n/2));
    
    if(n%2==1){
        return ((long long) partition_factor*partition_factor *x) %MODULO;
    }else{
        return ((long long) partition_factor*partition_factor)  %MODULO;
    }
}



/**
 * Calculate the result the of matrix addition
 * When returning 1, do not modify the entities in @p mat_res
 * @todo task 2-1, 20 pts
 *
 * @param mat_res the matrix used to store the result of A + B
 * @return 1 if the size of @p mat_res does not match required size or @p mat_a and @p mat_b cannot do the addition; 0 otherwise
 * @attention it is guaranteed that @p mat_res is different from @p mat_a or @p mat_b
 */

int matrix_of_same_size(matrix mat_a,matrix mat_b){
    if(mat_a.m_row != mat_b.m_row || mat_a.m_col != mat_b.m_col) return 1;
    else return 0;    
}


int matrix_addition(matrix mat_a, matrix mat_b, matrix mat_res){
    if(matrix_of_same_size(mat_a,mat_b)==1||matrix_of_same_size(mat_a,mat_res)==1){
        return 1;
    }
    else{
            for (int i = 0; i < mat_a.m_row; i++){
                for (int j = 0; j < mat_a.m_col; j++){

                    int val = get_by_index(mat_a,i,j)+get_by_index(mat_b,i,j);
                    set_by_index(mat_res,i,j,val);
            } 
        }
        return 0;
    }   
}




/**
 * Calculate the result the of matrix multiplication
 * @todo task 2-2, 30 pts
 *
 * @param mat_res the matrix used to store the result of A * B
 * @return 1 if the size of @p mat_res does not match required size or @p mat_a and @p mat_b cannot do the multiplication; 0 otherwise
 * @attention it is guaranteed that @p mat_res is different from @p mat_a or @p mat_b
 */

int multiplication_size_check(matrix mat_a,matrix mat_b,matrix mat_res){
    if((mat_res.m_row!=mat_a.m_row )|| (mat_res.m_col!=mat_b.m_col)||(mat_a.m_col!=mat_b.m_row)){
        return 1;
    }else{
        return 0;
    }
}

int matrix_multiplication(matrix mat_a, matrix mat_b, matrix mat_res){
    if(multiplication_size_check(mat_a,mat_b,mat_res)!=1){
        for(int i = 0; i < mat_a.m_row; i++){
            for(int k = 0; k < mat_b.m_col; k++){
                int element=0;
                for (int j = 0; j < mat_a.m_col; j++){
                    int aij =  get_by_index(mat_a,i,j) % MODULO;
                    int bjk =  get_by_index(mat_b,j,k) % MODULO;
                    element =  (element + aij * bjk) % MODULO;
                }    
                set_by_index(mat_res,i,k,element);
            }
        }
        return 0;
    }else{
        return 1;
    }
}




/**
 * Calculate the result the of matrix exponentiation in a naive way
 * @todo task 3, 15 pts
 *
 * @param mat_res the matrix used to store the result of mat_a ^ exp
 * @return 1 if the size of @p mat_res does not match required size or @p mat_a is not square; 0 otherwise
 * @attention it is guaranteed that @p mat_res is different from @p mat_a
 */

int square_size(matrix mat_a){
    if (mat_a.m_row =! mat_a.m_col) {
        return 1;
    }else{
        return 0;
    }   
}


int naive_matrix_exp(matrix mat_a, int exp, matrix mat_res){
    if(square_size(mat_a)!=1&& square_size(mat_res)!=1){
        if(mat_a.m_col == mat_res.m_col){
            matrix mat_cop = copy_matrix(mat_a);
            if(exp==1){
                for (int p = 0; p < mat_res.m_row; p++){
                    for (int q = 0; q < mat_res.m_col; q++){
                        int num1 = get_by_index(mat_cop,p,q);
                        set_by_index(mat_res,p,q,num1);
                    }    
                } 
                return 0;
            }else{
                for (int i = 0; i < exp-1; i++){
                    matrix tmp = copy_matrix(mat_cop);
                    matrix_multiplication(mat_a,tmp,mat_cop);
                    delete_matrix(tmp);
                }
                for (int p = 0; p < mat_res.m_row; p++){
                    for (int q = 0; q < mat_res.m_col; q++){
                        int num1 = get_by_index(mat_cop,p,q);
                        set_by_index(mat_res,p,q,num1);
                    }    
                }
                return 0;
            }
        }
    }        
}






/**
 * Calculate the result the of matrix exponentiation in a fast way
 * @todo task 4, 15 pts
 *
 * @param mat_res the matrix used to store the result of mat_a ^ exp
 * @return 1 if the size of @p mat_res does not match required size or @p mat_a is not square; 0 otherwise
 * @attention it is guaranteed that @p mat_res is different from @p mat_a
 */

int fast_matrix_exp(matrix mat_a, long long exp, matrix mat_res){
    if(square_size(mat_a)!=1 && square_size(mat_res)!=1){
        if(mat_a.m_col == mat_res.m_col){

            matrix mat_cop = copy_matrix(mat_a);
            int partition = floor(exp/2);

            if(exp==0){
                return 0;
            }

            if(exp==1){

                for (int p = 0; p < mat_res.m_row; p++)
                {
                    for (int q = 0; q < mat_res.m_col; q++)
                    {
                        int num1 = get_by_index(mat_cop,p,q);
                        set_by_index(mat_res,p,q,num1);
                    }    
                }

                return 0;     
            }

            if(exp>1){
                if(exp%2==1){
                    fast_matrix_exp(mat_a,partition,mat_cop);

                    matrix tmp1 = copy_matrix(mat_cop);
                    matrix_multiplication(tmp1,tmp1,mat_cop);
                    delete_matrix(tmp1);


                    matrix tmp2 = copy_matrix(mat_cop);
                    matrix_multiplication(tmp2,mat_a,mat_cop);
                    delete_matrix(tmp2);

                    for (int p = 0; p < mat_res.m_row; p++)
                    {
                        for (int q = 0; q < mat_res.m_col; q++)
                        {
                            int num1 = get_by_index(mat_cop,p,q);
                            set_by_index(mat_res,p,q,num1);
                        }    
                    }

                }else{
                    fast_matrix_exp(mat_a,partition,mat_cop);

                    matrix tmp1 = copy_matrix(mat_cop);
                    matrix_multiplication(tmp1,tmp1,mat_cop);
                            delete_matrix(tmp1);

                    for (int p = 0; p < mat_res.m_row; p++)
                    {
                        for (int q = 0; q < mat_res.m_col; q++)
                        {
                            int num1 = get_by_index(mat_cop,p,q);
                            set_by_index(mat_res,p,q,num1);
                        }    
                    }
                }

                return 0;
            }
        }
    }
}




/**
 * Calculate the nth number in Fibonacci Sequence using **Fast Matrix Exponentiation**
 * @todo task 5, 20 pts
 *
 * @param n the index of the result in Fibonacci Sequence
 * @return the number with index @n in Fibonacci Sequence
 */
int fast_cal_fib(long long n){

    matrix m0 = create_matrix_all_zero(2,1);
    set_by_index(m0,0,0,1);

    matrix multiplier = create_matrix_all_zero(2,2);
    set_by_index(multiplier,0,0,1);
    set_by_index(multiplier,0,1,1);
    set_by_index(multiplier,1,0,1);   

    matrix mat_two= create_matrix_all_zero(2,2);
    
    fast_matrix_exp(multiplier,n-1,mat_two);

    matrix mat_one=create_matrix_all_zero(2,1);

    matrix_multiplication(mat_two,m0,mat_one);

    long long res = get_by_index(mat_one,0,0);

    return res;

}

int main(){}
