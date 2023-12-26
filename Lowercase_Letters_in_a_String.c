#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    int lc=0;
    fgets(str,50,stdin);
    for(int i=0;str[i]!=NULL;i++){
        if(islower(str[i])>0)
        lc++;
    }
    printf("%d",lc);
}