#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "assign1_mat.h"
#include "matrix.c"

matrix mat_res;
//only square matrix can do exponentiation

int square_size(matrix mat_a){
    if (mat_a.m_row == mat_a.m_col) return 0;
    return 1;
}

matrix naive_matrix_exp(matrix mat_a,int n){
    if(n==0) return mat_a;
    else{
        matrix_multiplication(mat_a,naive_matrix_exp(mat_a,n-1),mat_a);
        return mat_a;
    }    
}

matrix fast_matrix_exp(matrix mat_a,int n){
    int partition= floor(n/2);
    if(n%2==1){
        matrix_multiplication(mat_a,fast_matrix_exp(mat_a,partition),mat_a);
    }else{
        fast_matrix_exp(mat_a,partition);
    }
    return mat_a;

}


matrix mat_fib(int n){
    matrix m0 = create_matrix_all_zero(2,1);
    set_by_index(m0,0,0,1);
    matrix multiplier = create_matrix_all_zero(2,2);
    set_by_index(multiplier,0,0,1);
    set_by_index(multiplier,0,1,1);
    set_by_index(multiplier,1,0,1);   

    matrix ret;

    matrix_multiplication(fast_matrix_exp(multiplier,n-1),m0,ret);
    return ret;
    
}
