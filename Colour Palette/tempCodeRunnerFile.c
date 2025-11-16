#include<stdio.h>
int main(){
    char input,size,manual,time;
    printf("The type of coffee is white or black coffee ?");
    scanf("%c", &input);
    printf("the size of coffee is double ?");
    scanf("%d" , &size);
    printf("Coffee is manual");
    scanf("%d", &manual);

    
    switch(input){
        case 'w':
        printf("You choose white coffee");
         time = blackCoffeeCalc(size);
        printf("Total time: %d", time);
        break;

         case 'W':
        printf("\tYou ordered White Coffee.\n\n");
        time = whiteCoffeeCalc(size);
        printf("Total time: %d", time);
        break;
    }
}