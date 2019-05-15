/*Objective

In order to get the last digit of a number, we use modulo operator \%. When the number is modulo divided by 10 we get the last digit. 

To find first digit of a number we divide the given number by  until number is greater than . At the end we are left with the first digit. 

Task

In this challenge, you have to input a five digit number and print the sum of digits of the number. 

Input Format

The input contains a single five digit number, .

Constraints
10000=< n =<99999

Output Format

Print the sum of the digits of the five digit number.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,b,c,d,sum;
    scanf("%d", &n);
   
    if(n>10000 && n<99999)
    {
        a = n % 10;
        b = a % 10;
        c = b % 10;
        d = c % 10;
        sum = a + b + c + d;
        printf("%d", sum);

    }    
   else{
       printf("Invalid number");
   }
    
    
    
    
    
    
    
    return 0;
}