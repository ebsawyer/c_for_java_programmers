//
// Created by Ethan Sawyer on 7/6/20.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "employee.h"

// This function is in the C standard library but so what
char *strdup(const char *s) {
    char *t = (char *) malloc(strlen(s) + 1);
    strcpy(t, s);
    return t;
}

struct Employee {
    char *name;
    int id;
};

Employee new_Employee(char *name, int id) {
    Employee this = (Employee) malloc(sizeof(struct Employee));
    if (this == NULL) {
        return NULL; // Out of memory...
    }
    this->name = strdup(name); // See text
    this->id = id;
    return this;
}

void Employee_print(Employee this) {
    printf("Employee[%s,%d]", this->name, this->id);
}

char *Employee_get_name(Employee this) {
    return strdup(this->name);
}

void Employee_set_name(Employee this, char *name) {
    this->name = name; // See text
}

int Employee_get_id(Employee this) {
    return this->id;
}

void Employee_set_id(Employee this, int id) {
    this->id = id;
}

void Employee_free(struct Employee *this) {
    free(this->name);
    free(this);
}