#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int rev=0;
        int temp=i;
        while(temp!=0){
            int x=temp%10;
             rev=rev*10+x;
             temp/=10;
        }
        if(rev==i)
        printf("%d ",rev);
        
    }
}