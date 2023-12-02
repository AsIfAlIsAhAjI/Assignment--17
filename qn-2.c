//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    int j=0,i;
    char str[100],k;
    printf("enter a word:\n");
    fgets(str,100,stdin);

    printf("which character u want to count?\n");
    scanf("%c",&k);
    for(i=0;str[i];i++)
    {

        if(k==str[i])
            j++;
    }
    printf("%c is %d times",k,j);
}
