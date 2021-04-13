#pragma once
#include <course_info.h>
#include <vector>
#include <map>

class CourseSelector {
 public:
    CourseSelector() = default;
    std::vector<std::string> Select(const CourseInfo& info);
 private:
    void SetCourses(const std::vector<Course>& courses_data);
    void OrderCourses();
    void CalculateCourseIds();
    void MarkSelectedCourses();
    std::vector<std::string> GetSelectedCourses();

    std::vector<Course> courses;
    std::map<std::string, size_t> id_by_name;
};
