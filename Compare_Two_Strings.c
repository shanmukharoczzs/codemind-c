#include<stdio.h>

#include<string.h>

int main(){
    char s1[50],s2[50];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    if(strcmp(s1,s2)==0)
    printf("Strings are Equal");
    else if (s1!=s2)
    printf("Strings are not Equal");
    
}