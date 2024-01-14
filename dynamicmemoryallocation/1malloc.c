#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n,i;
    printf("enter nth elements ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated!!");
        exit(0);
    }
    else
    {
        printf("enter array elements ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }

        printf("\narray elements are \n");
        for(i=0;i<n;i++)
        {   
            printf("%d\t",*(ptr+i));
        }

        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum = sum + *(ptr+i);
        }

        printf("\nthe sum is %d",sum);
    }
    free(ptr);
    return 0;
}