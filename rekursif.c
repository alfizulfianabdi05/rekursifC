#include <stdio.h>
#include <conio.h>

int hasil(int a, int b); 
main()
{

	int x,y;
	printf("Bilangan pertama: ");
	scanf("%d", &x);
	printf("Bilangan kedua: ");
	scanf("%d", &y);
	printf("Hasil perkaliannya adalah %d", hasil(x,y));

	getch();
	}

	int hasil(int a, int b)
	{
		int i, kali=0;
		for(i=1; i<=a; i++)
			kali+=a;
		return kali;
		}

