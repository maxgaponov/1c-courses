#include <course_selector.h>
#include <algorithm>

std::vector<std::string> CourseSelector::Select(const CourseInfo& info) {
    SetCourses(info.courses);
    OrderCourses();
    CalculateCourseIds();
    MarkSelectedCourses();
    return GetSelectedCourses();
}

void CourseSelector::SetCourses(const std::vector<Course>& courses_data) {
    courses = courses_data;
}

void CourseSelector::OrderCourses() {
    std::sort(courses.begin(), courses.end(), [](const Course& lhs, const Course& rhs) {
        return lhs.level > rhs.level;
    });
}

void CourseSelector::CalculateCourseIds() {
    size_t id = 0;
    for (const auto& course : courses) {
        id_by_name[course.name] = id;
        id += 1;
    }
}

void CourseSelector::MarkSelectedCourses() {
    for (const auto& course : courses) {
        if (course.selected) {
            for (const auto& dep_name : course.deps) {
                size_t dep_id = id_by_name[dep_name];
                courses[dep_id].selected = true;
            }
        }
    }
}

std::vector<std::string> CourseSelector::GetSelectedCourses() {
    std::vector<std::string> selected_courses;
    for (const auto& course : courses) {
        if (course.selected) {
            selected_courses.push_back(course.name);
        }
    }
    std::reverse(selected_courses.begin(), selected_courses.end());
    return selected_courses;
}
