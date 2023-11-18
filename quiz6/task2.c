#include <stdio.h>
int main()
{
	int a;
	int b;
	int result;
	int i = 0;

	printf("Enter a number : \n");
	scanf("%d", &a);
	b = a;

	while(a % 7 != 0)
	{
		a++;
		i++;
	}

	printf("You need to add %d by %d divide it by 7 !\n",b,i);
}
