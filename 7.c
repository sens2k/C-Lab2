#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 7
*/

int main(int argc, char* argv[])
{
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	if ((A % 2 == 0) || (B % 2 == 0) || (C % 2 == 0)) printf("\npresent");
}

