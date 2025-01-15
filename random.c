#include <stdlib.h>
#include <time.h>

char randchar() {
    srand(time(NULL)); // Seed the random number generator
    return 'A' + (rand() % 26); // Generate a random character between 'A' and 'Z'
}