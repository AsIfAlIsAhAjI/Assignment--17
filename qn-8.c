//8. Write a program in C to copy one string to another string.

#include<stdio.h>
int main()
{
    char str[100],cpy[100];
    int i;
    printf("enter a number:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++)
    {
        cpy[i]=str[i];
    }
    printf("%s",cpy);
}
