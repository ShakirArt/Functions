#include <stdio.h>

int main() {
    int numbr;
    printf("Enter a number : ");
    scanf("%d", &numbr);
    printf("Factorial : %d", fact(numbr));
    return 0;
}

int fact(int n) {
    int r;
    if (n <= 1) {
        return n;
    }
    r = n * fact(n-1);
    return r;
}
