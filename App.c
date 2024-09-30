#include <stdio.h>
#include <conio.h>

int main() {
    int i = 0, sum = 0;

    for ( ; i <= 10; ) {
        sum += i;
        i++;
    }
    printf("La somme est : %d\n", sum);

    return 0;
}
