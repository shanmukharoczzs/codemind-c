#include<stdio.h>
int sum(int x){
    int sum=0;
    while(x>0){
        int a=x%10;
        sum+=a;
        x/=10;
    }
    return sum;
}
int prod(int x){
    int pro=1;
    while(x>0){
        int b=x%10;
        pro*=b;
        x/=10;
    }
    return pro;
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",prod(x)-sum(x));
}