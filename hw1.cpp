#include <iostream>
using namespace std;   // lets you write cout instead of std::cout

// Function to calculate the mean
double mean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;  // return the average
}

int main() {
    const int SIZE = 15;
    int arr[SIZE];

    cout << "Enter 15 numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the mean function and print result
    double avg = mean(arr, SIZE);
    cout << "The mean is: " << avg << endl;

    return 0;
} // final bracket
