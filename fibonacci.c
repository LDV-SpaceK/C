#include <stdio.h>

int fibonacci(unsigned long long int n, unsigned long long int a, unsigned long long int b) {
    if (n == 0) {
        return a%1000000007;
    } else if (n == 1) {
        return b%1000000007;
    } else {
        return fibonacci((n - 1)%1000000007, (b%1000000007), ((a + b)%1000000007));
    }
}

int main() {
    int a,i;
    do {
        scanf("%d", &a);
        if (a <= 2) printf("Nhap lai so >2: ");
    } while (a <= 2);
    unsigned long long int sum = 0;
    for (i = 0; i < a; i++) {
        sum+=fibonacci(i,0,1);
    }
    printf("Sum = %d",sum%1000000007);

    return 0;
}

