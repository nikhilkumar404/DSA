#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at the end of the array
void insert(int arr[], int& size, int element) {
    if (size >= MAX_SIZE) {
        cout << "Array is full. Cannot insert more elements." << endl;
        return;
    }

    // Insert the new element at the end
    arr[size] = element;
    size++;
}

// Function to delete the last element from the array
void remove(int arr[], int& size) {
    if (size <= 0) {
        cout << "Array is empty. Cannot delete any element." << endl;
        return;
    }

    // Decrease the size of the array
    size--;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Insert some initial elements into the array
    insert(arr, size, 10);
    insert(arr, size, 20);
    insert(arr, size, 30);

    // Display the array
    displayArray(arr, size);

    // Insert an element at the end
    int element;
    cout << "Enter the element to insert: ";
    cin >> element;
    insert(arr, size, element);
    displayArray(arr, size);

    // Delete an element from the end
    cout << "Deleting element from the end..." << endl;
    remove(arr, size);
    displayArray(arr, size);

    return 0;
}
