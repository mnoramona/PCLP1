#include <stdio.h>


// Scrieţi un program care să determine cadranul în care se află un punct dat prin coordonatele sale reale. Se va afişa un număr între 1 şi 4 sau mesajul punct pe axe.


int main()
{
	int X,Y;
	scanf("%d %d" , &X, &Y);
	if(X==0 || Y==0)
	{
		printf("punct de axe\n");
	}
	else if(X > 0 && Y > 0)
	{
		printf("1\n");
	}
	else if(X < 0 && Y > 0)
	{
		printf("2\n");
	}
	else if(X < 0 && Y < 0)
	{
		printf("3\n");
	}
	else if(X > 0 && Y < 0)
	{
		printf("4\n");
	}
return 0;
}
