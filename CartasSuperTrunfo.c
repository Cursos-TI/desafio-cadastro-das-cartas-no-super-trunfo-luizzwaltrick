#include <stdio.h>

int main() {

    //registering the variables
    char state1[50];
    char name1[50];
    float population1;
    float area1;
    float PIB1;
    int tourist_attractions1;

    char name2[50];
    char state2[50];
    float population2;
    float area2;
    float PIB2;
    int tourist_attractions2;

    printf("What's the City's name of the first card?\n");
    scanf("%s", &name1);
    printf("And the state?\n");
    scanf("%s", &state1);
    printf("What's the City's name of the second card?\n");
    scanf("%s", &name2);
    printf("And the state of the second card?\n");
    scanf("%s", &state2);

    //menu
    int option;
    printf("Pick one to compare between the two cards:\n");
    printf("1 - Population.\n2 - Area.\n3 - PIB.\n4 - Quantity of tourist attractions.\n5 - Demographic density.\n");
    scanf("%i", &option);

    //creating the switch and using the logic
    switch (option)
    {
    case 1:
        printf("What's the population of the first card?\n");
        scanf("%f", &population1);
        printf("And the population of the second card?\n");
        scanf("%f", &population2);

        printf("------------------------\n");
        printf("First card:%s - Second card:%s\n", name1, name2);
        printf("Comparing: Population\n");
        printf("First card population: %f - Second card population: %f\n", population1, population2);

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
        printf("What's the area of the first card?\n");
        scanf("%f", &area1);
        printf("And the area of the second card?\n");
        scanf("%f", &area2);

        printf("------------------------\n");
        printf("First card:%s - Second card:%s\n", name1, name2);
        printf("Comparing: Area\n");
        printf("First card area: %f - Second card area: %f\n", area1, area2);

        if (area1 > area2)
        {
            printf("%s - %s Venceu!\n  ", name1, state1);
        } else if (area2 > area1) {
            printf("%s - %s Venceu!\n  ", name2, state2);
        } else {
            printf("Empate!");
        }
        break;

    case 3:
        printf("What's the PIB of the first card?\n");
        scanf("%f", &PIB1);
        printf("And what's the PIB of the second card?\n");
        scanf("%f", &PIB2);

        printf("------------------------\n");
        printf("First card:%s - Second card:%s\n", name1, name2);
        printf("Comparing: PIB\n");
        printf("First card PIB: %f - Second card PIB: %f\n", PIB1, PIB2);

        if (PIB1 > PIB2)
        {
            printf("%s - %s Venceu!\n  ", name1, state1);
        } else if (PIB2 > PIB1){
            printf("%s - %s Venceu!\n  ", name2, state2);
        } else {
            printf("Empate!");
        }
        break;
    
    case 4:
        printf("How many tourist attractions the first city has?\n");
        scanf("%i", &tourist_attractions1);
        printf("How many tourist attractions the second city has?\n");
        scanf("%i", &tourist_attractions2);

        printf("------------------------\n");
        printf("First card:%s - Second card:%s\n", name1, name2);
        printf("Comparing: Quantity of tourist attractions\n");
        printf("First card quantity of tourist attractions: %i - Second card quantity of tourist attractions: %i\n", tourist_attractions1, tourist_attractions2);

        if (tourist_attractions1 > tourist_attractions2) 
        {
            printf("%s - %s Venceu!\n  ", name1, state1);
        } else if (tourist_attractions2 > tourist_attractions1) {
            printf("%s - %s Venceu!\n  ", name2, state2);
        } else {
            printf("Empate!");
        }
        break;
    
    case 5:
        printf("What's the area of the first city?\n");
        scanf("%f", &area1);
        printf("And the population of the first city?\n");
        scanf("%f", &population1);

        float pop_density1 = population1 / area1;

        printf("What's the area of the second city?\n");
        scanf("%f", &area2);
        printf("And what's the population of the second city?\n");
        scanf("%f", &population2);

        float pop_density2 = population2 / area2;

        printf("------------------------\n");
        printf("First card:%s - Second card:%s\n", name1, name2);
        printf("Comparing: Demographic Density\n");
        printf("First card Demographic Density: %f - Second card Demographic Density: %f\n", pop_density1, pop_density2);

        if (pop_density1 < pop_density2) {
            printf("%s - %s Venceu!\n  ", name1, state1);
        } else if (pop_density2 < pop_density1) {
            printf("%s - %s Venceu!\n  ", name2, state2);
        } else {
            printf("Empate!");
        }
        break;
    
    default:
        printf("Opção inválida.");
        break;
    }

    //ending the program, returning it to 0
    return 0;

}
