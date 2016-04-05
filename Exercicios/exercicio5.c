/*
    5)
    Utilizando uma pilha resolver o exercício a seguir: 
    Dada uma sequência contendo N (N >0) números reais, imprimi-la na ordem inversa.
*/

void inverter(Stack *pilha){
    float vetor[];
    int i = 0;
    //Enquanto a pilha conter dados 
    while(!isEmpty(&pilha)){
        //Retira o último valor da pilha e adiciona na primeira posição do vetor
        vetor[i] = pop(&pilha);
    }
    
    //Quantidade de elementos no vetor
    int size = sizeof(vetor) / sizeof(vetor[0]);
    int i = 0;
    //Para cada elemento contido no vetor
    for( i ; i < size ; i++){
        //Adicionando o primeiro elemento do vetor na pilha 
        push(&pilha , vetor[i]);
    }

}
