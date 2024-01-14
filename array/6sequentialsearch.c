#include <stdio.h>
int main()
{
    int n;
    printf("enter nth array elements ");
    scanf("%d",&n);

    int a[n],i;

    printf("enter array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int key,flag=0;

    printf("enter key elements you want to search ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        printf("Successsfull Search!!!!");
    }
    else{
        printf("Unsuccessful Search!!!");
    }
    
    return 0;
}