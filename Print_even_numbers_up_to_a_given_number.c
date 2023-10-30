#include<stdio.h>
int main(){
    int i,a,n;
    scanf("%d%d",&a,&n);

    for(i=a;i<=n;i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }
    
}