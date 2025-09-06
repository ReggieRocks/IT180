//Scott Schmidt; ISU C++ 180; HW1
#include <iostream>
using namespace std; // lets you write cout instead of std::cout

//FORWARD DECLARATIONS:
double mean(int arr[], int size); 
int findMin(int arr[], int size);
int findMax(int arr[], int size);

//MAIN SECTION:
int main() {
    const int SIZE = 15;
    int arr[SIZE]; // declares an array of 15 integers
    
    cout << "Enter 15 numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find Mean:
    double avg = mean(arr, SIZE);
    cout << "The mean is: " << avg << endl;
    
    int min = findMin(arr, SIZE);
    cout << "The min is: " << min;
    
    int max = findMax(arr, SIZE);
    cout << "The max is: " << max;
    
    return 0; // return 0 if nothing found
}

// =========FUNCTIONS==========
    // Find Mean Function:
    double mean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return static_cast<double>(sum) / size;
}
    /*
    Part D: Function finds lowest value of array.
    Write a function that finds the lowest value of the declared array.
    Returns the lowest value found to main to be displayed. 
    Use forward declaration for this function. (5 points)
    */
    int findMin(int arr[], int size) {
        int min = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] <min) min = arr[i];
        }
        return min;
    }
    /*
    PART E: Function that finds the highest value of the declared array 
    Returns the highest value found to main to be displayed on the console
    i. Use forward declaration for this function. (5 points)
    */
    int findMax(int arr[], int size) {
        int max = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) max = arr[i];
        }
        return max;
    }
 // end

 /*
 ====OUTPUT======
 Enter 15 numbers:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
You entered:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
The mean is: 8
The min is: 1The max is: 15

=== Code Execution Successful ===
