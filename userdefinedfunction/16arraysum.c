#include <stdio.h>
void input(int a[],int);
void sum(int a[], int);
int main()
{
    int n;
    printf("enter nth term for sum ");
    scanf("%d",&n);
    int a[n];
    printf("enter array element ");
    input(a,n);
    sum(a,n);
    return 0;
}

void input(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void sum(int a[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    printf("sum of array is %d",sum);
}