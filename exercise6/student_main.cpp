#include <iostream>
#include <string>
#include <vector>
#include "student_functions.cpp"

using namespace std;

int main() {
    student1 = initialize_student();
    student1 = set_midterm_score(student1);
    student1 = set_final_score(student1);
    student1 = add_homework_scores(student1);
    print_final_score(student1);
    double total_class_score = compute_class_score(student1);
    print_total_class_score(student1, total_class_score);

    return 0;
}