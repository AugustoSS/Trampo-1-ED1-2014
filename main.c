#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>

int main(){ setvbuf(stdout, NULL, _IONBF, 0);
	Lista n1, n2;
	Lista add; //recebe a lista vinda da adição, imprim e libera os nós da lista
	int escolha = 1, num;

	criaLista(&n1);
	criaLista(&n2);

	/*while(escolha){

		printf("\n 0 - sair / 1 - insere lista 1 / 2 - insere lista 2 / 3 - soma / 4 - subtrai / 5 - multiplica) \n");
		scanf("%d", &escolha);

		switch(escolha){
			case 1: printf("digite um digito\n");
					scanf("%d", &num);
					insereLista(&L_1, num);
					L_1.tam++;
					printLista(L_1);
				break;
			case 2: printf("digite um digito\n");
					scanf("%d", &num);
					insereLista(&L_2, num);
					L_2.tam++;
					printLista(L_2);
				break;
			case 3: add = soma(&L_1, &L_2);
					printLista(add);
					liberaLista(&add);
				break;
			case 4: subtrai(&L_1, &L_2);
				break;
			case 5: multiplica(&L_1, &L_2);
				break;
		}
	}*/
	
	
	/*O que será feito: primeiro, a escolha da quantidade de digitos pra cada numero (Lista 1 e Lista 2). Depois a inserção e, por último 
	as operações ocorrerão de maneira automática.*/
	
	//char que conterá o digito, que será convertido em um inteiro de 0 a 9 atrávés de operações algébricas.
	char digito;
	
	
	
	//quantidade de digitos que cada numero terá
	int quantDigito;
	
	//indices de repetição
	int i;
	
	printf("Insira a quantidade de digitos do primeiro número")
	scanf("%d", &quantDigito);
	
	//inserção dos digitos do número, separados por espaço
	while(i<=quantDigito){
		
		printf("digite um digito\n");
		scanf("%c", &digito);
		
		//serve para considerar apenas os digitos diferentes de espaço
		if(digito == "%[0-9]"){
			
				//conversão do char para inteiro de 0 a 9;	
				num = digito-48;		
				insereLista(&n1, num);
				n2.tam++;
				printLista(n1);
				i++;
		}
	}
	
	i=0;
	
	
	printf("Insira a quantidade de digitos do segundo número")
	scanf("%d", &quantDigito);
	
	//inserção dos digitos do número, separados por espaço
	
	
	while(i<=quantDigito){
		
		printf("digite um digito\n");
		scanf("%c", &digito);
		
		//serve para considerar apenas os digitos diferentes de espaço
		if(digito == "%[0-9]"){
			
				//conversão do char para inteiro de 0 a 9;	
				num = digito-48;		
				insereLista(&n2, num);
				n2.tam++;
				printLista(n2);
				i++;
		}
	}
	
	//realiza a soma e exibe o resultado
	add = soma(&n1, &n2);
	printLista(add);
	liberaLista(&add);
	
	//realiza a subtração e exibe o resultado
	 subtrai(&n1, &n2);
	
	

	//realiza a multiplicação e exibe o resultado
	multiplica(&n1, &n2);
	
	
	
	
	liberaLista(&n1);
	liberaLista(&n2);

	printf("BYE-BYE");

	return 0;
}
