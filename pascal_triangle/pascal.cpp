#include <iostream>
#include "pascal.h"



int pascal(int row, int column)
{
    // construct pascal triangle
    long long p[100][100];
    p[0][0]=1;
    for (int i = 0; i <= row; i++){
        for (int j = 0; j <= i; j++){
            if(i==j||j==0) p[i][j]=1;
            else p[i][j] = p[i-1][j] + p[i-1][j-1];
        }    
    }

    int answer = p[row][column];
    return answer;    
}