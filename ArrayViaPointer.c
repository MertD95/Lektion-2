#include <stdio.h>

int main()
{
    // Deklarerar en array med heltal från 1 till 9
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Beräknar storleken på arrayen genom att dela totala storleken med storleken av en element
    // Notera att sizeof returnerar storleken i bytes
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", N); // Skriver ut storleken på arrayen

    int i;          // Loopvariabel
    int *ptr = arr; // Pointer till det första elementet i arrayen

    printf("Array elements: ");
    for (i = 0; i < N; i++) // Loopar igenom varje element i arrayen
    {
        // Skriver ut värdet som pekaren just nu pekar på
        printf("%d, ", *ptr);

        // Flyttar pekaren till nästa element i arrayen
        ptr++;
    }

    return 0; // Avslutar programmet
}