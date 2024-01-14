#include <stdio.h>
#include <string.h>

void input(char*);
void conversion(char *);
int main()
{
    char ch;
    input(&ch);
    conversion(&ch);
    printf("the corresponding character is %c",ch);
    return 0;
}

void input(char* ch)
{
    printf("enter any character ");
    scanf(" %c",ch);
}

void conversion(char* ch)
{
    if(*ch>='A' && *ch<='Z'){
        *ch = *ch+32;
    }
    else if(*ch>='a' && *ch<='z')
    {
        *ch = *ch-32;
    }
    /* printf("the corresponding character is %c",*ch); */
}