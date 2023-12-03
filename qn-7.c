/*7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/


#include<stdio.h>
int main()
{
    int count_a=0,count_d=0,count_s=0,i;
    char str[100];
    printf("enter words:\n");
    gets(str);

    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
           count_a++;

        else
            if(str[i]>='0'&& str[i]<='9')
            count_d++;
        else
            count_s++;
    }
    printf("In this string array\nalphabets are %d\ndigits are %d\nspecial characters are %d",count_a,count_d,count_s);
}
