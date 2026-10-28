
#include <stdio.h>

int main() {
    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You can vote.\n");
        printf("You can drive.\n");
    } else {
        printf("Not an adult.\n");
    }

    return 0;
}
