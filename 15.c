#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 15
*/

int main(int argc, char* argv[])
{
    int m, n, s;
    printf("min, sec = ");
    scanf("%d%d", &m, &n);
    s = (m * 60 + n) * 16;
    printf((6 * 1024 >= s) ? "true" : "false");
    return 0;
}