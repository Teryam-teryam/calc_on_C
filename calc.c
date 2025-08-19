#include <stdio.h>

void operand_selection(int* operand_1, int* operand_2)
{
	printf("Введите первый операнд: ");
	scanf("%d", operand_1);
	printf("Введите второй операнд: ");
	scanf("%d", operand_2);
}

float calculate()
{
	char operator;
	printf("Введите оператор [+, -, *, /]: ");
	scanf("%c",&operator);	
	int operand_1, operand_2;
	operand_selection(&operand_1, &operand_2);
	switch(operator)
		{
		case '+':
			return operand_1 + operand_2;
		case '-':
			return operand_1 - operand_2;
		case '*':
			return operand_1 * operand_2;
		case '/':
			return operand_1 / operand_2;
		default:
			return 0;
		} 
}

int main()
{
	printf("Результат: %f\n", calculate());
	return 0;
}

