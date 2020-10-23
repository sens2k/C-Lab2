#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
/*Свечин Валентин
  ВПИ22
  Лаба - 2, задание - 6
*/

int main(int argc, char* argv[])
{

}
//Первая задача
void First()
{
	int x;
	x = 12;
	switch (x % 5)
	{
		case 2: x = 0; break;
		case 3: x *= -1; break;
	}
	printf("%d", x);
}
//Вторая задача
void Second()
{
	int x, y;
	x = 12;
	y = 0;
	switch (x)
	{
		case 5: y = x*x; break;
		case 7: y = x%2; break;
		default: y += 1;
	}
}
//Невозможно решить через switch
void Third()
{

}
