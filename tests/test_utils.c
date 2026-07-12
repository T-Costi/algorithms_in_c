#include <stddef.h>
#include <stdio.h>
#include "test_utils.h"

void print_array(int array[], int len){
    if (array == NULL || len == 0) {
        printf("[]\n");
        return; 
    }
    printf("[");
    int i;
    for (i = 0; i<len; i++){
        printf("%d", array[i]);
        if (i < len - 1){
            printf(", ");
        }
    }
    printf("]\n");
}

int test_assertion(int array1[], int array2[], int len1, int len2){
    if (len1!=len2){return 0;}
    if (array1 == NULL && array2 == NULL ){return 1;}
    if (array1 == NULL || array2 == NULL ){return 0;}
    
    for (int i = 0; i < len1; i++){
        if(array1[i] != array2[i]){ //checking element by element to see if the arrays are identical
            return 0;
        }
    }
    return 1;
}