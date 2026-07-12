#include <stddef.h>
#include "selection_sort.h"

void selection_sort(int array[], int len){
    if (array == NULL || len < 2){ return; }

    for (int i = len - 1; i > 0; i--){
        int max_index = 0;
        int sorted = 0;

        for (int j = 1; j <= i; j++){
            if (array[max_index] <= array[j]){
                max_index = j;
                sorted++;
            }
        }

        if (sorted == i){
            break;
        }

        if (max_index != i){
            int temp = array[max_index];
            array[max_index] = array[i];
            array[i] = temp;
        }
    }
}