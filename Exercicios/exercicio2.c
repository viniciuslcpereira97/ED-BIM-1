/*  2)
    Escreva uma função que receba como parâmetro duas pilhas e verifique se elas são iguais. 
    Duas pilhas são iguais se possuem os mesmos elementos, na mesma ordem. */

compararPilhas(Stack *pilha1 , Stack *pilha2){
    //Quantidade de elementos na pilha1
    int pilha1Size = sizeof(*pilha1)/sizeof(*pilha1[0]); 
    //Quantidade de elementos na pilha2
    int pilha2Size = sizeof(*pilha2)/sizeof(*pilha2[0]);

    //Compara o tamanho das duas pilhas 
    if(pilha1Size == pilha2Size){
        //Enquanto a pilha conter dados
        while(!isEmpty(pilha1Size)){
            //Se o último dado de cada pilha for diferente, as pilhas são diferentes
            if(pop(pilha1) != pop(pilha2)){
                printf("As pilhas sao diferentes!")
                exit(0);
            }
        }
        //Se não as pilhas são iguais
        printf("As pilhas sao iguais!");
    }
    //Se os tamanhos das duas pilhas forem diferentes, as pilhas são diferentes
    else{
        printf("As pilhas sao diferentes!");
    }
}