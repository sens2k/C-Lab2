#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 12
*/

int main(int argc, char* argv[])
{
    int day;
    printf("day = ");
    scanf("%d", &day);
    day &= 7;
    switch (day)
    {
        case 6:
            printf("Subb\n");
            break;
        case 0:
            printf("Voskr\n");
            break;
        default:
            printf("Work\n");
            break;
    }
    return 0;
}