#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,i,j,n;
    printf("enter nth array elements ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));
    
    if(ptr==NULL)
    {
        printf("Memory not allocated ");
        exit(0);
    }
    else
    {
        printf("enter array elements: ");
        for(i=0;i<n;i++)
        {
        scanf("%d",(ptr+i));
        }

        printf("\nbefore sorting: ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }

        //sorting alogrithm
        int temp;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(*(ptr+i)>*(ptr+j))
                {
                    temp = *(ptr+i);
                    *(ptr+i) = *(ptr+j);
                    *(ptr+j) = temp;
                }
            }
        }

        printf("\nafter sorting: ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}