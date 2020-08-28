#include <stdio.h>


void calculadora(float x , char op, float y){
	switch(op){
		case '+':
			printf("%.2f\n\n", x + y);
			break;
			case '-':
				printf("%.2f\n\n", x - y);
				break;
				case'*':
					printf("%.2f\n\n", x * y);
					break;
					case'/':
						if(y!=0)
						printf("%.2f\n\n", x / y);
						else
						printf("Nao existe divisao por 0\n\n");
						break;
						default:
							if(x != 0 && op != '0' && y != 0)
							printf("\nOperador invalido !!!");
							break;
	}
	} 
int 	main(){
		float n1,n2;
		char op;
		printf("=========================================");
		printf("\n\n");
		printf("Digite o operador desejado\n");
		printf("[+] - SOMA\n");
		printf("[-] - SUBTRACAO\n");
		printf("[*] - MULTIPLICACAO\n");
		printf("[/] - DIVISAO\n");
		printf("[0] - SAIR\n");
		printf("\n\n");
		scanf("%f", &n1);
            scanf(" %c",&op);
            scanf("%f", &n2);
             printf("Calculando: %.2f %c %.2f = ", n1,op,n2);
		calculadora(n1,op,n2);

}
