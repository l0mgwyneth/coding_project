#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 10 + 1;
    printf("Your random number is: %d\n", num);
    return 0;
}
