#include <stdio.h>
int main ()
{	
	int	a;
	int	b;
	int	result;
	
	printf("Lütfen modu alınacak sayıyı girin :");
	scanf("%d",&a);
	printf("Lütfen mod sayısını girin :");
	scanf("%d",&b);

	result = a - ((a / b) * b);
	printf("%d mod %d = %d", a, b, result);
	return 0;

}
