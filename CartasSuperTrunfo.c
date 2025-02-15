#include <stdio.h>

int main() {

   //starting introducing the game
   printf("Hello there! Let's play a game called 'Top Trumps'!\n");

   //registering the variables
   char citycode[50];
   char name[50];
   double population;
   double PIB;
   int tourist_attractions;

   //printing and getting the inputs with printf and scanf
   printf("First of all, let's register your card:\n");
   printf("What's your city code?\n");
   printf("City code:");
   scanf("%s", &citycode);

   printf("What's the name of your city?\n");
   printf("Name of the city:");
   scanf("%s", &name);

   printf("What's the current city population?\n");
   printf("City population:");
   scanf("%d", &population);

   printf("What's the current PIB of the city?\n");
   printf("City's PIB:");
   scanf("%d", &PIB);

   printf("How many turistic points this city has?\n");
   printf("Quantity of turistic points:");
   scanf("%i", &tourist_attractions);

   //now let's print the statistics that we got with the user's responses, whos we got stored at our variables using scanf
   printf("So the statistics of the cards are:\n");
   printf("----------------------------------\n");

   //printing the results
   printf("City code:%s\n", citycode);
   printf("Name:%s\n", name);
   printf("Population:%d\n", population);
   printf("PIB:%d\n", PIB);
   printf("Tourist attractions:%i\n", tourist_attractions);

   //ending the program, returning it to 0
   return 0;

}
