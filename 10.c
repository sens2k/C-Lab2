#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 10
*/

int main(int argc, char* argv[])
{
    double a, b, c;
    printf("a, b, c = ");
    scanf("%lf%lf%lf", &a, &b, &c);
    a = a > b ? a : b;
    a = a > c ? a : c;
    printf("%lf", a);
    return 0;

}