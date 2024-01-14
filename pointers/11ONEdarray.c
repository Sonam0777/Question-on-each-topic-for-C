#include <stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    int i,*ptr;
    ptr = &a[0];
    printf("\n Array and pointer equivalent ");
    printf("\na[i] \t\t&a[i] \t\t*ptr \tptr+1 \t\t*(a+i)\t a[i]\t i[a]");
    printf("\n*******************************************");
    for(i=0;i<5;i++)
    {
        printf("\na[%d]=%d:\t%p\t%d\t%p\t%d\t%d\t%d",i,a[i],&a[i],*ptr,ptr+i,*(ptr+i),a[i],i[a]);
    }
    return 0;
}