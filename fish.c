#include <stdio.h>
#include "fish.h"

void catalog(struct fish f){
    printf("%s - это %s с %i зубами. Ему %i года.\n", f.name, f.species, f.teeth, f.age);
}

void label (fish a){
    printf("Кличка: %s\nРазновидность: %s\n%d года, %d зубов\n", 
        a.name, a.species, a.age, a.teeth);
    printf("Давать %2.2f кг %s и разрешать %s на протяжении %2.2f часов\n",
        a.care.food.weight, a.care.food.ingridients, a.care.exercise.description, a.care.exercise.duration);
}