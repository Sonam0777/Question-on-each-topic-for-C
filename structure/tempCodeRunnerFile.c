#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define N 200

struct account {
    int acct_no;
    char name[20];
    float balance;
};

int count = 0;

void display(struct account customer[]);
void deposit(struct account customer[]);
void withdrawal(struct account customer[]);
void createAccount(struct account customer[]);

int main() {
    struct account customer[N];
    int choice;

    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Create Account\n");
    printf("4. Customers with balance below Rs. 100\n");
    printf("5. Exit\n");

    while (TRUE) {
        printf("Enter a choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposit(customer);
                break;

            case 2:
                withdrawal(customer);
                break;

            case 3:
                createAccount(customer);
                break;

            case 4:
                display(customer);
                break;

            case 5:
                exit(0);

            default:
                printf("Wrong Choice! Try Again\n");
        }
    }

    return 0;
}

void deposit(struct account customer[]) {
    int acct_no;
    char name[20];
    float amount;

    printf("Enter account number: ");
    scanf("%d", &acct_no);
    printf("Enter name: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if ((customer[i].acct_no == acct_no) && (strcmp(customer[i].name, name) == 0)) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            customer[i].balance += amount;
            printf("Deposit successful. New balance: %.2f\n", customer[i].balance);
            return; // exit the function once the deposit is done
        }
    }

    printf("Account not found.\n");
}

void withdrawal(struct account customer[]) {
    int acct_no;
    char name[20];
    float amount;

    printf("Enter account number: ");
    scanf("%d", &acct_no);
    printf("Enter name: ");
    scanf("%s", name);

    for (int i = 0; i < count; i++) {
        if ((customer[i].acct_no == acct_no) && (strcmp(customer[i].name, name) == 0)) {
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if ((customer[i].balance - amount) >= 0) {
                customer[i].balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", customer[i].balance);
            } else {
                printf("Insufficient funds. Withdrawal failed.\n");
            }

            return; // exit the function once the withdrawal is done
        }
    }

    printf("Account not found.\n");
}

void createAccount(struct account customer[]) {
    printf("Enter account number: ");
    scanf("%d", &customer[count].acct_no);
    printf("Enter name: ");
    scanf("%s", customer[count].name);
    printf("Enter balance: ");
    scanf("%f", &customer[count].balance);
    count++;
    printf("Account created successfully.\n");
}

void display(struct account customer[]) {
    printf("\nCustomers with balance below Rs. 100:\n");
    for (int i = 0; i < count; i++) {
        if (customer[i].balance < 100) {
            printf("Account number: %d\n", customer[i].acct_no);
            printf("Name: %s\n", customer[i].name);
        }
    }
}
