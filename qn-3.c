//3. Write a program to count vowels in a given string


#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],a[11]="aeiouAEIOU";
    int i,j,count=0;
    printf("enter a word:\n");
    fgets(str,100,stdin);

    for(i=0;a[i];i++)
    {
        for(j=0;str[j];j++)
        {
            if(a[i]==str[j])
                count++;
        }
    }
    printf("%d vowels in this string ",count);
}
