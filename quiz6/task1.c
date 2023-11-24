#include <stdio.h>
int digitSum(int n) {
    if (n < 10) 
    {
        return n;
    } 
    else 
    {
        return n % 10 + digitSum(n / 10);
    }
}

int main() {
    
	int sayi;
   	printf("Enter a positive integer: ");
    	scanf("%d", &sayi);
    	printf("sum of digits of %d = %d\n", sayi, digitSum(sayi));
}

