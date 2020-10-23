#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 16
*/

int main(int argc, char* argv[])
{
    int f, l;

    printf("fish, l = ");
    scanf("%d%d", &f, &l);
    if (f * 3 <= l)
        printf("true");
    else printf("false\n");
    printf("%d", f - l / 3);
    return 0;
}