#include<stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           if(j==i||j==n-i+1)
           printf("%d ",i);
           else
           printf(" ");
        }
        printf("
");
    }
}