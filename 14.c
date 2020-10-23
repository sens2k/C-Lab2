#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 14
*/

int main(int argc, char* argv[])
{
    int c, m;
    double p;
    printf("code = ");
    scanf("%d", &c);
    printf("mins = ");
    scanf("%d", &m);
    switch (c) 
    {
        case 432: p = 9.2; break;
        case 95: p = 4.1; break;
        case 861: p = 2.05; break;
        case 844: p = 2.5; break;
        default: return -1;
    }
    printf("min = %lf rub\n%lf rub", p, m * p);
    return 0;
}