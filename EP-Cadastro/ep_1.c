#include <stdio.h>
#include <stdlib.h>

typedef struct produto{
	
	int codigo;
	int quantidade;
	float preco;
	char nome[50];
	
} PRODUTO;

cadastrarProdutos(PRODUTO *produtos , int tamanho){
	int i = 0;
	for(i ; i < tamanho ; i++){
		printf("digite o codigo do produto: ");
		scanf("%d" , &produtos[i].codigo);
		printf("digite a quantidade do produto: ");
		scanf("%d" , &produtos[i].quantidade);
		printf("digite o preco do produto: ");
		scanf("%f" , &produtos[i].preco);
		printf("digite o nome do produto: ");
		scanf("%s" , produtos[i].nome);
		fflush(stdin);
		printf("\n");
	}
}

exibeProdutos(PRODUTO *produtos , int tamanho){
	int i = 0;
	for(i ; i < tamanho ; i++){
		printf("\n-------------------------------------------------");
		printf("\n\tCODIGO: %d" , produtos[i].codigo);
		printf("\n\tNOME: %s" , produtos[i].nome);
		printf("\n\tQUANTIDADE: %d" , produtos[i].quantidade);
		printf("\n\tPRECO: %f" , produtos[i].preco);
		printf("\n-------------------------------------------------\n");
	}
}

PRODUTO procurarProduto(PRODUTO *produtos , int tamanho , int codigo){
	int i = 0;

	for(i ; i < tamanho ; i++){
		if(produtos[i].codigo == codigo){
			
			printf("PRODUTO ENCONTRADO: \n");
			printf("\n-------------------------------------------------");
			printf("\n\tCODIGO: %d" , produtos[i].codigo);
			printf("\n\tNOME: %s" , produtos[i].nome);
			printf("\n\tQUANTIDADE: %d" , produtos[i].quantidade);
			printf("\n\tPRECO: %f" , produtos[i].preco);
			printf("\n-------------------------------------------------\n");
			
			return produtos[i];
		}else{
			if(i == (tamanho-1)){
				printf("\nPRODUTO NAO ENCONTRADO!\n");
			}
		}
	}

}

alterarProduto(PRODUTO *produtos , int tamanho){
	int i = 0;
	int codigo = 0;
	printf("Digite o codigo do produto: ");
	scanf("%d" , &codigo);

	PRODUTO produto = procurarProduto(produtos , tamanho , codigo);	

	// if(!empty(produto)){
		printf("\n Digite um novo codigo para o produto: ");
		scanf("%d" , &produto.codigo);
		printf("\n Digite um novo nome para o produto: ");
		scanf("%s" , produto.nome);
		printf("\n Digite a nova quantidade do produto: ");
		scanf("%d" , &produto.quantidade);
		printf("\n Digite um novo preco para o produto: ");
		scanf("%f" , &produto.preco);

 
		
		printf("\n PROTUDO ALTERADO!\n");
	// }

}

escreverArquivo(PRODUTO *produtos , int tamanho){
	FILE *arq;
	int i = 0;
	arq = fopen("/home/vinicius/arquivo.txt" , "w");
	
	if(!arq){
		printf("Erro ao abrir arquivo!");
		exit(0);
	}

	for(i ; i < tamanho ; i++){
		fprintf(arq , "Codigo: %d" ,produtos[i].codigo);
		fprintf(arq , "\nNome: %s" ,produtos[i].nome);
		fprintf(arq , "\nQuantidade: %d" ,produtos[i].quantidade);
		fprintf(arq , "\nPreco: %f" ,produtos[i].preco);
	}

}

main(){

	int tamanho = 0;
	printf("Digite a quantidade de produtos que serao cadastrados: ");
	scanf("%d" , &tamanho);

	PRODUTO produtos;

	cadastrarProdutos(&produtos , tamanho);
	escreverArquivo(&produtos , tamanho);
	// alterarProduto(&produtos , tamanho);
	// exibeProdutos(&produtos , tamanho);
	// procurarProduto(&produtos , tamanho);
	// exibeProdutos(&produtos , tamanho);


}
