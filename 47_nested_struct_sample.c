#include <stdio.h>

struct Department {
    char dept_name[30];
    int dept_code;
};

struct Employee {
    char name[50];
    int emp_id;
    struct Department dept;  // Nested structure
};

int main() {
    struct Employee e[2] = {
        {"Alice", 101, {"HR", 1}},
        {"Bob", 102, {"IT", 2}}
    };

    for (int i = 0; i < 2; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Employee ID: %d\n", e[i].emp_id);
        printf("Department: %s (Code: %d)\n", e[i].dept.dept_name, e[i].dept.dept_code);
    }

    return 0;
}
