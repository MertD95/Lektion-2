#include <stdio.h>

// VARNING! Denna uppgift/Exempel kan klassas som overkill för just nu, men den kanske ger en bra inblick på pointers användning.
// Funktion för att skriva ut en arrays element
void printArray(const int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Skriver ut varje element följt av ett mellanslag
    }
    printf("\n"); // Avslutar med en ny rad
}

// Gemensam funktion för att sortera en array i både stigande och fallande ordning
void bubbleSort(int *arr, int size, int ascending)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            // Jämför element baserat på önskad sortering
            int shouldSwap = ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);
            if (shouldSwap)
            {
                // Byter plats på elementen om de inte är i rätt ordning
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2};             // Initialiserar array
    int size = sizeof(arr) / sizeof(arr[0]); // Beräknar storleken på arrayen

    printf("Original array: ");
    printArray(arr, size); // Skriver ut den ursprungliga arrayen

    bubbleSort(arr, size, 1); // Sorterar arrayen i stigande ordning
    printf("Sorted array in ascending order: ");
    printArray(arr, size); // Skriver ut arrayen sorterad i stigande ordning

    bubbleSort(arr, size, 0); // Sorterar arrayen i fallande ordning
    printf("Sorted array in descending order: ");
    printArray(arr, size); // Skriver ut arrayen sorterad i fallande ordning

    return 0; // Avslutar programmet
}