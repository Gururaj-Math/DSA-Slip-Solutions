#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define max 100
int top, stack[max];
void push(char x)
{
    if(top==-1)
    {
        printf("Stack overflow");
        }
    else
    {
        stack[++top]=x;
        }
}
void pop(){
    printf("%c",stack[top--]);
}
void main(){
    int i, len, flag;
    char temp[100];
    char str[100];
    printf("Enter string:\n");
    scanf("%s",&str);
    len=strlen(str);
    for (i = 0; i < len; i++){
        push(str[i]);
    }
    for (i = 0; i < len; i++){
        pop();
    }
    for(i=0; i<len; i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\nThe string is not a palindrome");
    }
    else{
        printf("\nThe string is a palindrome");
    }
    getch();
}