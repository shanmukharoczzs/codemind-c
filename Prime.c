#include<stdio.h>
int main(){
    int i,n,x;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        x=n%i;
        if(x==0){
            printf("Not Prime");
            break;
        }
        else
        printf("Prime");
        break;
    }
       
}