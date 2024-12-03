#include <stdio.h>
#include <stdlib.h>

void head(const char *filename, int n) {
    FILE *file = fopen(filename, "r");  // Open the file in read mode
 

    char line[1024]; // Buffer to hold each line of the file
    int count = 0;

    // Loop to read and print lines
    while (fgets(line, sizeof(line), file)) { // Read a line from the file
        printf("%s", line); // Print the line to the console
        count++;            // Increment the line counter
        if (count >= n) {   // Stop after printing n lines
            break;
        }
        
    }

    fclose(file); // Close the file
}

int main(int argc, char *argv[]) {
    // Assume arguments are valid and correct: filename and number of lines
    const char *filename = argv[1];
    int n = atoi(argv[2]); // Convert second argument to an integer

    head(filename, n); // Call the head function

    return 0;
}
