#include <stdio.h>

void apple_set(int value);
int apple_get();

static int data;

void orange_set(int value){
    data=value;
}

int orange_get(){
    return data;
}


int main(){

    apple_set(5);
    orange_set(20);

    printf("apples=%d\n oranges=%d\n",apple_get(),orange_get());
    return 0;
}