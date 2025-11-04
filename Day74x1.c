#include <stdio.h>

struct StudentData {
    char *stu_name;
    int stu_id;
    int stu_age;
};

int main() {
    struct StudentData student;
    student.stu_name = "Steve";
    student.stu_id = 1234;
    student.stu_age = 30;

    printf("Student Name is: %s\n", student.stu_name);
    printf("Student Id is: %d\n", student.stu_id);
    printf("Student Age is: %d\n", student.stu_age);

    return 0;
}
