#include<stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    for(i=2*x;i>=2;i=i-2){
        printf("%d ",i);
    }
}
