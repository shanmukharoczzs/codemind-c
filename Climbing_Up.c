#include<stdio.h>
int main(){
    int x,y,n,m;
    scanf("%d%d",&x,&y);
    n=x%y;
    m=x/y;
    printf("%d",n+m);
    
}