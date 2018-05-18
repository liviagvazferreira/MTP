#include <stdio.h>

int main(int ab, char ** ac) 
{
    char str[256];
	int x=0,y;
	printf("Digite a string\n");
	scanf("%s",&str);
	
    while(str[x]!='\0')
{
         y=48;
             while(y>=48 && y<=57){
             if(str[x]==y) printf("%c",str[x]);
	        y++;
         }
         x++;
     }
}


