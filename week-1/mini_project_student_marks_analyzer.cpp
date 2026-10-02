#include <iostream>
using namespace std;

// Mini Project: Student Marks Analyzer
// 1. Input marks of N students  2. Sort (descending)
// 3. Print top 3 marks          4. Print average score
void sortDescending(int marks[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marks[j] < marks[j + 1]) {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[100];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    double average = (double)sum / n;
    sortDescending(marks, n);

    cout << "\n===== Student Marks Analyzer =====" << endl;
    cout << "Top marks:" << endl;
    int top = (n < 3) ? n : 3;
    for (int i = 0; i < top; i++)
        cout << "  " << i + 1 << ". " << marks[i] << endl;
    cout << "Average score: " << average << endl;
    return 0;
}
