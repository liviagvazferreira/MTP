#include <stdio.h>
unsigned long long int bin_dec(int bin[]) {
int i = 0; 
unsigned long long int dec = 0;
while(i<32) {
	dec =dec*2+(bin[i] - 0);
i++;
}
return dec;
}
void dec_bin(unsigned int bits,int bin[]) {
	int i,nb=31;
	printf("(");
  while(nb>=0) {
bin[nb]=bits%2;
bits=bits/2;
nb--;
  }
  	for(i=0;i<32;i++)
	   	printf("%d",bin[i]);
	printf(") ");
}
int main() {
	int a,b,c,opcao,nd2,nd1,bin[32],bin2[32],bin3[32];
	
	printf("Escolher uma das opcoes\n\n"
	"\n1 - Not\n2 - And\n3 - Or\n4 - Xor\n5 - Right Shift\n6 - Left Shift\n");
	scanf("%d",&opcao); getchar();	
	printf("Digite um numero: ");
		scanf("%d",&nd1); getchar();	
	switch(opcao){		
		case 1:
			printf("NOT %d ",nd1);
	    	dec_bin(nd1,bin);
	    	for(a=0;a<32;a++)
	    	bin2[a]=~bin[a] &0x1;
	    	printf(": %d ",bin_dec(bin2));	
	    	printf("(");
	    	for(c=0;c<32;c++)
	   		printf("%d",bin2[c]);
			printf(")");
		break;		
		case 2:
			printf("Insir outro numero: ");
			scanf("%d",&nd2);  getchar();
			printf("%d ",nd1);
			dec_bin(nd1,bin);
			printf("AND %d ",nd2);
			dec_bin(nd2,bin2);
			for(c=0;c<32;c++)
			bin3[c]=bin[c]&bin2[c];
			printf(": %d ",bin_dec(bin3));
			printf("(");
			for(c=0;c<32;c++)
			printf("%d",bin3[c]);
			printf(")");
			break;			
		case 3:
			printf("Insir outro numero : ");
			scanf("%d",&nd2);  getchar();
			printf("%d",nd1);
			dec_bin(nd1,bin);
			printf("OR %d",nd2);
			dec_bin(nd2,bin2);
			for(c=0;c<32;c++)
			bin3[c]=bin[c]|bin2[c];
			printf(": %d ",bin_dec(bin3));
			printf("(");
			for(c=0;c<32;c++)
			printf("%d",bin3[c]);
			printf(")");
			break;		
		case 4:
			
			printf("Insira outro numero : ");
			scanf("%d",&nd2);  getchar();
			printf("%d",nd1);
			dec_bin(nd1,bin);
			printf("XOR %d",nd2);
			dec_bin(nd2,bin2);
			for(c=0;c<32;c++)
			bin3[c]=bin[c]^bin2[c];
			printf(": %d ",bin_dec(bin3));
			printf("(");
			for(c=0;c<32;c++)
			printf("%d",bin3[c]);
			printf(")");
			break;			
		case 5:
			printf("Insir deslocamento: ");
			scanf("%d",&nd2);  getchar();
			printf("%d",nd1);
			dec_bin(nd1,bin);
			printf(">> %d",nd2);
			dec_bin(nd2,bin2);
			for(c=0;c<32-nd2;c++)
			bin3[c+nd2]=bin[c]>>bin2[c];
			for(b=0;b<nd2;b++)
			bin3[b]=0;
			printf(": %d (",bin_dec(bin3));
			for(c=0;c<32;c++)
			printf("%d",bin3[c]);
			printf(")");
			break;			
		case 6:
			printf("Insir deslocamento: ");
			scanf("%d",&nd2);  getchar();
			printf("%d",nd1);
			dec_bin(nd1,bin);
			printf("<< %d",nd2);
			dec_bin(nd2,bin2);
			a=0;
			for(c=nd2;c<32;c++){
			bin3[a]=bin[c]<<bin2[c];
			a++;
		}
			for(c=a;c<32;c++)
			bin3[c]=0;
			printf(": %d (",bin_dec(bin3));
			for(c=0;c<32;c++)
			printf("%d",bin3[c]);
			printf(")");
			break;
    	default:
            printf("Opcao nao será valida\n");

	}
	return 0;
}