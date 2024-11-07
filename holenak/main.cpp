#include <stdio.h>
#include <math.h>

int main() {
    double first, second;
    int choice;

    printf("Vitejte v kalkulacce!\n");
    printf("Zadejte prvni cislo: ");
    scanf("%lf", &first);
    printf("Zadejte druhe cislo: ");
    scanf("%lf", &second);

    printf("\nJakou operaci chcete provest?\n");
    printf("1. Soucet\n");
    printf("2. Rozdil\n");
    printf("3. Soucin\n");
    printf("4. Podil\n");
    printf("5. Umocneni prvniho cisla druhym\n");
    printf("6. Zbytek pri deleni (modulo)\n");
    printf("Zadejte cislo odpovidajici operaci (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nVysledek: %.2lf + %.2lf = %.2lf\n", first, second, first + second);
        break;
        case 2:
            printf("\nVysledek: %.2lf - %.2lf = %.2lf\n", first, second, first - second);
        break;
        case 3:
            printf("\nVysledek: %.2lf * %.2lf = %.2lf\n", first, second, first * second);
        break;
        case 4:
            if (second != 0) {
                printf("\nVysledek: %.2lf / %.2lf = %.2lf\n", first, second, first / second);
            } else {
                printf("\nChyba: Deleni nulou neni povoleno.\n");
            }
        break;
        case 5:
            printf("\nVysledek: %.2lf ^ %.2lf = %.2lf\n", first, second, pow(first, second));
        break;
        case 6:
            if ((int)second != 0) {
                printf("\nVysledek: %.0lf %% %.0lf = %.0lf\n", first, second, fmod(first, second));
            } else {
                printf("\nChyba: Modulo nulou neni povoleno.\n");
            }
        break;
        default:
            printf("\nNeplatna volba. Zkuste to znovu.\n");
    }

    return 0;
}