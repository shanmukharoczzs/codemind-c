#include<stdio.h>
#include<math.h>
int main(){
    int n,a,s,d;
    scanf("%d", &a);
    s= pow(a*(a+1)/2,2);
    d= ((a)*(a+1)*(2*a+1))/6;
    n= abs(s-d);
    printf("%d",n);
    
}