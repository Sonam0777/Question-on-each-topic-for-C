#include <stdio.h>
int main()
{
    int n;
    printf("enter size of an array");
    scanf("%d",&n);
    int a[n];
    int i,flag=0;
    printf("enter the elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("\nenter the key elements ");
    {
        scanf("%d",&key);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag = 1;
        }
    }
    if(flag==1)
        {
            printf("successful search!!");
        }
    else
        {
            printf("\nunsuccessful search!!");
        }
    return 0;
}