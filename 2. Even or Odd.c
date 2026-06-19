#include <stdio.h>

int main()

{
    int num;
    printf("Ekta shonkhya dao: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d holo Jorh (Even) shonkhya.\n", num);
    }
    else
    {
        printf("%d holo Bejorh (Odd) shonkhya.\n", num);
    }
    return 0;
}
