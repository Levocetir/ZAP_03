#include <stdio.h>;
#include <ctype.h>
//#include "druhy.h";

#define EOLN		'.'

#define na_treti(x)		((x)*(x)*(x))
#define je_velke(c)		((c) >= 'A') && ((c) <= 'Z') ? 1 : 0

int main() {

	////pø 1
	//int i = 5;
	//double d;

	////explicitní pøevod
	//d = (double)i;
	
	////pø 2
	//int i;
	//double d;
	//char c;

	//scanf("%d", &i);

	//d = (double)i;
	//c = (char)i;

	//printf("Double: %lf \n", d);
	//printf("Char: %c", c);

	//pø 3
	//char c;
	//c = getchar();

	//if (c == 'd')
	//{
	//	int i;
	//	scanf("%d", &i);
	//	printf("Int: %d", i);
	//}
	//else if (c == 'f')
	//{
	//	float f;
	//	scanf("%f", &f);
	//	printf("Float: %f", f);

	//}

	//pø 4
	
	/*printf("%d", iii);*/

	/*extern int AAA;
	printf("%d", AAA);*/
	
	//pø 6
	//int MAX = 1000000;
	//for (int i = 0; i < MAX; i++) {
	//	for (int j = 0; j < MAX; j++) {
	//		i = i;
	//		j = j;
	//	}
	//}

	//pø 7
	//int i =4;
	//int a =0;
	//scanf("%d", &i);

	//while (i != 0)
	//{
	//	a += i--;
	//	
	//}
	//printf("suma je: N %d\n", a);

	//pø 8
	//char c;
	//int cislice =0;
	//while ((c = getchar()) != EOLN)
	//{
	//	if (isdigit(c))
	//	{
	//		cislice++;
	//	}
	//	if (isalpha(c))
	//	{
	//		putchar(toupper(c));
	//	}
	//}
	//printf("Zdano: %d", cislice);

	//pø 9
	//printf("%d\n", na_treti(3));
	//printf("%d\n", na_treti(1));
	//printf("%d\n", na_treti(5));
	//int i = 2;
	//int j = 3;
	//printf("%d\n", na_treti(i * j + 1));

	//pø 10
	
	//printf("Velke: %d\n", je_velke('c'));
	//printf("Velke: %d\n", je_velke('A'));
	//printf("Velke: %d\n", je_velke('.'));
	//printf("Velke: %d\n", je_velke('c'));




}