//Aluna:Livia Gabrielle Vaz Ferreira   Matricula: 11721EBI009
#include <stdio.h>

int ackermann_function(int m, int n) 
{
    if (m == 0)
	{	
		return n+1;	
	}
	else if (m > 0 && n == 0)
	{
		return ackermann_function(m-1,1);	
	}
	else
	{
		return ackermann_function(m-1, ackermann_function(m,n-1));	
	}
}

int main()
{
	int m, n;
	printf("\nDigite o valor de m: ");
	scanf("%d", &m);
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	printf("\nO resultado da funcao eh: %d", ackermann_function(m,n));
	return 0;
}
