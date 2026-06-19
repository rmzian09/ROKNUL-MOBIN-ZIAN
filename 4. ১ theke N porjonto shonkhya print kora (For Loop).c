#include <stdio.h>

int main()

{
    int n, i;
    printf("N er man dao: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
