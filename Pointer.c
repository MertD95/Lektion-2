#include <stdio.h>

int main()
{
    int n = 10; // Deklarerar en heltalsvariabel n och initierar den till 10

    // Deklarerar en pekarvariabel pointer_to_n och initierar den med adressen till n
    int *pointer_to_n = &n; // Pekaren lagras på en minnesplats som innehåller adressen till en annan minnesplats

    printf("%x\n", pointer_to_n);  // Skriver ut adressen som pekaren lagrar, i hexadecimal form
    printf("%d\n", *pointer_to_n); // Skriver ut värdet på den adress pekaren pekar på, vilket är värdet av n
    printf("%x\n", &n);            // Skriver ut den nuvarande minnesadressen för n, i hexadecimal form
    printf("%d\n", n);             // Skriver ut värdet av n
    printf("Done!\n");             // Indikerar att programmet är klart
    return 0;                      // Avslutar programmet
}