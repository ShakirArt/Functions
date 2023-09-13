#include <stdio.h>

int main() {
    int num, i;
    printf("Enter the number ");
    scanf("%d", &num);
	if (flag(num)==1) {
		printf("%d is a Prime Number", num);
	}
	else {
		printf("%d is not a Prime Number", num);
	}
    return 0;
}

int flag(int n) {
    int i, x = 0;


	if (n<2) {
		return 0;
	}
	else {
        for (i=2; i<=n/2; i++) {
            if (n%i==0) {
                x = 1;
                break;
            }
        }
        if(x==1) {
            return 0;
        }
        else {
            return 1;
        }

	}

}


