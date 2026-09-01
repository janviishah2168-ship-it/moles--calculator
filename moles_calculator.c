#include <stdio.h>

int main() {
    int M, G;
    float Moles;

    printf("Please enter the molar mass of your reagent - it should be a whole number: ");
    scanf("%d", &M);

    printf("Please enter the given mass of your reagent - it should be a whole number: ");
    scanf("%d", &G);

    Moles = (float)G / M;

    printf("The moles of your reagent is: %f", Moles);

    return 0;
}
