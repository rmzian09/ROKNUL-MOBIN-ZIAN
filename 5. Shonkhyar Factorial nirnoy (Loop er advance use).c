#include <stdio.h>

int main()

{
    int n, i;
    long long factorial = 1;
    printf("Ekta shonkhya dao: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        factorial *= i; // factorial = factorial * i
    }
    printf("%d er Factorial holo: %lld\n", n, factorial);
    return 0;
}
