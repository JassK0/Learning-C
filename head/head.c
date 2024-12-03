#include <stdio.h>
#include <stdlib.h>
// make head file 
void file(char *filename, int n){
FILE *file = fopen(filename, "r");

char line[1024];
int count = 0;

while (fgets(line, sizeof(line), file))
{
    printf("%s", line);
    count++;

    if (count >= n)
    {
       break; 
    }
    
}



}



int main(int argc, char *argv[]){
    

}