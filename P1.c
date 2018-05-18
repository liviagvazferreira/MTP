#include <stdio.h>

int main(){
	int estado = 0, i = 0;
    char str[256];
    printf("Digite um binario: \n");
    scanf("%s", str);
    while(str[i] != '\0'){
        if (estado == 0 && str[i] == '0'){
    estado = 0;
    i++;
	}
    if (estado == 0 && str[i] == '1'){
    estado = 1;
    i++;
    }
    if (estado == 1 && str[i] == '0'){
    est = 2;
    i++;
    }
    if (estado == 1 && str[i] == '1'){
    est = 0;
    i++;
    }
    if (estado == 2 && str[i] == '0'){
    est = 1;
    i++;
    }
    if (estado == 2 && str[i] == '1'){
    est = 2;
    i++;
    }
	}
	if (estado == 0){
	printf("\nO numero em binario sera: %s", &str);
	printf("\nO numero sera multiplo de 3.");
	}
	else{
	printf("\nO numero em binario sera: %s", &str);
	printf("\nO numero nao sera multiplo de 3.");
	}
	return 0;
	
}