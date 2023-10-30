#include<stdio.h>
#include<math.h>
int main(){
    float a,b,var,i;
    float sum=0.0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++){
        var=sqrt(i);
        sum+=var;
    }
    printf("%.2f",sum);
}