#include<stdio.h>
int main(){
    int n,i,min;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<arr[i+1])
        min=arr[i];
        else
        min=arr[i+1];
    }
    printf("%d",min);
    
}