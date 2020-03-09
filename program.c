#include <stdio.h>

int data;

void apple_set(int value){
    data=value;
}

int apple_get(){
    return data;
}

int main(){

    printf("apples=%d\n",apple_get());
    return 0;
}