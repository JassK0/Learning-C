#include <stdio.h>
#include <stdlib.h>

/*
"Use & when you want to tell where the variable lives in memory."

Example:

If x = 5, then &x is like saying, "Hey, here’s the exact location of x in memory!"

______________________________________________________________________________________________________

"Use * to look inside a pointer and get or change the actual value stored there."

Example:

If p is pointing to x, then *p is like saying, "What’s inside the memory location p is pointing to?"

*/


void calc(int radius, double *circumfrance){
    *circumfrance = 2 * 3.14 * radius;
    //return circumfrance;

}



int main(){
    int radius;
    double circumfrance;
    


    printf("Enter Radius: ");
    scanf("%d", &radius);

    calc(radius, &circumfrance);

    printf("circumfrance = %.2lf\n", circumfrance);



    return 0;
}