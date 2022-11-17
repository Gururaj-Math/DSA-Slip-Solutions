#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int top=-1;
int i;
int stack[max];
void main(){
    char item[max];
    if(top==max-1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter string to push in stack: ");
        scanf("%s",&item);
        top=top+1;
        stack[top]=item;
    }
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack elements:\n");
        for(i=top;i>=0;--i)
        {
            printf("%s\n",stack[i]);
        }
    }
    printf("\nReversed string:\n");
    for(i=top;i>=0;--i)
        {   
            strrev(item);
            printf("%s\n",stack[i]);
        }
    getch();
}
