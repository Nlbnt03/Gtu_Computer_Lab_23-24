#include <stdio.h>
int ebob(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    } 
    else 
    {
        return ebob(b, a % b);
    }
}

int main() 
{
    int sayi1, sayi2;

    printf("Enter two positive integers (separated by space) : ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("GCD of %d and %d: %d\n", sayi1, sayi2, ebob(sayi1, sayi2));
}

