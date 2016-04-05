/*
    6) 
    Implemente uma função chamada TPilha, que receba um vetor de inteiros com 15 elementos. Para cada um deles, como segue:
        -se o número for par, insira-o na pilha;
        -se o número lido for ímpar, retire um número da pilha;
        -Ao final, esvazie a pilha imprimindo os elementos.
*/

void TPilha(int vetor[]){
    
    Stack pilha;
    //Quantidade de elementos no vetor
    size = sizeof(vetor) / sizeof(vetor[0]);
    int i = 0;
    
    //Para cada elemento dentro do vetor
    for(i ; i < size ; i++){
        //Se o elemento for par (divisão por 2 igual a 0)
        if(vetor[i] % 2 == 0){
            //Adiciona na pilha o elemento par
            push(pilha , vetor[i]);
        }
        //Se o elemento for ímpar (divisão por 2 diferente de 0)
        else{
            //Retira da pilha um elemento
            pop(pilha);
        }
    }

    //Enquanto a pilha não for vazia
    while(!isEmpty(pilha)){
        //Imprime o último valor da pilha e retira-o
        printf("%d" , pop(pilha));
    }

} 
