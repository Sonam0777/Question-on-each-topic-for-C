#include <stdio.h>
int main()
{
    /* char x[] = {"Happy new year!!"};
    char y[50];
    for(int i = 0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    printf("copied string is\n");
    for(int i=0;y[i]!='\0';i++){
    printf("%c",y[i]);}
    return 0; */

    char a[50],b[50];
    int i;
    printf("enter any string ");
    gets(a);

    for(i = 0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';

    printf("copied string is ");
    puts(b);

    return 0;
}