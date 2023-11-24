#include <stdio.h>
int	num_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2)
		return (1);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
			{
				return (0);
			}	
			i++;
		}
	}
	return (1);
}
int main()
{	
	int terimCount;
	printf("Lütfen kaç asal sayı yazdırmak istediğinizi girin :");
	scanf("%d",&terimCount);
	int sayilar[terimCount];
	int begin = 2;
	int i = 0;
	int j = 0;
	int result ;
	while (i < terimCount)
	{
		result = num_is_prime(begin);
		if(result == 1)
		{
			sayilar[i] = begin;
			i++;
		}
		begin++;
	}
	printf("ilk %d asal sayı :", terimCount);
	while (j < terimCount)
	{
		printf("%d, ",sayilar[j]);
		j++;
	}
	printf("\n");

}
