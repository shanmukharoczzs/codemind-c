#include<stdio.h>
#include<math.h>
int rev(int x) {
    int rev = 0;
    while (x > 0) {
        int a = x % 10;
        rev = rev * 10 + a;
        x /= 10;
    }
    return rev;
}
    
int main(){
    int x,a;
    scanf("%d%d",&x,&a);
    int df=pow(10,a);
    int n=x%df;
    int m=rev(rev(x)%df);
    printf("%d",abs(m-n));
    
    
    
}