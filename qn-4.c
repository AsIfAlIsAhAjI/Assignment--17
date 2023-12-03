//4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    char str[100],j[27]="abcdefghijklmnopqrstuvwxyz";
    int i,k;
    printf("enter a name:\n");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {

        for(k=0;j[k];k++)
        {
            if(str[i]==j[k])

             str[i]-=32;
        }
    }

    printf("%s",str);
}
//another process:

/*#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("enter a word:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&& str[i]<='z')
            str[i]-=32;
    }
    printf("%s",str);
}*/

