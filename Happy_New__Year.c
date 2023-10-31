#include<stdio.h>
int main(){
    int h,m,a,s,d;
    scanf("%d%d",&h,&m);
    a=24-h;
    printf("%d",a*60-m);
}