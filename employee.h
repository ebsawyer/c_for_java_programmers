//
// Created by Ethan Sawyer on 7/6/20.
//

#ifndef C_FOR_JAVA_PROGRAMMERS_EMPLOYEE_H
#define C_FOR_JAVA_PROGRAMMERS_EMPLOYEE_H

#endif //C_FOR_JAVA_PROGRAMMERS_EMPLOYEE_H

typedef struct Employee *Employee;

extern Employee new_Employee(char *name, int id);

extern void Employee_print(Employee this);

extern char *Employee_get_name(Employee this);

extern void Employee_set_name(Employee this, char *name);

extern int Employee_get_id(Employee this);

extern void Employee_set_id(Employee this, int id);

extern void Employee_free(Employee this);
