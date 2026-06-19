#include <stdio.h>
#include <string.h>

int main()

{
    char str[100];
    printf("Ekta shobdo (String) likho: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("Ulto korle hoy: ");
    for (int i = len - 1; i >= 0; i--)

    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
