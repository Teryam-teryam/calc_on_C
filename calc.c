#include "calc.h"

void operand_selection(int* operand_1, int* operand_2)
{
	printf("Введите первый операнд: ");
	scanf("%d", operand_1);
	printf("Введите второй операнд: ");
	scanf("%d", operand_2);
}

int add(int operand_1, int operand_2) //addition
{
	return operand_1 + operand_2;
}
int sub(int operand_1, int operand_2) //substraction
{
	return operand_1 - operand_2;
}
int mult(int operand_1, int operand_2) //multiplication
{
	return operand_1 * operand_2;
}
int div(int operand_1, int operand_2) //division
{
	return operand_1 / operand_2;
}

int calculate()
{
	char operator;
	printf("Введите оператор [+, -, *, /]: ");
	scanf("%c",&operator);	
	int operand_1, operand_2;
	operand_selection(&operand_1, &operand_2);
	switch(operator)
		{
		case '+':
			return add(operand_1, operand_2);
		case '-':
			return sub(operand_1, operand_2);
		case '*':
			return mult(operand_1, operand_2);
		case '/':
			return div(operand_1, operand_2);
		default:
			return 0;
		} 
}


