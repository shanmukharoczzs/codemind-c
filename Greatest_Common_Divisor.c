#include<stdio.h>
int main(){
    int a,b,c,hcf=1,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    printf("%d",hcf);
}