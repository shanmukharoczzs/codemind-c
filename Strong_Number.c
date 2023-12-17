#include<stdio.h>
int factorial(int x){
	int fact=1;	
	for(int i=x;i>=1;--i)
	{
		fact=fact*i;
	}
	return fact;
}
int main(){
    int t,x;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        scanf("%d",&x);        
        int sum=0;
        int num=x;
       while(x>0){
           int a=x%10;
           sum+=factorial(a);
           x/=10;
       }
       if(sum==num) printf("Strong
");
       else		printf("Not Strong
");
    }
}