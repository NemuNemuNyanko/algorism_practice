#include<stdio.h>
#include<string.h>

void change(char s[]){
    s[0] = 'A';
}


int main(void){
    char s[100],p[100];
    scanf("%s",s);
    scanf("%s",p);

    char s2[230];
    

    change(s2);
    printf(s2);
}