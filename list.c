#include <stdio.h>

#ifndef _cplusplus
typedef char bool;
#define true 1
#define false 0
#endif

struct list_element{
    struct list_element * next;  
};

typedef struct  list_element list_element;

typedef struct {
    list_element * first;
    list_element * last;
} list;

void list_init(list * container){
    container-> first=0;
    container->last=0;
}

bool list_empty(list * container){
    return 0== container->first;
}

list_element * list_begin(list * container){
    return container->first;
}

list_element * list_next(list_element * element){
    return element->next;
}

int main(){

    return 0;
}