#include <iostream>

using namespace std;

const int MAX_SIZE = 50(Any randow number, while keeping memory as a concern);

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at the beginning of the array
void insert(int arr[], int& size, int element) {
    if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size - 1; i >= 0; --i) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;
    size++;
}

// Function to delete the first element from the array
void delete(int arr[], int& size) {
    if (size <= 0) {
        cout << "Array is empty. Cannot delete any element." << endl;
        return;
    }

    // Shift elements to the left to remove the first element
    for (int i = 0; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Insert some initial elements into the array
    insertAt(arr, size, 30);
    insertAt(arr, size, 20);
    insertAt(arr, size, 10);

    // Display the array
    displayArray(arr, size);

    // Insert an element at the beginning
    int element;
    cout << "Enter the element to insert at the beginning: ";
    cin >> element;
    insert(arr, size, element);
    displayArray(arr, size);

    // Delete an element from the beginning
    cout << "Deleting element from the beginning..." << endl;
    delete(arr, size);
    displayArray(arr, size);

    return 0;
}
