#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter the values of a,b,c for a Quadratic equation\n");
    scanf("%d%d%d", &a, &b, &c);
    if(discriminant(a,b,c)<0){
        printf("The result is imaginary number.");
    }
    else{
        printf("The 1st root : %d", root1(a,b,c));
        printf("\nThe 2nd root : %d", root2(a,b,c));
    }
    return 0;

}

int discriminant(int a,int b,int c) {
    int s, n;
    s = pow(b,2);
    n = s-(4*a*c);
    return n;
}

int root1(int a, int b, int c) {
    int r, dis, d, x;
    dis = discriminant(a,b,c);
    r = sqrt(dis);
    d = -b+r;
    x = d/(2*a);
    return x;
}

int root2(int a, int b, int c) {
    int r, dis, d, x;
    dis = discriminant(a,b,c);
    r = sqrt(dis);
    d = -b-r;
    x = d/(2*a);
    return x;
}
