#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("enter the no of students you want to print ");
    scanf("%d",&n);

    char a[n][20],temp[20];
    int i,j;
    printf("enter the name of students ");
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]", a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    printf("\nsorted list \n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}