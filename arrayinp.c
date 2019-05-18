/*An array is a container object that holds a fixed number of values of a single type. To create an array in C, we can do int arr[n];. Here, arr, is a variable array which holds up to  integers. The above array is a static array that has memory allocated at compile time. A dynamic array can be created in C, using the malloc function and the memory is allocated on the heap at runtime. To create an integer array,  of size , int *arr = (int*)malloc(n * sizeof(int)), where  points to the base address of the array.

In this challenge, you have to create an array of size  dynamically, input the elements of the array, sum them and print the sum of the elements in a new line.

Input Format

The first line contains an integer, . 
The next line contains  space-separated integers.

Constraints

 

Output Format

Print in a single line the sum of the integers in the array.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,sum=0;
    int *arr = (int*)malloc(n * sizeof(int));
    scanf("%d",&n);
   
    for(int a=0;a<=n;a++){
      scanf("%d",&arr[a]);
      sum += arr[a];

    }
   
    printf("%d",sum);
    
    
    
    return 0;
}

