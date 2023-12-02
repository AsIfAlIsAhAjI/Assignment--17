#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,n,i,m,r,j;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    printf("how many times u want to rotate it:\n");
    scanf("%d",&r);
    printf("enter %d numbers\n",n);

    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("1.right direction\n");
    printf("2.left direction\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
            for(j=1;j<=r;j++)
            {

                for(i=0;i<n;i++)
                {
                    m=a[i];
                    a[i]=a[n-1];
                    a[n-1]=m;

                }
            }
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 2:
             for(j=1;j<=r;j++)
            {

                for(i=n-1;i>=0;i--)
                {
                    m=a[n-1];
                    a[n-1]=a[i];
                    a[i]=m;

                }
            }
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
            break;

    }
}




