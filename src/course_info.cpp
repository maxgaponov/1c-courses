#include <course_info.h>

std::istream& operator>>(std::istream& in, Course& info) {
    in >> info.name >> info.level >> info.prior >> info.selected;

    int dep_count;
    in >> dep_count;
    info.deps.resize(dep_count);
    for (int i = 0; i < dep_count; ++i) {
        in >> info.deps[i];
    }

    return in;
}

std::istream& operator>>(std::istream& in, CourseInfo& info) {
    int course_count;
    in >> course_count;
    info.courses.resize(course_count);
    for (int i = 0; i < course_count; ++i) {
        in >> info.courses[i];
    }
    return in;
}
