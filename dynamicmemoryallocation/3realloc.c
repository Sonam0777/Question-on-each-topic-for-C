#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,n,i;
    printf("enter the length of an array ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("memory not allocated!!");
        exit(0);
    }
    else
    {
        printf("enter array elemetns ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        
        printf("\nthe array elements are ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }
    }
    int *ptr1,newSize;
    printf("\nenter new size of array ");
    scanf("%d",&newSize);

    ptr1 = (int*)realloc(ptr,newSize*sizeof(int));

    if(ptr1==NULL)
    {
        printf("Memory not allocated ");
        exit(0);
    }
    else
    {
        int size = newSize - n;
        if(size>0)
        {
            printf("\nadd more array elements ");
            for(i=n;i<newSize;i++)
            {
                scanf("%d",(ptr+i));
            }
            printf("\nnew array is ");
            for(i=0;i<newSize;i++)
            {
                printf("%d\t",*(ptr+i));
            }
        }
        else
        {
            printf("new is less than and equal to original size");
        }
    }
    free(ptr);
    free(ptr1);
    return 0;
}