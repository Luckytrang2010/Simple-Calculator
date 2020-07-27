#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int howmanyvalues(void) {
    int v;
    printf("How many values are you gonna involve?: ");
    scanf("%i",&v);
    return v;
}

int main()
{
    int option = 0;
    int values = 0;
    printf("1 - Add numbers\n2 - Subtract numbers\n3 - Divide numbers\n4 - Multiply numbers\nOption: ");
    scanf("%i",&option);
    values = howmanyvalues();
    double result = 0;
    if (option == 1) {
        float a[values];
        for (int num = 0; num < values; num++) {
            printf("What number?: ");
            scanf("%f",&a[num]);
            result += a[num];
        }
    } else if (option == 2) {
        float mainnumber = 0;
        float b[values];
        printf("What number would you like to subtract?: ");
        scanf("%f",&mainnumber);
        printf("\n");
        for (int num = 0; num < values; num++) {
            printf("What number?: ");
            scanf("%f",&b[num]);
            mainnumber -= b[num];
            result = mainnumber;
        }
    } else if (option == 3) {
        float mainnumber = 0;
        float c[values];
        printf("What number would you like to divide?: ");
        scanf("%f",&mainnumber);
        printf("\n");
        for (int num = 0; num < values; num++) {
            printf("What number?: ");
            scanf("%f",&c[values]);
            mainnumber = mainnumber / c[values];
            result = mainnumber;
        }
    } else if (option = 4) {
        float mainnumber = 0;
        float d[values];
        printf("What number would you like to multiply?: ");
        scanf("%f",&mainnumber);
        printf("\n");
        for (int num = 0; num < values; num++) {
            printf("What number?: ");
            scanf("%f",&d[num]);
            mainnumber = mainnumber * d[num];
            result = mainnumber;
        }
    }
    int tryagain = 0;
    printf("The result: %f\nWould you like to use it again?\n1 - Yes\n0 - No\nOption: ",result);
    scanf("%i",&tryagain);
    if (tryagain == 1) {
        main();
    }
}
