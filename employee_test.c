//
// Created by Ethan Sawyer on 7/6/20.
//

#include <stdio.h>
#include "employee.h"

int main(int argc, char *argv[]) {
    Employee e1 = new_Employee("Alan Turing", 123);
    Employee_print(e1);
    printf("\n");
}
