#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int t=21-a-b;
    if(t>10)
    printf("-1");
    else
    printf("%d",t);
    
}