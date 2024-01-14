#include <stdio.h>
#define N 100

int main()
{
    struct account{
        char name[20];
        int acct_no;
        float balance;
    };
    struct account customer[N];

    int i,n;
    printf("How many customer: ");
    scanf("%d",&n);
    float max_balance;
    int max_index;

    for(i=0;i<n;i++)
    {
        printf("Enter data for customer %d:\n",i+1);
        printf("enter account number:");
        scanf("%d",&customer[i].acct_no);
        printf("enter name: ");
        scanf("%s", customer[i].name);
        printf("enter balance: ");
        scanf(" %f",&customer[i].balance);
    }
    max_balance = customer[0].balance;
    max_index = 0;
    for(i=1;i<n;i++)
    {
        if(customer[i].balance > max_balance)
        {
            max_balance = customer[i].balance;
            max_index = i;
        }
    }

    printf("\nCustomer having highest balance: \n");
    printf("Account Number:%d\n",customer[max_index].acct_no);
    printf("Name: %s\n",customer[max_index].name);
    printf("Balance: %.2f\n",customer[max_index].balance);
    return 0;
}