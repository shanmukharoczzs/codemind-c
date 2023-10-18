#include<stdio.h>
#include<math.h>
int main(){
    float n,k,m;
    scanf("%f%f%f",&n,&k,&m);
    float t= k*m;
    printf("%.0f",ceil(n/t));
}