#include <stdio.h>

// Funktionen 'runner' för att öka och returnera antalet gånger den har körts
int runner()
{
    static int count = 0; // Deklarerar en statisk variabel 'count' och initierar den till 0
    count++;              // Ökar 'count' med 1 varje gång funktionen anropas
    return count;         // Returnerar det nuvarande värdet av 'count'
}

int main()
{
    printf("%d ", runner()); // Anropar 'runner' för första gången, förväntat utskrift: 1
    printf("%d ", runner()); // Anropar 'runner' för andra gången, förväntat utskrift: 2
    return 0;                // Avslutar programmet
}