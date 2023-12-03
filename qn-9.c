//9. Write a C program to sort a string array in ascending order.

#include<stdio.h>
int main()
{
    int i,j;
    char str[100],k;
    printf("enter a sentence or word:\n");
    fgets(str,100,stdin);

    printf("This array's ascending order is:\n");
    for(i=0;str[i];i++)
    {
        for(j=1+i;str[j];j++)
        {
            if(str[i]>=str[j])
            {
                k=str[i];
                str[i]=str[j];
                str[j]=k;
            }

        }
        printf("%c ",str[i]);
    }
}
