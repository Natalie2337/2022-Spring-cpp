#include "assign1_mat.h"
#include <stdio.h>


extern const int MODULO;


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
                    element =  (element + aij * bjk )% MODULO;
                }  
                set_by_index(mat_res,i,k,element);
            }
        }
        return 0;
    }else{
        return 1;
    }
}
