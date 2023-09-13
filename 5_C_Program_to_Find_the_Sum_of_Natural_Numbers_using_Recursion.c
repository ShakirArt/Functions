#include <stdio.h>

int main() {
    int numbr;
    printf("Enter a number n : ");
    scanf("%d", &numbr);
    printf("Sum of Natural Numbers : %d", sum(numbr));
    return 0;
}

int sum(int num) {
    int r;
    if (num <= 1) {
        return num;
    }
    r = num + sum(num-1);
    return r;
}

