#include<stdio.h>
int main(){
    int x,sum=0;
    scanf("%d",&x);
    for(int i=1;i<x;i++){
        if(x%i==0)  sum+=i;
    }
    if(sum==x){
        printf("True");
    }
    else
    printf("False");
}