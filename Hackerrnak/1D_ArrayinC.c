/*An array is a container object that holds a fixed number of values of a single type. To create an array in C, we can do int arr[n];. Here, arr, is a variable array which holds up to  integers. The above array is a static array that has memory allocated at compile time. A dynamic array can be created in C, using the malloc function and the memory is allocated on the heap at runtime. To create an integer array,  of size , int *arr = (int*)malloc(n * sizeof(int)), where  points to the base address of the array.

In this challenge, you have to create an array of size  dynamically, input the elements of the array, sum them and print the sum of the elements in a new line.

Input Format

The first line contains an integer, .
The next line contains  space-separated integers.

Constraints



Output Format

Print in a single line the sum of the integers in the array.*/

/////////////////////////////////////////////Submission/////////////////////////////////////////////////////
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <sys/types.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    u_int32_t u32input_arrysize, u32loopctrl, u32loopctrl_remndr;
    u_int8_t u8idx;
    int iSumOfElmts;
    
    //input arry size
    scanf("%d", &u32input_arrysize);
    
    //define arry
    int *arr = (int*)malloc(u32input_arrysize * sizeof(int));

    iSumOfElmts = 0;
    //input arry elements and summation
    while(u32input_arrysize--) //To satisfy time limit
    {
        scanf("%d", &arr[u8idx]);
        iSumOfElmts += arr[u8idx];
    }

    //free
    free(arr);
    
    //output
    printf("%d", iSumOfElmts);
    
    return 0;
}