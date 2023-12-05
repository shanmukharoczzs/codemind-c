#include<stdio.h>
int main(){
    float i,x,sum=0.0;
    scanf("%f",&x);
    for(i=1;i<=x;i++){
        sum+=1/i;
    }
    printf("%.2f",sum);
}