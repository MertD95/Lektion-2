#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 5; // Fördefinierad storlek på arrayen
    int *arr;     // Pointer till int, kommer användas för att peka på den dynamiskt allokerade arrayen

    // Dynamiskt allokerar minne för arrayen med storlek "size"
    arr = (int *)malloc(size * sizeof(int)); // Använder sizeof(int) istället för 4 för bättre portabilitet

    // Initierar elementen i den dynamiskt allokerade arrayen
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1; // Initierar med fördefinierade värden, dvs. 1 till 5
    }

    // Skriver ut elementen i arrayen
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Skriver ut varje element följt av ett mellanslag
    }
    printf("\n"); // Ny rad efter att alla element skrivits ut

    // Frigör det dynamiskt allokerade minnet för att undvika minnesläckor
    free(arr);

    return 0; // Avslutar programmet
}