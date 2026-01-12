#include <stdio.h>
#include <string.h>

struct Person { char name[32]; int age; };

int main(void) {

    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;
    printf("Name: %s \nAge: %d\n", person1.name, person1.age);

    return 0;
}