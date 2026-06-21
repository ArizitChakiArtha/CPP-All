#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

struct Student {
    string name;
    vector<double> marks;
};

double calculateAverage(const vector<double>& marks) {
    if (marks.empty()) return 0.0;
    double sum = accumulate(marks.begin(), marks.end(), 0.0);
    return sum / marks.size();
}

char calculateGrade(double average) {
    if (average >= 90) return 'A+';
    if (average >= 85) return 'A';
    if (average >= 80) return 'B+';
    if (average >= 75) return 'B';
    if (average >= 70) return 'C+';
    if (average >= 65) return 'C';
    if (average >= 60) return 'D+';
    if (average >= 50) return 'D';
    return 'F';
}

int main() {
    Student student{"Artho", {85, 90, 78, 88}};
    double average = calculateAverage(student.marks);

    cout << "Student: " << student.name << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << calculateGrade(average) << endl;

    return 0;
}
