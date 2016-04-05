/* 
    3) 
    Escreva uma função que preencha uma pilha passada como parâmetro com os 
    elementos de um vetor passado como parâmetro
*/

void populate(Stack pilha , int idades[]){
    //Quantidade de elementos no vetor
    int size = sizeof(idades) / sizeof(idades[0]);
    int i = 0;
    //Para cada elemento no vetor
    for(i ; i < size ; i++){
        //Adiciona o valor do elemento na pilha
        push(pilha , idades[i]);
    }
}