#include <stdio.h>

int main () {
    
    float x;

    for (x = 0; x < 0.00000000001; x = x + 0.000000000001){
        printf("Word "); 
    }

    return 0;
}