#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 9
*/

int main(int argc, char* argv[])
{
    int number, x, y, z;
    printf("number = ");
    scanf("%d", &number);
    if (number < 1000 && number > 99)
    {
        x = number % 10; number / 10;
        y = number % 10; number / 10;
        z = number % 10;
    }
    printf((x == y || y == z || x == z) ? "true\n" : "false\n");
    return 0;
}

