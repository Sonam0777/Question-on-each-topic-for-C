#include <stdio.h>
int main()
{
    struct book{
        char name[20];
        int pages;
        float price;
    };
    struct book b[2], *bptr;

    float temp;
    bptr = b;
        for(bptr=b;bptr<b+2;bptr++)
        {
            printf("Enter name: ");
            scanf("%s", bptr->name);
            printf("Enter no of pages: ");
            scanf("%d",&bptr->pages);
            printf("enter price: ");
            scanf("%f",&temp);
            bptr->price=temp;
        }
    
    printf("\nName\t\tNo.ofpages\tPrice\n");
        for(bptr=b;bptr<b+2;bptr++)
        {
            printf("%s\t\t%d\t%.2f\n",bptr->name,bptr->pages,bptr->price);
            printf("%s\t\t%d\t%.2f\n",(*bptr).name,(*bptr).pages,(*bptr).price);
        }
    return 0;
}