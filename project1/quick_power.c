#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "assign1_mat.h"
#include "assign1_mat.c"

int quick_power(int x,int n){
    if(n==0){
        return 1;
    }
    int partition_factor = quick_power(x,floor(n/2));
    if(n%2==1){
        return partition_factor*partition_factor*x;
    }else{
        return partition_factor*partition_factor;
    }

}

int main(){
    int input_x,input_n;
    scanf("%d",&input_x);
    scanf("%d",&input_n);
    int r=quick_power(input_x,input_n);
    printf("%d",r);
    int a=r % MODULO;

    return 0;
}

