﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 8
*/

int main(int argc, char* argv[])
{
    int e, f;
    printf("[e, f] = ");
    scanf("%d%d", &e, &f);
    if (e < f)
        for (int i = 0; i < 3; i++)
        {
            printf("%c = ", 'a' + i);
            int j;
            scanf("%d", &j);
            printf((e <= j && j <= f) ? "true\n" : "false\n");
        }
    return 0;
}

