#include <iostream>

using namespace std;

const int NUM_STUDENTS = 3;
const int NUM_SUBJECTS = 5;

// Function to calculate total marks of a student
int Total(int marks[]) {
    int total = 0;
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks of each subject
void SubjectAverages(int marks[][NUM_SUBJECTS], float averages[]) {
    for (int j = 0; j < NUM_SUBJECTS; ++j) {
        float sum = 0;
        for (int i = 0; i < NUM_STUDENTS; ++i) {
            sum += marks[i][j];
        }
        averages[j] = sum / NUM_STUDENTS;
    }
}

int main() {
    int marks[NUM_STUDENTS][NUM_SUBJECTS];

    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "Enter marks for student " << i + 1 << " in 5 subjects: ";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cin >> marks[i][j];
        }
    }

    // Calculate total marks of each student and display
    cout << "\nTotal marks of each student:" << endl;
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        int total = Total(marks[i]);
        cout << "Student " << i + 1 << ": " << total << " marks" << endl;
    }

    // Calculate average marks of each subject and display
    float subjectAverages[NUM_SUBJECTS];
    SubjectAverages(marks, subjectAverages);
    cout << "\nAverage marks of each subject:" << endl;
    for (int j = 0; j < NUM_SUBJECTS; ++j) {
        cout << "Subject " << j + 1 << ": " << subjectAverages[j] << " marks" << endl;
    }

    return 0;
}
