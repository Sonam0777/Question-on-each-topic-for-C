#include <stdio.h>
#include <string.h>
int main()
{
    char *namaste = "NAMASKAR SIR";
    char name[20];
    printf("enter your name: ");
    gets(name);
    puts(namaste);
    printf("\nNamaskar %s Sir",name);
    return 0;
}