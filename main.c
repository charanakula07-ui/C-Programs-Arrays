/*#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}*/

                                                            /* Arrays*/

/* An array is a collection of variables of the same type  (or) a data structure that can hold a fixed number of values of the same type. */


/*#include <stdio.h>
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Stayly";
    
    printf("%d\n", numbers[0]); // Output: 1
    printf("%c\n", grades[1]); // Output: B
}*/

/*#include <stdio.h>
int main() {
    int numbers[] = {10, 20, 30, 40, 50, 60, 70};
    char grades[] = {'A', 'B', 'C', 'D', 'F' , 'G'};
    char name[] = "Stayly";

    printf("%d\n", sizeof(numbers[0])); // Output: 4

    int size = sizeof(numbers) / sizeof(numbers [0]);
    for (int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    /*for (int i = 0; i < 6; i++){
        printf("%c ", grades[i]);
    }*/

                                            /*Multidimensional Arrays*  (or)  2D Arrays*/

/*#include <stdio.h>
int main() {
    int numbers[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}};

        for (int i = 0; i < 3; i++) {//rows
            for (int j = 0; j < 3; j++) {//columns
                printf("%d ", numbers[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
*/


                                                        /*BUBBLE SORT*/
/*#include <stdio.h>
int main() {
    int numbers[] = {60, 20, 50, 40, 30, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    // Bubble Sort Algorithm                      //SORTING TECHNIQUE
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {  //for ascending order
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}*/

                                                /*Programs to be practiced*/
                                                /*Write a program to sort the array elements in ascending order...???*/
                                        
/*#include <stdio.h>
int main() {
    int numbers[] = {60, 20, 50, 40, 30, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

   // Bubble Sort Algorithm                      //SORTING TECHNIQUE
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}*/

                                        ///*Write a program to sort the array elements in descending order...???*///

/*#include <stdio.h>
int main() {
    int numbers[] = {60, 20, 50, 40, 30, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

   // Bubble Sort Algorithm             //SORTING TECHNIQUE
    for (int i = 0; i < size - 1; i++) {                        // Outer loop to traverse through the array
        for (int j = 0; j < size - i - 1; j++) {                // Inner loop to compare adjacent elements
            if (numbers[j] < numbers[j + 1]) {                  // Compare current element with the next element for descending order
            // Swap numbers[j] and numbers[j + 1]
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}*/

                                        ///*Write a program to find the largest and smallest element in an array*///

                            /*#include <stdio.h>
                            int main() {
                                int numbers[] = {790, 330, 809, 403, 321, 380};
                                int size = sizeof(numbers) / sizeof(numbers[0]);
                                int largest = numbers[0];                           // Initialize largest to the first element of the array
                                int smallest = numbers[0];                          // Initialize smallest to the first element of the array

                                for (int i = 1; i < size; i++) {                    // Loop through the array starting from the second element
                                    if (numbers[i] > largest) {                     // If the current element is greater than the largest, update largest
                                        largest = numbers[i];                       // If the current element is smaller than the smallest, update smallest
                                    }
                                    if (numbers[i] < smallest) {                    // Update smallest
                                        smallest = numbers[i];                      // Update smallest
                                    }
                                }

                                printf("Largest element: %d\n", largest);
                                printf("Smallest element: %d\n", smallest);

                                return 0;
                            }*/



                                        ///*Write a program to calculate the sum and average of array elements*///


                            /*#include <stdio.h>
                            int main() {
                                int numbers[] = {10, 20, 30, 40, 50};
                                int size = sizeof(numbers) / sizeof(numbers[0]);
                                int sum = 0;                    // Variable to store the sum of array elements
                                double average;                // Variable to store the average of array elements

                                for (int i = 0; i < size; i++) {            // Loop to calculate the sum of array elements
                                    sum += numbers[i];                      // Add each element to the sum variable
                                }

                                average = (double)sum / size;               // Calculate the average by dividing the sum by the number of elements (size)

                                printf("Sum of array elements: %d\n", sum);
                                printf("Average of array elements: %.2f\n", average);

                                return 0;
                            }*/

                                        ///*write a program to print the repeated elements in given array*///
                            /*#include <stdio.h>
                            int main() {
                                int numbers[] = {10, 20, 30, 20, 40, 50, 10};
                                int size = sizeof(numbers) / sizeof(numbers[0]);  // Array size calculation
                                printf("Repeated elements in the array: ");

                                for (int i = 0; i < size; i++) {                //picks each element one by one
                                    for (int j = i + 1; j < size; j++) {        //compares current element with the rest of the elements in the array
                                        if (numbers[i] == numbers[j]) {         // If a match is found, it means the element is repeated
                                            printf("%d ", numbers[i]);          // Print the repeated element
                                            break;                              // To avoid printing the same element multiple times
                                        }
                                    }
                                }

                                printf("\n");
                                return 0;
                            }*/