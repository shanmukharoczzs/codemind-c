#include<stdio.h>
int main(){
    int i,j,x,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--){
            printf("%c ",64+i);
        }
        printf("
");
    }
}
