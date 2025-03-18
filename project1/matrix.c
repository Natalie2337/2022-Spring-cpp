#include <stdio.h>
#include <stdlib.h>
#include "assign1_mat.h"

matrix mat_res;

int matrix_of_same_size(matrix mat_a,matrix mat_b){
    if(mat_res.m_row != mat_a.m_row || mat_res.m_col != mat_a.m_col) return 1;
    else return 0;    
}


int matrix_addition(matrix mat_a,matrix mat_b,matrix mat_res){
    if(matrix_of_same_size(mat_a,mat_b)==1||matrix_of_same_size(mat_a,mat_res)==1){
        return 1;
    }
    for (int i = 0; i < mat_a.m_row; i++)
    {
        for (int j = 0; j < mat_a.m_col; j++)
        {
            int val = get_by_index(mat_a,i,j)+get_by_index(mat_b,i,j);
            set_by_index(mat_res,i,j,val);
        } 
    }
    return 0;
}



int multiplication_size_check(matrix mat_a,matrix mat_b,matrix mat_res){
    if((mat_res.m_row==mat_a.m_row )&& (mat_res.m_col==mat_b.m_col)){
        if(mat_a.m_col==mat_b.m_row) return 0;
        return 1;
    }
    return 1;
}


int matrix_multiplication(matrix mat_a,matrix mat_b,matrix mat_res){
    if(multiplication_size_check(mat_a,mat_b,mat_res)==0){
        for (int i = 0; i < mat_a.m_row; i++)
        {
            for (int j = 0; j < mat_a.m_col; j++)
            {
                for (int k = 0; k < mat_b.m_col; k++)
                {
                    int val = val + get_by_index(mat_a,i,j)*get_by_index(mat_b,j,k);
                    set_by_index(mat_res,i,k,val);
                }
                
            }
        }
        return 0;  
    }
    return 1;

}

