#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 11
*/

int main(int argc, char* argv[])
{
    double x, y;
    int k;
    printf("x, y = ");
    scanf("%lf%lf", &x, &y);
    if (x >= 0)
    {
        if (y >= 0) k = 1;
        else k = 4;
    }
    else if (y >= 0) k = 2;
    else k = 3;
    printf("k = %d\n", k);
}