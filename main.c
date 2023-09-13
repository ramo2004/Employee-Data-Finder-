#include <stdio.h>

#include <stdlib.h>

#include "employee.h"



int main()

{

char infilename[20] = "a6-input.txt", outfilename[20] = "a6-output.txt";

Employee *employees;

int size;

Employee bestEmp;





/*

printf("Enter input filename: ");

scanf("%s", infilename);

printf("Enter output filename: ");

scanf("%s", outfilename);

*/

employees = readData(infilename, &size);

bestEmp = getBestEmployee(employees, size);

writeData(outfilename, bestEmp);

free(employees);

printf("Please check %s for output\n", outfilename);



return 0;

}