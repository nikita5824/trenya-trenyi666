#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int &min, int &max) {
    min = max = arr[0]; // Initialize min and max to the first element

    // Traverse the array and update min and max as needed
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 9, 3, 1, 8, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, min, max);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}
