#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter 2 numbers : ");
    scanf("%d%d", &num1, &num2);
    printf("G.C.D : %d", gcd(num1, num2));
}
int gcd(int n1, int n2) {
    int i;
    if (n1==n2) {
        return n1;
    }
    else if (n1==0) {
        return n1;
    }
    else if (n2==0) {
        return n2;
    }
    else if (n1>n2) {
        i = gcd(n1-n2, n2);
        return i;
    }
    else {
        i = gcd(n1, n2-n1);
        return i;
    }
}

