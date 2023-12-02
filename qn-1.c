//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
#include<string.h>
int main()
{

    char str[100];
    int i;
    printf("Enter a word:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++);

    printf("The length of this string is: %d",i-1);

}
