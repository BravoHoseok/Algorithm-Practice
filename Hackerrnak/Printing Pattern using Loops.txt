/*In this problem, you need to print the pattern of the following form containing the numbers from  to .

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Output Format

Print the pattern mentioned in the problem statement.*/

/////////////////////////////////////////////Submission/////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int i, j;//loop control
    int n;//scanf input
    int buffuer_number = 0;
    int print_number = 0;


    scanf("%d", &n);
  	// Complete the code to print the pattern.

    print_number = n;
    buffuer_number = 2*n;
    buffuer_number -= 1;//buffer number of array

    int array[buffuer_number][buffuer_number];
    // make buffer to print according to buffer number
    
    //2 2 2
    //2 1 2 only save unitl thi row and repeat print reverse
    
    //5 5 5 5 5 5 5 5 5
    //5 4 4 4 4 4 4 4 5
    //5 4 3 3 3 3 3 4 5
    //5 4 3 2 2 2 3 4 5
    //5 4 3 2 1 2 3 4 5 only save unitl thi row and repeat print reverse

    for(i = 0; i < print_number; i++)//ex) 5 => 0, 1, 2, 3, 4
    {   
        for(j = 0; j < buffuer_number; j++)//buffer 9 => 0,1,2,3,4,5,6,7,8
        { 
            if(j < i)
            {
                array[i][j] = print_number;
                print_number--;
            }
            else if(j >= buffuer_number - i)
            {
                print_number++;
                array[i][j] = print_number;
            }
            else
            {
                array[i][j] = print_number;
            }
            
        }

        print_number = n;//back up initial display number ex) 5
    }

    for(i = 0; i < print_number; i++)
    {
        for(j = 0; j < buffuer_number; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    //print reverse
    for(i = print_number - 1; i > 0; i--)//2
    {
        for(j = 0; j < buffuer_number; j++)
        {
            printf("%d ", array[i-1][j]);
        }
        printf("\n");
    }

    return 0;
}