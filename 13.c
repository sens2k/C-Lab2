#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 13
*/

int main(int argc, char* argv[])
{
    int money;
    printf("money = ");
    scanf("%d", &money);
    if (money >= 1 && money <= 999) 
    {
        if(money % 10 == 1 || 2 || 3 || 4) printf("%d rublya\n", money);
        else printf("%d rubley\n", money);
    }
    return 0;
}