#include <stdio.h>

int fibo(int n) {
    if (n == 0 || n == 1)
        return n = 1;

    int fn1 = 1, fn2 = 1, fn,i;
    for (i = 1; i < n; i++) {
        fn = (fn1 + fn2) % 1000000007;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn;
}

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0,i;
    for (i = 0; i < n  ; i++) {
        sum = (sum + fibo(i)) % 1000000007;
    }
    printf("%d\n", sum);
    return 0;
}
