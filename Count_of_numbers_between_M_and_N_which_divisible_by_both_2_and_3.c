#include<stdio.h>
int main(){
    int a,b,x,i,count=0;
    scanf("%d%d",&a,&b);
    for(i=b;i>=a;i--){
        x=i%6;
        if(x==0)
        count++;
    }
    printf("%d",count);
}