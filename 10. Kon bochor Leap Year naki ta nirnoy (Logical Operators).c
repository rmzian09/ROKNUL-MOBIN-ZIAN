#include <stdio.h>

int main()

{
    int year;
    printf("Bochor ti likho: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d holo Leap Year.\n", year);
    }
    else
    {
        printf("%d holo Leap Year noy.\n", year);
    }
    return 0;
}
