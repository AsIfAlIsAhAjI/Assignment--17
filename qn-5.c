//5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char str[100],j[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,k;
    printf("enter a name:\n");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {

        for(k=0;j[k];k++)
        {
            if(str[i]==j[k])

             str[i]+=32;
        }
    }

    printf("%s",str);
}

//Another process:

/*#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("enter a word:\n");
    fgets(str,100,stdin);

    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
    }
    printf("%s",str);
}*/

