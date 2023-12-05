#include<stdio.h>
int main(){
    int i,n,x,sum=0,prod=1;
    scanf("%d",&n);
    while(n>0){
        x=n%10;
        sum+=x;
        prod*=x;
        n/=10;
    }
    if(sum==prod)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}