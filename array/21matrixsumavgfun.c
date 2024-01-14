#include <stdio.h>
void input(int a[],int n);
int sum(int a[],int n);
int avg(int a[],int n);
void main()
{
    int n;
    printf("enter the nth element ");
    scanf("%d",&n);
    int a[n],i;
    printf("enter array elements \n");
    input(a,n);
    printf("\nthe sum of array is : %d",sum(a,n));
    printf("\nthe average of array is : %d",avg(a,n));
}

void input(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

int sum(int a[], int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int avg(int a[],int n)
{
    int avaerage = sum(a,n)/n;
    return avaerage;
}