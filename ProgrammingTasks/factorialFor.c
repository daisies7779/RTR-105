#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Ievadiet veselu decimālskaitli: ");
    scanf("%d", &n);

    // rāda kļūdu, ja ievadīts negatīvs skaitlis
    if (n < 0)
        printf("Faktoriāls no negatīva skaitļa neeksistē");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Faktoriāls skaitlim %d = %llu", n, fact);
    }

    return 0;
}
