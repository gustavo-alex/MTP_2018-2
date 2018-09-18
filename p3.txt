#include <stdio.h>

void conversor(int num)
{
	int i = 0, j = 0, numero_convertido[100], negative = 0;

	if(num < 1)
	{
		num *= -1;
		num -= 1;
		negative = 1;
	}

	for(i = 0; num >= 1; i++)
	{
		numero_convertido[i] = num % 2;
		num /= 2;
	}

	j = i;

	if(negative)
	{
		for(j -= 1; j >= 0; j--)
		{
			if(numero_convertido[j] == 0) numero_convertido[j] = 1;
			else numero_convertido[j] = 0;
		}
	}

	for(i -= 1; i >= 0; i--) printf("%i", numero_convertido[i]);
}

int main()
{
    int opcao = 0, i = 0, num = 0, num1 = 0, num2 = 0;


	printf("\n1. NOT");
	printf("\n2. AND");
	printf("\n3. OR");
	printf("\n4. XOR");
	printf("\n5. RIGHT SHIFT");
	printf("\n6. LEFT SHIFT");
	printf("\nDigite a opcao desejada: ");
	scanf("%i", &opcao);
	getchar();

	switch(opcao)
	{
		case 1: //NOT
			printf("\nDigite o numero desejado: ");
			scanf("%i", &num1);
			printf("NOT ");
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			num = ~num1;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 2: //AND
			printf("\nDigite o primeiro numero desejado: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero desejado: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" AND ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 & num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 3: //OR
			printf("\nDigite o primeiro numero desejado: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero desejado: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" OR ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 | num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 4: //XOR
			printf("\nDigite o primeiro numero desejado: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero desejado: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" XOR ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 ^ num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 5: //RIGHT
			printf("\nDigite o primeiro numero desejado: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero desejado: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" >> ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 >> num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		case 6: //LEFT
			printf("\nDigite o primeiro numero desejado: ");
			scanf("%i", &num1);
			printf("\nDigite o segundo numero desejado: ");
			scanf("%i", &num2);
			printf("\n%i ", num1);
			printf("(");
			conversor(num1);
			printf(")");
			printf(" << ");
			printf("%i ", num2);
			printf("(");
			conversor(num2);
			printf(")");
			num = num1 << num2;
			printf(" : %i", num);
			printf("(");
			conversor(num);
			printf(")");
			break;
		default:
			break;
	}

    return 0;
}