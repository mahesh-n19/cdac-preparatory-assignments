#include <stdio.h>
#include <string.h>
#include<iostream>

#define SIZE 10 // Define the number of strings

using namespace std;

int main() {
    // Declare and initialize an array of strings (char* array)
    char *arr[SIZE] = {
        "apple", "banana", "cherry", "apple", "date",
        "banana", "grape", "cherry", "fig", "apple"
    };

    int i, j;
    int duplicateFound[SIZE] = {0}; // Array to track already printed duplicates

    cout<<"Duplicate strings found in the array:\n";

    // Check for duplicates using nested loops
    for (i = 0; i < SIZE; i++) {
        if (duplicateFound[i]) // Skip if already marked as duplicate
            continue;

        for (j = i + 1; j < SIZE; j++) {
            if (strcmp(arr[i], arr[j]) == 0) { // Compare strings
                duplicateFound[j] = 1; // Mark duplicate
                duplicateFound[i] = 1;
            }
        }

        // Print only the first occurrence of the duplicate
        if (duplicateFound[i]) {
            cout<< arr[i] <<endl;
        }
    }

    return 0;
}
