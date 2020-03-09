#include <stdio.h>

#ifndef _cplusplus
typedef char bool;
#define true 1
#define false 0
#endif



int main(){
    bool c2f=false;
    double c=32;
    double f=81;

    if (c2f)
    {
        f=c*9/5+32;
    }
    else
    {
            c=(f-32)*5/9;
    }
    
    printf("%fC=%fF",c,f);
    

    return 0;
}