#include <iostream>
#include <string>
#include <vector>
#include "student_functions.h"

using namespace std;

student initialize_student() {
    student s;
    cout << "Enter the student's id: ";
    cin >> s.id;

    cout << "Enter the student's name: ";
    cin >> s.name;
    return s;
}

// I could combine the exam funnctions to avoid repetitive code
student set_final_score(const student & s) {
    cout << "Enter the student's final: ";
    cin >> s.final;
    return s;
}

student set_midterm_score(const student & s) {
    cout << "Enter the student's midterm: ";
    cin >> s.midterm;
    return s;
}

student add_homework_scores(const student & s) {
    int score;
    while(cin >> score) {
        cout << "Enter the homework score (Ctrl + D to exit): ";
        s.hw_grades.push_back(score);
    }
    for (auto h_score : s.hw_grades) {
        cout << h_score << " ";
    }
    cout << endl;
    return s;
}

double compute_homework_average(const student & s) {
    // check edge case to avoid dividing by zero where no homework was assigned/input
    if (s.hw_grades.size() == 0) {
        return 100.0;
    }
    double sum{0.0}, hw_average{0.0};

    for (auto h_score : s.hw_grades) {
        sum += h_score;
    }
    hw_average = sum / s.hw_grades.size();
    
    return hw_average;
}

double compute_class_score(const student & s) {
    double final_total_score{0.0};
    hw_average = compute_homework_average(s);
    final_total_score = 0.30 * s.midterm + 0.30 * s.final + 0.40 * hw_average;

    return final_total_score;
}

void print_final_score(const student & s) {
    cout << s.name << " earned a " << s.final << " on their final" << endl;
}

void print_total_class_score(const student & s, const double total_score) {
    total_score = compute_class_score(s);
    cout << s.name << "'s total class score is: " << total_score << endl;
}
