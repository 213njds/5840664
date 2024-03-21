#include <stdio.h>
#include <time.h>

// 반복 함수
long fact_iter(int n) {
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 재귀 함수
long factorial_rec(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_rec(n - 1);
    }
}

int main() {
    int n = 20;

    // 반복 함수 결과값
    long result_iterative = fact_iter(n);
    printf("%d! 을(를) 반복 함수로 계산한 결과: %ld\n", n, result_iterative);

    // 재귀 함수 결과값
    long result_recursive = factorial_rec(n);
    printf("%d! 을(를) 재귀 함수로 계산한 결과: %ld\n", n, result_recursive);

    return 0;
}
