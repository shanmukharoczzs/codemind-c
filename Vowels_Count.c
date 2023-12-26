#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[50];
    int vc=0;
    fgets(str,50,stdin);
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vc++;
    }
    printf("%d",vc);
}