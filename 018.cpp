﻿#include <stdio.h>

int main()
{
    int n;
    printf("n입력 : ");
    scanf_s("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d", sum);
}
