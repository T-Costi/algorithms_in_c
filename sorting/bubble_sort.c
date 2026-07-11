#include <stddef.h>
#include "bubble_sort.h"

void bubble_sort(int array[], int len){
    if (array == NULL || len < 2){ return; }
    for (int i = len-1; i>0; i--){
        int swapped = 0;

        for (int j = 0; j<i; j++){
            if (array[j]>array[j+1]){
                swapped = 1;
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }

        if (swapped == 0){
            break;
        }
    }
}