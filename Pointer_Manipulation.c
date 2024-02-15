/**
 * C-program för att utföra alla aritmetiska operationer med hjälp av pekare
 */

#include <stdio.h>

int main()
{
    float num1, num2;   // Deklarerar två flyttalsvariabler för att lagra användarens indata
    float *ptr1, *ptr2; // Deklarerar två pekarvariabler för att lagra adresserna till num1 och num2

    float sum, diff, mult, div; // Deklarerar variabler för att lagra resultaten av aritmetiska operationer

    ptr1 = &num1; // Sätter ptr1 att peka på num1's adress
    ptr2 = &num2; // Sätter ptr2 att peka på num2's adress

    // Ber användaren mata in två reella tal
    printf("Enter any two real numbers: ");
    scanf("%f%f", ptr1, ptr2); // Läser in talen direkt till adresserna som pekarna ptr1 och ptr2 pekar på

    // Utför aritmetiska operationer med hjälp av värdena pekarna pekar på
    sum = *ptr1 + *ptr2;  // Adderar värdena pekarna pekar på
    diff = *ptr1 - *ptr2; // Subtraherar värdena pekarna pekar på
    mult = *ptr1 * *ptr2; // Multiplicerar värdena pekarna pekar på
    div = *ptr1 / *ptr2;  // Dividerar värdena pekarna pekar på

    // Skriver ut resultaten av de aritmetiska operationerna
    printf("Sum = %.2f\n", sum);         // Visar summan med två decimaler
    printf("Difference = %.2f\n", diff); // Visar skillnaden med två decimaler
    printf("Product = %.2f\n", mult);    // Visar produkten med två decimaler
    printf("Quotient = %.2f\n", div);    // Visar kvoten med två decimaler

    return 0; // Avslutar programmet
}