#include <stdio.h>

int main() {

    //registering the variables
    char citycode1[50]; 
    char state1[50];
    char name1[50];
    double population1;
    float area1;
    double PIB1;
    int tourist_attractions1;

    char citycode2[50];
    char name2[50];
    char state2[50];
    double population2;
    float area2;
    double PIB2;
    int tourist_attractions2;

    printf("What's the City's name of the first card?");
    scanf("%s", &name1);
    printf("And the state?");
    scanf("%s", &state1);
    printf("What's the City's name of the second card?");
    scanf("%s", &name2);
    printf("And the state of the second card?");
    scanf("%s", &state2);

    //menu
    int option;
    printf("Pick one to compare between the two cards:");
    printf("1 - Population.\n 2 - Area.\n 3 - PIB.\n 4 - Quantity of tourist attractions.\n 5 - Demographic density.");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("What's the population of the first card?");
        scanf("%d", &population1);
        printf("And the population of the second card?");
        scanf("%d", &population2);

        if (population1 > population2)
        {
            printf("%s - %s Venceu!\n", name1, state1);
        } else if (population2 > population1) {
            printf("%s - %s Venceu!\n", name2, state2);
        } else {
            printf("Empate");
        }
        break;

    case 2:
        printf("What's the area of the first card?");
        scanf("%d", &area1);
        printf("And the area of the second card?");
        scanf("%d", &area2);

        if (area1 > area2)
        {
            printf("%s - %s Venceu!\n  ", name1, state1);
        } else if (area2 > area1) {
            printf("%s - %s Venceu!\n  ", name2, state2);
        } else {
            printf("Empate!");
        }
        break;
    
    default:
        printf("Opção inválida.");
        break;
    }


    //printing and getting the inputs with printf and scanf
    printf("Let's register the first card!\n");
    printf("City's state: ");
    scanf(" %s", &state1);

    printf("City's code: ");
    scanf("%s", &citycode1);

    printf("Name of the city: ");
    scanf("%s", &name1);

    printf("City's population: ");
    scanf("%d", &population1);

    printf("City's area: ");
    scanf("%f", &area1);

    printf("City's PIB: ");
    scanf("%d", &PIB1);

    printf("Quantity of turistic points: ");
    scanf("%i", &tourist_attractions1);

    float pop_density1 = population1 / area1;
    float pibpercapita1 = PIB1 / population1;

    printf("Population Density: %f\n", pop_density1);
    printf("PIB per capita: %f\n", pibpercapita1);

    //now let's register the second card

    printf("Let's register the second card!\n");
    printf("City's state: ");
    scanf("%s", &state2);

    printf("City's code: ");
    scanf("%s", &citycode2);

    printf("Name of the city: ");
    scanf("%s", &name2);

    printf("City's population: ");
    scanf("%d", &population2);

    printf("City's area: ");
    scanf("%f", &area2);

    printf("City's PIB: ");
    scanf("%d", &PIB2);

    printf("Quantity of turistic points: ");
    scanf("%i", &tourist_attractions2);

    float pop_density2 = population2 / area2;
    float pibpercapita2 = PIB2 / population2;

    printf("Population Density: %f\n", pop_density2);
    printf("PIB per Capita: %f\n", pibpercapita2);

    // now let's compare the cards

    printf("");
    printf("CARD 1 - %s: %f\n", state1, area1);
    printf("CARD 2 - %s: %f\n", state2, area2);

    // if statement to find the card with the larger area
    if (area1 > area2) {
        printf("RESULT: CARD 1 (%S) WON!", state1);
    } else {
        printf("RESULT: CARD 2 (%s) WON!", state2);
    };

    //ending the program, returning it to 0
    return 0;

}
