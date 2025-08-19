#include <stdio.h>

void operand_selection(int* operand_1, int* operand_2)
{
	printf("Введите первый операнд: ");
	scanf("%d", operand_1);
	printf("Введите второй операнд: ");
	scanf("%d", operand_2);
}

int addition()
{
	int operand_1, operand_2;
	operand_selection(&operand_1, &operand_2);
	return operand_1 + operand_2;
}
int subtraction()
{
	int operand_1, operand_2;
	operand_selection(&operand_1, &operand_2);
	return operand_1 - operand_2;
}

int multiplication()
{
	int operand_1, operand_2;
	operand_selection(&operand_1, &operand_2);
	return operand_1 * operand_2;
}

int division()
{
	int operand_1, operand_2;
	operand_selection(&operand_1, &operand_2);
	return operand_1 / operand_2;
}
void operator_selection()
{
	char operator;
	printf("Введите оператор [+, -, *, /]: ");
	scanf("%c",&operator);
	switch(operator)
		{
		case '+':
			printf("%d\n", addition());
			break;
		case '-':
			printf("%d\n", subtraction());
			break;
		case '*':
			printf("%d\n", multiplication());
			break;
		case '/':
			printf("%d\n", division());
			break;
		default:
			printf("Неизвестный оператор.\n");
			break;
		} 
}

int main()
{
	operator_selection();
	return 0;
}
