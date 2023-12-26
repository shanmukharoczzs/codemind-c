#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    int uc=0;
    fgets(str,50,stdin);
    for(int i=0;str[i]!=NULL;i++){
        if(isupper(str[i])>0)
        uc++;
    }
    printf("%d",uc);
}