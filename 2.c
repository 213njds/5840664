/* #include <stdio.h>
#define MAX_NUM 100

int main()
{
    int num = 2, i;
    
    while(num <= MAX_NUM) {
        i = 2;

        while (i < num) {
            if (num % i == 0) break;
            i++;
        }
    if (num == 1) printf("%d", num);
    num++;
    }
    printf("\n");
    return 0;
}
// 1~100까지 소수 출력하기 */


#include<stdio.h>
int main(void)
{
    int sum = 0;
    int k = 0;
    for(int i=2; i<=100; i++)
{
    for (k=2; k<i; k++)
{
    if(i % k==0) break;
}
if(k == i)
sum += k;
}
printf("1부터 100까지 소수의 합 = %d\n", sum);
system("pause");

};