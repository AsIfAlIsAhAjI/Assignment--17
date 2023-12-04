//10. Write a program in C to Find the Frequency of Characters.

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char k[255]={0};
    char str[100];
    printf("enter a sentence or word:\n");
    gets(str);

    for(i=0;str[i];i++)
    {
        k[str[i]]++;
    }
    for(i=0;i<255;i++)
    {
        if(k[i]!=0)
        printf("%c ==> %d times\n",i,k[i]);
    }
}

