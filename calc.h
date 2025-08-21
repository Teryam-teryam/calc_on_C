#ifndef CALC_H
#define CALC_H
#include <stdio.h>
void operand_selection(int* operand_1, int* operand_2);

int add(int operand_1, int operand_2);
int sub(int operand_1, int operand_2);
int mult(int operand_1, int operand_2);
int div(int operand_1, int operand_2);

int calculate();
#endif
