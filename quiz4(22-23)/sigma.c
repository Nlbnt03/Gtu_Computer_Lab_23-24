#include <stdio.h>
int     iterative_pow (int x,int n)
{
        int     powResult = 1;
        while(n)
        {
                powResult *= x;
                n --;
        }
        return (powResult);
}
int main ()
{
	int	x;
	int	n;
	int	result = 0;

	printf("Lütfen x değerini girin :");
	scanf("%d",&x);
	printf("Lütfen n değerini giriniz :");
	scanf("%d",&n);
	
	while(1 <= n)
	{
		result += (n * ( iterative_pow(x,n) ));
		n --;
	}
	result += 5;
	printf("f(%d) = %d \n", x, result);
	
}
