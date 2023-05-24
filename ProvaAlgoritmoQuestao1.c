

/*Faça um programa que receba como dados de entrada,
o valor de 10 vendas onde trabalham 2 vendedores e mostre como resultado:
 
a) Qual o vendedor que fez mais vendas;
b) A lista dos valores vendidos por cada vendedor.   
c) A Media das vendas efetuadas;*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



struct vendasEmpregados{
	float valorPorVenda[10];
	float totalValorVendas;
	int qntVendas;
}empregado1, empregado2;
	
	
int main(){
	
	setlocale (LC_ALL, "portuguese");
	system("color 75");
	system("cls");
	
	
	const int QNTVENDAS = 10;	
	int i = 0;
	int codEmpregado[10]; 
	float precoProduto;
	
	
	for(i=0; i<10; i++){
		
		printf("\nDigite o número do empregado que fez a %dª venda (João = 1 e Gabriel = 2): ", i + 1);
		scanf("%d", &codEmpregado[i]);
		

		
		printf("\nDigite o valor total da %dª venda: ", i + 1);
		scanf("%f", &precoProduto);

		if(codEmpregado[i] == 1 ){
			
			empregado1.totalValorVendas += precoProduto;	
			empregado1.qntVendas++;	
			
			empregado1.valorPorVenda[i] = precoProduto;	
		}
		else if(codEmpregado[i] == 2 ){
			
			empregado2.totalValorVendas += precoProduto;
			empregado2.qntVendas++;	
			
			empregado2.valorPorVenda[i] = precoProduto;	
		}
		else{
			system("cls");
			printf("\nCódigo invalido\n");
			i--;
			getch();
		}
		system("cls");			
	}
	
	
	printf("Pressione ""ENTER"" para exibir os resultados");
	getch();
	system("cls");
	

	//Apresenta qual vendedor fez mais vendas
	if(empregado1.qntVendas > empregado2.qntVendas){
	
		printf("\nJoão realizou mais vendas que Gabriel!!!");
	}
	else if(empregado2.qntVendas > empregado1.qntVendas){
	
		printf("\nGabriel realizou mais vendas que João!!!");
	}
	else{

		printf("\nGabriel e João tiveram o mesmo número de vendas");
	}
	
	
	//Apresenta lista de valor vendidos por cada vendedor
	printf("\n\nValores por produto vendido pelo João: ");
	for(i=0; i<10; i++){
		if(empregado1.valorPorVenda[i] != 0){
		
			printf("\nR$%.2f", empregado1.valorPorVenda[i]);
		} 
	}
	
		printf("\n\nValores por produto vendido pelo Gabriel: ");
	for(i=0; i<10; i++){
		if(empregado2.valorPorVenda[i] != 0){
		
			printf("\nR$%.2f", empregado2.valorPorVenda[i]);
		} 
	}
	
	
	//Apresenta Média de vendas
	printf("\n\nMédia total dos valores vendidos por João e Gabriel é: R$%.2f", (empregado1.totalValorVendas + empregado2.totalValorVendas)/QNTVENDAS  );
	
	printf("\n\nMédia do valor das vendas de Joao: R$%.2f", empregado1.totalValorVendas / empregado1.qntVendas);
		
	printf("\n\nMédia do valor das vendas de Gabriel: R$%.2f", empregado2.totalValorVendas / empregado2.qntVendas);
	
	
getch();
return 0;
}	
