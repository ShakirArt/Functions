#include <stdio.h>

int main() {
    int x,y;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("Enter the power : ");
    scanf("%d", &y);
    printf("Result : %d", power(x,y));
}

int power(int x,int y) {
    int i, r = 1;
    for(i=1; i<=y; i++) {
        r = r*x;
    }
    return r;
}
