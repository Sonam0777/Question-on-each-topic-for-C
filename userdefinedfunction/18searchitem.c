#include <stdio.h>

void input(int a[],int);
void search(int a[],int,int);
int main()
{
    int n;
    printf("enter nth term ");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    int key;
    printf("enter the element you want to search ");
    scanf("%d",&key);
    search(a,n,key);
    return 0;
}

void input(int a[],int n)
{
    int i;
    printf("enter array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void search(int a[],int n, int key)
{
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("\nSuccessful Search");
    }
    else
    {
        printf("\nUnsuccessful Search");
    }
}