//
// Created by Axuxor on 18.09.2025.
//
// Getraenke Automat Version 0.2
#include <stdio.h>

int main() {
    int auswahl = 0;
    float preis = 0.0;
    float einwurf = 0.0;

    printf("Getraenke Automat | Bitte werfen sie 1 Euro ein: \n");
    printf("Waehlen sie ihr Getraenk aus:\n");
    printf("1) Wasser (0,50 Euro)\n");
    printf("2) Limonade (1,00 Euro)\n");
    printf("3) Bier (2,00 Euro)\n\n");
    printf("Geben sie 1, 2 oder 3 ein: ");
    scanf("%d", &auswahl);

    switch(auswahl) {
        case 1:
            preis = 0.5;
            printf("\nBitte werfen sie %.2f Euro ein: ", preis);
            scanf("%f", &einwurf);
            if(einwurf == preis) {
                printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
            } else {
                printf("\nFalscher Betrag eingeworfen.\n");
            }
            break;
        case 2:
            preis = 1.0;
            printf("\nBitte werfen sie %.2f Euro ein: ", preis);
            scanf("%f", &einwurf);
            if(einwurf == preis) {
                printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
            } else {
                printf("\nFalscher Betrag eingeworfen.\n");
            }
            break;
        case 3:
            preis = 2.0;
            printf("\nBitte werfen sie %.2f Euro ein: ", preis);
            scanf("%f", &einwurf);
            if(einwurf == preis) {
                printf("\nVielen Dank, bitte entnehmen sie ihr Getraenk.\n");
            } else {
                printf("\nFalscher Betrag eingeworfen.\n");
            }
            break;
        default:
            printf("\nUngueltige Auswahl.\n");
    }

    return 0;
}
