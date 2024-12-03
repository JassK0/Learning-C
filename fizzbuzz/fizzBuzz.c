#include <stdio.h>


void fizz(int num){
    for (int i = 1; i <= num; i++)
    {
            if (i%3 == 0 && i%5 == 0)
            {
                printf("FizzBuzz\n");
            }
            else if (i%3 == 0)
            {
                printf("Fizz\n");
            }
            else if (i%5 == 0)
            {
                printf("Buzz\n");
            }else
            {
                printf("%d\n", i);
            }
            
    }
    
}

int main(){
    int num;
    printf("Enter a number to be fizzed: ");
    scanf("%d", &num);

    fizz(num);


    return 0;
}