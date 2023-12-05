#include<stdio.h>
int main(){
    int x,i,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        int a=x%i;
        if(a==0){
            count++;
        }
    }
    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
}