#include <stdio.h>
#include <string.h>

void arananKelimeninIndeksleri(char *kelime, char *aranan) {
    char *ilkHarfPtr = strchr(kelime, aranan[0]);
    if (ilkHarfPtr == NULL) {
        printf("Aranan harf bulunamadi.\n");
        return;
    }

    char *sonHarfPtr = strrchr(kelime, aranan[strlen(aranan) - 1]);
    if (sonHarfPtr == NULL) {
        printf("Aranan harf bulunamadi.\n");
        return;
    }
    
    
    int i = 0;
    while (kelime[i] != '\0')
    {
        if (i == (ilkHarfPtr - kelime))
        {
            while (kelime[i] != ' ')
            {
                printf("%c",kelime[i]);
                i++;
            }
            i--;
        }
        else
        {
            if (kelime[i] == ' ')
            {
                printf("%c",' ');
            }
            else
            {
                printf("%s","-");
            }
            
        }
        i++;
    }
}

int main() {
    char kelime[] = "the falls of rauros";
    char filtre[] = "of";

    arananKelimeninIndeksleri(kelime, filtre);

    return 0;
}
