#include<stdio.h>
int main(){
    int x,count1=0,count2=0;
    scanf("%d",&x);
    while(x!=0){
        int n=x%10;
        if(n%2==0){
            count1++;
            //continue;
        }
        else
        count2++;
        x/=10;
    }
    if(count1==0)
    printf("Odd");
    else if(count2==0)
    printf("Even");
    else
    printf("Mixed");
}