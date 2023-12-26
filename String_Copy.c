#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s1[50],s2[50];
    fgets(s1,50,stdin);
    strcpy(s2,s1);
    printf("%s",s2);
    
}