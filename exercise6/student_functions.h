#ifndef __student_functions_H_
#define __student_functions_H_

struct student {
    int id;
    string name;
    int final;
    int midterm;
    vector<int> hw_grades;
};


struct student initialize_student();
struct student set_final_score(const student & s);
struct student set_midterm_score(const student & s);
struct student add_homework_scores(const student & s);
double compute_homework_average(const student & s);
double compute_class_score(const student & s);
void print_final_score(const student & s);
void print_total_class_score(const student & s, const double total_score);

#endif
