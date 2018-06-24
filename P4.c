#include <stdio.h>
int main()
{
	int conve=0, c=0, j=0;
	char num[256];
	printf("Digitar numeros e letras para a retirada das letras: ");
	scanf("%s", num);
	getchar();
	for (j=0; num[j]; i++)
	{
		if ((num[j]-'0')>=0 && (num[j]-'0')<=9)
			c=c*10+(num[j]-'0');
		else;
	}
	printf("%j", c);
	return 0;
}