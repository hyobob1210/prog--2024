﻿#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main()
{
    char s[10];
    
    scanf_s("%s", s, sizeof(s));
    // scanf_s("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);

}
