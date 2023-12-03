//6. Write a program to reverse a string.


#include<stdio.h>
int main()
{
    char str[100];
    int i,j=0;
    printf("enter a word:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++)
        j++;

    for(i=j-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }



}
