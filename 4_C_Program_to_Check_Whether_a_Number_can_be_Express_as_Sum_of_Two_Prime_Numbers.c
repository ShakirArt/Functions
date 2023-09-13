#include <stdio.h>

int main() {
    int num, flag = 0, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        if(prime(i)==0) {
            if(prime(num-i)==0) {
                flag = 1;
                break;
            }
        }
    }
    if(flag==1) {
        printf("YES");
    }
    else {
        printf("NO");
    }

}

int prime(int i) {
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



