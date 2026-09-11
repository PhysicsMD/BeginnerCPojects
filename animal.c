#include <stdio.h>

void main() {
    char animal[16] = "";
   
    printf("what is the best animal?");
    fgets(animal, sizeof(animal), stdin);

    if (animal == "fish") {
        printf("Heck yeah");
    } else {
        printf("Wrong, it's F I S H!");
    }    

    return;
}