#include<stdio.h>
int main(){
    int x,n,j,i;
    scanf("%d",&n);
    if(n>2){
    for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("
");
    }
    for(i=n-1;i>=1;i--){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("
");
    }
    }
    else    printf("The pattern is not possible");
    
  
}