//
// Created by LEGION on 2025/4/7.
//
#include<stdio.h>
#include "stdint.h"
int g_array[10];
int d[]={[0]=1,[3]=4};
void useArray1(int *param){
    for(int i=0;i<5;i++){
        printf("UseArray1 index %d value %d\r\n",i,param[i]);
    }
    printf("\r\n");
}
void useArray2(int param[5]){
    for(int i=0;i<5;i++){
        printf("UseArray1 index %d value %d\r\n",i,param[i]);
    }
    printf("\r\n");
}
void useArray3(int param[],int n){
    for(int i=0;i<5;i++){
        printf("UseArray1 index %d value %d\r\n",i,param[i]);
    }
    printf("\r\n");
}
int main(){
    int a[5]={1,2,3,4,5};
    useArray1(a);
    useArray2(a);
    useArray3(a,sizeof(a)/ sizeof(int));
    int quarter4[3][3]={
            [0][1]=1
    };
    return 0;
}