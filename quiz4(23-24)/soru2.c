#include <stdio.h>

int isPalindrome(int number) {
    int alinanSayi = number;
    int terstenSayi = 0;

    while (number > 0) {
        int mod = number % 10;
        terstenSayi = terstenSayi * 10 + mod;
        number /= 10;
    }
    if(alinanSayi == terstenSayi)
    {
	    return(1);
    }
    else
    {
	    return(0);
    }
}

int main() {
    int num;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d bir palindrom sayidir.\n", num);
    } else {
        printf("%d bir palindrom sayi degildir.\n", num);
    }

    return 0;
}








