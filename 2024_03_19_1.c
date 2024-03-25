#include <stdio.h>
#include <time.h>

// 반복 함수
double factorial_iter(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// 재귀 함수
double factorial_rec(int n) {
    if (n == 0 || n == 1)
        return 1.0;
    else
        return (double)n * factorial_rec(n - 1);
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    int n = 20;

    // 반복 함수 실행 시간
    start = clock();
    double result_iter = factorial_iter(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Factorial Iterative Result: %.0lf\n", result_iter);
    printf("Time: %lf seconds\n\n", cpu_time_used);

    // 재귀 함수 실행 시간
    start = clock();
    double result_rec = factorial_rec(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Factorial Recursive Result: %.0lf\n", result_rec);
    printf("Time: %lf seconds\n", cpu_time_used);

    return 0;
}
