#include<stdio.h>

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    int sum = 0;
    int n = a+ b;
    printf("Tong cua a va b la: %d\n", n);
    // bài 2 lab 2

    // bào 3 lab 2
    int i;
    for(i = a; i <= b; i++) {
        sum += i;
    }
    printf("Tong tu a den b la: %d\n", sum);

    return 0;
}
