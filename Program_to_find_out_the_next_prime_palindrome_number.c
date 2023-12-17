#include<stdio.h>
int ifPrime(int n){
	int fc=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) fc++; 
    }
    return fc==2;
}
int rev(int n){
    int rev=0;
    while(n>0){
        int a=n%10;
        rev=rev*10+a;
        n/=10;
    }
    return rev;
}
int nextPalindrome(int n){
    while(1){
        if(n==rev(n)&&ifPrime(n))
        break;
        else
        n++;
    }
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",nextPalindrome(n+1));
}