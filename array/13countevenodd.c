#include <stdio.h>
int main()
{
    int a[25],i;
    int evenCount = 0;
    int oddCount = 0;

    printf("enter the elements of matrix ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("\n there are %d even number in a array.",evenCount);
    printf("\n there are %d odd numbers in an array.",oddCount);
    return 0;
}