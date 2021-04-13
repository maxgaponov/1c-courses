#include <course_info.h>
#include <course_selector.h>
#include <iostream>

void solve_problem(std::istream& in, std::ostream& out) {
    CourseInfo info;
    in >> info;

    CourseSelector selector(info);
    auto courses = selector.Select();

    for (auto& course : courses) {
        out << course << std::endl;
    }
}

int main() {
    solve_problem(std::cin, std::cout);
    return 0;
}
