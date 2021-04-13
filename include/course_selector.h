#pragma once
#include <course_info.h>
#include <vector>

class CourseSelector {
 public:
    explicit CourseSelector(const CourseInfo& info);
    std::vector<std::string> Select();
 private:
};
