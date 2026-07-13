#include <stddef.h>
#include "insertion_sort.h"

void insertion_sort(int array[], int len){
    if( array == NULL || len < 2){ return; } //if the array is empty or it only has one element

    for(int i = 1; i < len; i++){ //run through every element of the array 
        int temp = array[i]; //memorize the element that will be moved
        int j = i-1; //index where the sorting starts

        while (j >= 0 && array[j] > temp){ //if the element is already bigger than the previous one, it doesn't need to be moved
            array[j + 1] = array[j]; // Create space for temp by shifting larger elements to the right.
            j--;
        }
        
        array[j + 1] = temp; //insert the memorized element in its correct place
    }
}
