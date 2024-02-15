#include <stdio.h>

// Prototyp för funktionen fact som tar ett heltal som argument och returnerar dess fakultet
int fact(int num); // Rekursivt exempel

int main()
{
    int num, factorial;

    printf("Enter any number: "); // Ber användaren mata in ett tal
    scanf("%d", &num); // Läser in talet från användaren och lagrar det i variabeln num

    if (num < 0) // Kontrollerar om det inskrivna talet är negativt
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else // Om talet inte är negativt
    {
        factorial = fact(num); // Anropar funktionen fact för att beräkna fakultet av num
        printf("Factorial of %d is %d\n", num, factorial); // Skriver ut resultatet
    }

    return 0; // Avslutar programmet
}

// Funktionen fact beräknar rekursivt fakultet av ett givet heltal
int fact(int num)
{
    if (num == 0) // Basfall: om num är 0 är fakulteten 1
        return 1;
    else // Rekursivt anrop: multiplicerar num med fakulteten av num-1
        return num * fact(num - 1); // Återkallar funktionen med num - 1 tills basfallet nås
}