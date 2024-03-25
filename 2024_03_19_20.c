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

// 반복 함수 계산
double power_iter(int base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// 재귀 함수 계산
double power_rec(int base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    } else {
        return base * power_rec(base, exponent - 1);
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

    // 13의 21 거듭제곱 계산
    double result_iter = power_iter(13, 21);
    double result_rec = power_rec(13, 21);

    printf("13의 21 거듭제곱을 반복 함수로 계산한 결과: %.15lf\n", result_iter);
    printf("13의 21 거듭제곱을 재귀 함수로 계산한 결과: %.15lf\n", result_rec);

    return 0;
}
