#include <stdio.h>

void apple_set(int value);
int apple_get();

int main(){

    apple_set(5);

    printf("apples=%d\n",apple_get());
    return 0;
}