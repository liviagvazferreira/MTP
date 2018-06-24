#include <stdio.h>

int main ()
{
	int esta = 0, n = 0;
	char bits [256];
	printf ("\nInsira um numero em binario: ");
	scanf ("%s", bits);

	while(bits[n]!='\0')
	{
		if(bits[n]=='0')
		{
			if(esta==0)
				esta=0;
			else
			{
				if(esta==1)
					esta=2;
				else
				{
					if (esta==2)
						esta=1;
				}
			}
		}
		if(bits[n]=='1')
		{
			if(esta==0)
				esta=1;
			else
			{
				if(esta==1)
					esta=0;
				else
				{
					if(esta=2)
						esta=2;
				}

			}
		}
		n++;
	}

	if (esta==0)
		printf("\nO numero sera multiplo de 3...",bits);
	if (esta!=0)
		printf("\nO numero nao sera multiplo de 3...", bits);

	return 0;

}
