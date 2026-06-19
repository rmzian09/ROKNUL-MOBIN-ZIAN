#include <stdio.h>

int main()

{
    int n1, n2, n3;
    printf("Tinti shonkhya dao: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("Boro shonkhya: %d\n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("Boro shonkhya: %d\n", n2);
    else
        printf("Boro shonkhya: %d\n", n3);

    return 0;
}
