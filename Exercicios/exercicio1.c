/* 1) 
    Escrever uma função que receba como parâmetro uma pilha. 
    A função deve retornar o maior elemento da pilha. 
    A passagem deve ser por valor ou referência? */

maxElement(Stack *pilha){
    int maior;
    int aux;
    //Inicia a variavel do maior elemento com o último elemento da pilha e retira-o dela
    maior = pop(*pilha);

    //Enquanto a pilha conter dados
    while(!isEmpty(*pilha)){
        //O ultimo dado da pilha é passado para a variavel aux e retirado da pilha
        aux = pop(*pilha);
        //Se a variavel aux for maior que a variavel maior
        if(aux > maior){
            //O maior elemento é passado para a variável maior
            maior = aux;
        }
    }

    //Retorna o maior elemento
    return maior;

}