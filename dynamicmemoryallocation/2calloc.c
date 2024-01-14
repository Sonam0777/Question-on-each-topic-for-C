#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("enter the nth array element ");
    scanf("%d",&n);

    ptr = (int *)calloc(n,sizeof(int));

    if(ptr==NULL)
    {
        printf("Memory not allocated!!");
        exit(0);
    }
    else
    {
        printf("enter array elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        
        printf("\narray elements: ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }
        int sum =0;
        for(i=0;i<n;i++)
        {
            sum = sum + *(ptr+i);
        }
        printf("\nthe sum is %d",sum);
    }
    free(ptr);
    return 0;
}