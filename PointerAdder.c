#include <stdio.h>

void adder(int *x, int *y, int *z); // Deklarerar funktionen adder innan den används

int foo(int a); // Deklarerar funktionen foo innan den används

int main(void)
{
    const int a = 25;               // Deklarerar en konstant variabel 'a' och initierar den till 25
    int result = foo(a);            // Anropar funktionen foo med 'a' som argument och lagrar resultatet i 'result'
    printf("Result: %d\n", result); // Skriver ut resultatet av foo-funktionen
    return 0;                       // Returnerar 0 för att indikera att programmet avslutats framgångsrikt
}

void adder(int *x, int *y, int *z)
{
    *z = *x + *y; // Adderar värdena som 'x' och 'y' pekar på och lagrar resultatet på adressen 'z' pekar på
}

int foo(int a)
{
    int k = 10;        // Deklarerar en variabel 'k' och initierar den till 10
    int z;             // Deklarerar en variabel 'z' för att lagra resultatet av additionen
    adder(&k, &a, &z); // Anropar funktionen adder med adresserna till 'k', 'a' och 'z'
    return z;          // Returnerar resultatet av additionen som beräknats i adder-funktionen
}