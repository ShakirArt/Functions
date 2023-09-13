#include <stdio.h>

int main() {
    int num, ber, i;
    printf("Enter the starting number : ");
    scanf("%d", &num);
    printf("Enter the ending number : ");
    scanf("%d", &ber);
    printf("Prime numbers :\n");
    for(i=num; i<=ber; i++){
        if(prm(i)==0) {
            printf("%d\n", i);
        }
    }
}

int prm(int i) {
    int j, x = 0;
    if(i<2) {
        x = 1;
    }
    else {
        for(j=2; j<=i/2; j++) {
            if(i%j==0) {
                x = 1;
                break;
            }
        }
    }

    if (x==0) {
        return 0;
    }
    else {
        return 1;
    }
}



