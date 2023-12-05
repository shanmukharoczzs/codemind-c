#include<stdio.h>
int main(){
    int x,i,max;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<=x-1;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<x;i++){
        if(arr[i]>max){
             max=arr[i];
        }
        
    }
    printf("%d",max);
}