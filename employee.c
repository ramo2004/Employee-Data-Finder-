#include "employee.h"
#include <stdio.h>
#include <stdlib.h>

Employee * readData(char *filename, int *size)
{
FILE *fp = fopen(filename, "r");
Employee * employees = NULL;
Employee e;
int i;

*size = 0;
if(fp != NULL){
while(fscanf(fp, "%s %d %lf", e.name, &e.id, &e.salary) == 3){
*size = *size + 1;
}
rewind(fp);

//allocate memory
employees = (Employee *) malloc(sizeof(Employee) * (*size));
for(i = 0; i < *size; i++){
fscanf(fp, "%s %d %lf", employees[i].name, &employees[i].id, &employees[i].salary);
}
fclose(fp);
}
return employees;
}
Employee getBestEmployee(Employee *employees, int size)
{
Employee bestEmp = employees[0];

int i = 0;
for(i = 1; i < size; i++){
if(employees[i].salary > bestEmp.salary){
bestEmp = employees[i];
}
}
return bestEmp;
}

void writeData(char *filename, Employee emp)
{
FILE *fp = fopen(filename, "w");
fprintf(fp, "%s %d %d\n", emp.name, emp.id, (int)emp.salary);
fclose(fp);
}
