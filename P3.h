#include <stdio.h>

void bts(unsigned int val, int len) 
{
	if(len != 0) 
	{
	bts(val/2, len-1);
	printf("%d", (val%2));
	}	
}
int main()
{
	int aux, x, y, r;
	printf("Menu da Calculadora\n\n");
	printf("1. Not\n2. And\n3. Or\n4. Xor\n5. Right Shift\n6. Left Shift\n\n");
	scanf("%d", &aux);
	if(aux == 1)
	{
	printf("\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\nNot %d", x);
	printf("(");
	bts(x, 32);
	printf(")");
	r=~x;
	printf(" : %d", r);
	printf("(");
	bts(r, 32);
	printf(")");
	}
	else if (aux == 2)
	{
	printf("\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite um outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	bts(x, 32);
	printf(")");
	printf(" And %d", y);
	printf("(");
	bts(y, 32);
	printf(")");
	r=x&y;
	printf(" : %d", r);
	printf("(");
	bts(r, 32);
	printf(")");
	}
	else if ( aux == 3)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	bts(x, 32);
	printf(")");
	printf(" Or %d", y);
	printf("(");
	bts(y, 32);
	printf(")");
	r=x|y;
	printf(" : %d", r);
	printf("(");
	bts(r, 32);
	printf(")");
	}
	else if ( aux == 4)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	bts(x, 32);
	printf(")");
	printf(" Xor %d", y);
	printf("(");
	bts(y, 32);
	printf(")");
	r=x^y;
	printf(" : %d", r);
	printf("(");
	bts(r, 32);
	printf(")");
    } 
	else if ( aux == 5)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	bts(x, 32);
	printf(")");
	printf(" >> %d", y);
	printf("(");
	bts(y, 32);
	printf(")");
	r=x>>y;
	printf(" : %d", r);
	printf("(");
	bts(r, 32);
	printf(")");
	}
	else if( aux == 6)
	{
	printf("\n\nDigite um valor: ");
	scanf("%d", &x);
	getchar();
	printf("\n\nDigite outro valor: ");
	scanf("%d", &y);
	getchar();
	printf("\n\n%d", x);
	printf("(");
	bts(x, 32);
	printf(")");
	printf(" << %d", y);
	printf("(");
	bts(y, 32);
	printf(")");
	r=x<<y;
	printf(" : %d", r);
	printf("(");
	bts(r, 32);
	printf(")");
	}
	return 0;
}

