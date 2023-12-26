#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int wc=0;
    fgets(str,100,stdin);
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]==' ')
        wc++;
    }
    printf("%d",wc+1);
}