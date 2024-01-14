#include <stdio.h>

void input(int a[],int);
void min(int a[], int);
int main()
{
    int n;
    printf("enter nth term  ");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    min(a,n);
    return 0;
}

void input(int a[],int n)
{
    printf("enter array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void min(int a[],int n)
{
    int i,j;
    int minimum = a[0];
    for(i=1;i<n;i++)
    {
        if(minimum > a[i])
        {
            minimum = a[i];
        }
    }
    printf("\nminimum value = %d",minimum);
}