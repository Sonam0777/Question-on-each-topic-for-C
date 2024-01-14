#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define N 200
int count=0,i;

/* void display(struct account customer[]); */
int main()
{
    struct account{
        int acct_no;
        char name[20];
        float balance;
    };
    struct account customer[N];
    void display(struct account customer[]); 
    int choice, acct_no;
    char name[20];
    float amount;
    printf("1. Deposit\n");
    printf("2.Withdral\n");
    printf("3.Create Account\n");
    printf("4.Customer with balance below Rs. 100\n");
    printf("5. Exit\n");
    while(TRUE)
    {
        printf("Enter a choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter account number: ");
                scanf("%d", &acct_no);
                printf("enter name:");
                scanf("%s", name);
                for(i=0;i<count;i++)
                {
                    if((customer[i].acct_no==acct_no) && (strcmp(customer[i].name, name)==0))
                    {
                        printf("enter amount to deposit:");
                        scanf("%f", &amount);
                        customer[i].balance=customer[i].balance+amount;
                        break;
                    }
                }
            case 2:
                printf("Enter account number:");
                scanf("%d", &acct_no);
                printf("Enter name:");
                scanf("%s", name);
                for(i=0;i<count;i++)
                {
                    if((customer[i].acct_no == acct_no) && (strcmp(customer[i].name, name) == 0))
                    {
                        printf("enter withdrwal amount: ");
                        scanf("%f", &amount);
                        if((customer[i].balance-amount)>0)
                            customer[i].balance -=customer[i].balance;
                        else
                        printf("The balance is insufficient\n");
                        break;
                    }
                }
                if( i == count)
                    printf("No Match found\n");
                break;
            
            case 3:
                printf("Enter account number: ");
                scanf("%d", &customer[count].acct_no);
                printf("enter name: ");
                scanf("%s", customer[count].name);
                printf("enter balance ");
                scanf("%f", &customer[count].balance);
                count++;
                break;
            case 4:
                display(customer);
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong Choice!Try Again\n");
        }
    }
    return 0;
}

void display(struct account customer[N])
{
    printf("\nCustomers with balance rs 100:\n");
    for(i=0;i<count;i++)
    {
        if(customer[i].balance < 100)
        {
            printf("Account number: %d\n", customer[i].acct_no);
            printf("Name: %s\n",customer[i].name);
        }
    }
}