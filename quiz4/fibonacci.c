#include <stdio.h>
int main()
{	
	int	n;
	printf("Lütfen kaç terim yazdırmak istediğinizi girin :");
	scanf("%d",&n);
	
	int	i = 0;
	int	result = 0;
	int 	dizi[n];	
	
	while (i != n)
	{
		if (i == 0)
		{
			dizi[i] = 0;
			i++;
		}
		else if (i == 1)
		{
			dizi[i] = 1;
			i++;
		}
		else
		{
			dizi[i] = dizi[i - 1] + dizi[i - 2];
			i++;
		}	
	}

	i =0;
	printf("İlk %d terim :",n);
	while (i < n)
	{
		printf("%d, ", dizi[i]);
		i++;
	}
	
}
