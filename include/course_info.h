#pragma once
#include <iostream>
#include <string>
#include <vector>

struct Course {
    std::string name;
    int level;
    int prior;
    std::vector<std::string> deps;
    bool selected;
};

std::istream& operator>>(std::istream& in, Course& info);

struct CourseInfo {
    std::vector<Course> courses;
};

std::istream& operator>>(std::istream& in, CourseInfo& info);
