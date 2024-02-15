/**
 * C-program för att få minnesadresser med adressoperatorn
 */

#include <stdio.h>

int main()
{
    /* Enkla deklarationer */
    char character = 'C';               // Deklarerar en char-variabel och initierar den till 'C'
    int integer = 1;                    // Deklarerar en int-variabel och initierar den till 1
    float real = 10.4f;                 // Deklarerar en float-variabel och initierar den till 10.4
    long long biginteger = 989898989ll; // Deklarerar en long long-variabel och initierar den till 989898989

    /* Skriver ut variablernas värden och deras minnesadresser */
    printf("Value of character = %c, Address of character = %p\n", character, (void *)&character);
    printf("Value of integer = %d, Address of integer = %p\n", integer, (void *)&integer);
    printf("Value of real = %f, Address of real = %p\n", real, (void *)&real);
    printf("Value of biginteger = %lld, Address of biginteger = %p", biginteger, (void *)&biginteger);

    return 0; // Avslutar programmet
}