#include <stdio.h>
#include <stdlib.h>
/*Q1: Swap Two Numbers Using Pointers
Write a program that swaps two integers using a function and pointers.

Key Topics: Pointers, Functions
Example:

plaintext
Copy code
Input:  a = 5, b = 10  
Output: a = 10, b = 5
*/
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
//gcc -o swap swapInt.c
//use & in the line that ther variables are being modified
//Use * to work with the value of a variable that a pointer is pointing to
int main(){
    int num1,num2;
    printf("Enter a ");
    scanf("%d", &num1);

    printf("Enter b: ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("Swapped: a = %d, b = %d\n", num1, num2);








}