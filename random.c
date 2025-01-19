#include <stdlib.h>
#include <time.h>

char randchar() {
    srand(time(NULL)); // Seed the random number generator
    return 'A' + (rand() % 26); // Generate a random character between 'A' and 'Z'
}

int main() {
    char randomChar = randchar();
    printf("Random Character: %c\n", randomChar);
    return 0;
}
