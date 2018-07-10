//Aluna: Livia Gabrielle Vaz Ferreira    Matricula:11721EBI009

#include <stdio.h>
int main()
{
	int sl=0, i=0;
	char numero[256];
	printf("Digite uma sequencia de caracteres numericos: ");
    scanf("%s", numero);
	getchar();
	for (i=0; numero[i]; i++)
	{

		if ((numero[i]-'0')>=0 && (numero[i]-'0')<=9)

			sl=sl*10+(numero[i]-'0');

		else;
	}
	printf("%i", sl); 
	return 0;
}
