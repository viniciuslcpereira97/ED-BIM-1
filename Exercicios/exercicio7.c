/*
    7) 
    Escreva uma função chamada TPilha2 que recebe como parâmetro 2 pilhas (N e P) e um vetor de inteiros. Para cada um:
        -se positivo, inserir na pilha P;
        -se negativo, inserir na pilha N;
        -se zero, retirar um elemento de cada pilha.
*/

void TPilha2(Stack *N , Stack *P , int vetor[]){
    //Quantidade de elementos no vetor
    int size = sizeof(vetor) / sizeof(vetor[0]);
    int i = 0;
    //para cada elemento no vetor
    for(i ; i < size ; i++){
        //se o elemento for maior que 0 ele será adicionado na pilha P
        if(vetor[i] > 0){
            push(&P , vetor[i]);
        //se o elemento for igual a 0 as duas pilhas terão um dado retirado
        }else if(vetor[i] == 0){
            pop($P);
            pop($N);
        //se o elemento for menor que 0 ele será adicionado na pilha N
        }else{
            push(&N , vetor[i]);
        }
    }
}


