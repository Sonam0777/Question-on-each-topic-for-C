#include <stdio.h>
int main()
{
    int n;
    printf("enter the length of an array ");
    scanf("%d",&n);

    int a[n],i;

    printf("enter the elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //algorithm for smallest and largest elements

    int largest = a[0];
    int smallest = a[0];
    
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest = a[i];
        }

        if(a[i]<smallest)
        {
            smallest = a[i];
        }
    }

    printf("the largest value id %d",largest);
    printf("\nthe smallest value is %d",smallest);
    return 0;
}