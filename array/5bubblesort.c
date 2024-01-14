#include <stdio.h>
int main()
{
    int n;
    printf("enter nth array elements ");
    scanf("%d",&n);

    int a[n],i,j;

    printf("enter array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("arrat elements before sorting ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    //algorithm for bubble sort

    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\narray elements after sorting ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}