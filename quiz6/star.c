#include <stdio.h>
int main() {
    int i, j;
    int starCount = 9;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= starCount; j++) {
            printf("*");
        }
	starCount -= 2;
        printf("\n");
    }

    for (i = 1; i <= 4; i++) {
	for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
