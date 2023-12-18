#include<stdio.h>
#include<math.h>
int cntDig(int x){
    int n=log10(x)+1;
    return n;
}
int sq(int x){
    int s=x*x;
    return s;
}
int main(){
    int x;
    scanf("%d",&x);
    int d=pow(10,cntDig(x));
        if(sq(x)%d==x)  printf("Automorphic Number");
        else    printf("Not an Automorphic Number");
}