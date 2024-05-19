#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_SUBJECTS = 5; 


struct SubjectScore {
    string subject;
    int score;
};

class Student {
public:
    
    string student_id;
    string name;
    SubjectScore marks[MAX_SUBJECTS];
    int num_subjects;
    char grade;
    string password;

    
    Student() : student_id(""), name(""), grade('F'), password(""), num_subjects(0) {}
    Student(const string& id, const string& student_name, const string& pwd)
        : student_id(id), name(student_name), grade('F'), password(pwd), num_subjects(0) {}

    
    void add_marks(const string& subject, int score);
    void display_grades() const;
    void generate_mark_sheet() const;
    bool verify_password(const string& pwd) const;
};

#endif 