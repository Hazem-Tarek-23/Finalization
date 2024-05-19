#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H

#include <vector>
#include <string>
#include "Student.h"
using namespace std;

class SearchEngine {
private:
    vector<Student> data;

public:
    SearchEngine() = default;
    SearchEngine(const vector<Student>& students) : data(students) {}

    
    Student* search_by_id(const string& id);
    Student* search_by_name(const string& name);
    void update_data(const vector<Student>& students);
};

#endif 