#include <stdio.h>
int main()
{
    struct Table{
        int length;
        int breadth;
        int height;
        struct Measurement{
            float meter;
            float centimeter;
        };
    };
    struct Table tab;
    struct Measurement volume;
    printf("enter height: ");
    scanf("%d",&tab.height);
    printf("enter lenght: ");
    scanf("%d", &tab.length);
    printf("enter breadth: ");
    scanf("%d", &tab.breadth);

    volume.centimeter = tab.length * tab.breadth * tab.height;
    printf("\nthe volume in centimeter is %.2f cm^3",volume.centimeter);
    volume.meter = (tab.length/100) * (tab.breadth/100) * (tab.height/100);
    printf("\nthe volume in meter is %.2f m^2",volume.meter);
    return 0;
}