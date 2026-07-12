#include <stddef.h>
#include <stdio.h>
#include "test_utils.h"
#include "../sorting/bubble_sort.h"

// normal disorganized array
int test_case1(){
    int array[] = {5,2,3,7,1}; // array to begin with
    int expected[] = {1,2,3,5,7}; // array we expect to get at the end

    printf("case 1: normal array\n"); 

    print_array(array, 5); // print the original array
    bubble_sort(array, 5); // sort the array with the bubblesort funtion
    print_array(array, 5); // print the array we got

    return test_assertion(array, expected, 5,5); // return 1 if the array was sorted correctly, 0 if not
}

//organized array
int test_case2(){
    int array[] = {1,2,3,4,5}; 
    int expected[] = {1,2,3,4,5}; 

    printf("case 2: organized array\n"); 

    print_array(array, 5); 
    bubble_sort(array, 5); 
    print_array(array, 5); 

    return test_assertion(array, expected, 5,5); 
}

//reversed array
int test_case3(){
    int array[] = {5,4,3,2,1}; 
    int expected[] = {1,2,3,4,5}; 

    printf("case 3: reversed array\n"); 

    print_array(array, 5); 
    bubble_sort(array, 5); 
    print_array(array, 5); 

    return test_assertion(array, expected, 5,5); 
}

// array with repetitions
int test_case4(){
    int array[] = {5,2,3,7,2}; 
    int expected[] = {2,2,3,5,7}; 

    printf("case 4: array with repetitions \n"); 

    print_array(array, 5); 
    bubble_sort(array, 5); 
    print_array(array, 5); 

    return test_assertion(array, expected, 5,5); 
}

// array with negatives
int test_case5(){
    int array[] = {3,-1,0,-4,8}; 
    int expected[] = {-4,-1,0,3,8}; 
    
    printf("case 5: array with negatives\n"); 
    
    print_array(array, 5); 
    bubble_sort(array, 5); 
    print_array(array, 5); 
    
    return test_assertion(array, expected, 5,5); 
}

// array with all the same numbers
int test_case6(){
    int array[] = {8,8,8,8,8}; 
    int expected[] = {8,8,8,8,8}; 
    
    printf("case 6: all the same\n"); 
    
    print_array(array, 5); 
    bubble_sort(array, 5); 
    print_array(array, 5); 
    
    return test_assertion(array, expected, 5,5); 
}

//single number array
int test_case7(){
    int array[] = {8}; 
    int expected[] = {8}; 
    
    printf("case 7: single number array\n"); 
    
    print_array(array, 1); 
    bubble_sort(array, 1); 
    print_array(array, 1); 
    
    return test_assertion(array, expected, 1,1); 
}

// NULL array
int test_case8(){
    int *array = NULL; 
    int *expected = NULL; 
    
    printf("case 8: NULL array\n"); 
    
    print_array(array, 0); 
    bubble_sort(array, 0); 
    print_array(array, 0); 
    
    return test_assertion(array, expected, 0,0); 
}

int main(){
    int sum = 0;
    sum += test_case1();
    sum += test_case2();
    sum += test_case3();
    sum += test_case4();
    sum += test_case5();
    sum += test_case6();
    sum += test_case7();
    sum += test_case8();

    if (sum != 8){
        printf("something is wrong\n");
    }else{
        printf("everything works out fine ;)\n");
    }
    return 0;
}
    



