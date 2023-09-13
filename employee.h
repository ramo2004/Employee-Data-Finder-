#ifndef EMPLOYEE_H
#define EMPLOYEE_H

typedef struct
{
char name[10];
int id;
double salary;
}Employee;

Employee * readData(char *filename, int *size);
Employee getBestEmployee(Employee *employees, int size);
void writeData(char *filename, Employee emp);

#endif