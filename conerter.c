#include <stdio.h>

// Fonction pour convertir de Fahrenheit à Celsius
float fahrenheitVersCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Fonction pour convertir de Celsius à Fahrenheit
float celsiusVersFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    int choix;
    float temperature;

    // Titre du programme
    printf("=== Convertisseur de Température ===\n");

    // Menu pour l'utilisateur
    printf("Choisissez l'option de conversion :\n");
    printf("1. Fahrenheit vers Celsius\n");
    printf("2. Celsius vers Fahrenheit\n");
    printf("0. Quitter le programme\n");
    printf("Entrez le numéro de l'option : ");
    scanf("%d", &choix);

    // Demander à l'utilisateur d'entrer la température
    printf("Entrez la température : ");
    scanf("%f", &temperature);

    // Effectuer la conversion en fonction de l'option choisie
    switch (choix) {
        case 1:
            printf("%.2f Fahrenheit équivaut à %.2f Celsius.\n", temperature, fahrenheitVersCelsius(temperature));
            break;
        case 2:
            printf("%.2f Celsius équivaut à %.2f Fahrenheit.\n", temperature, celsiusVersFahrenheit(temperature));
            break;
        case 0:
            printf("Programme terminé.\n");
            break;
        default:
            printf("Option invalide.\n");
            break;
    }

    return 0;
}

