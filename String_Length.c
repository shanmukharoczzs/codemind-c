#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    fgets(str,50,stdin);
    printf("%d",strlen(str)-1);
}