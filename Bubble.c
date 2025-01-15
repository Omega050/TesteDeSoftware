#define ponta_de_prova(num) if(++printed_nodes % 10) fprintf(path," %2d ",num);\
else fprintf(path," %2d\n",num);
#include <stdio.h>
#define N 100

FILE *path;
static int printed_nodes = 0;

void troca(int *a, int *b) {
    int aux;
    //ponta_de_prova(8); // Ponto de prova para a troca
    aux = *a;
    *a = *b;
    *b = aux;
}

// v : vetor; n : tamanho do vetor
void bubbleSort(int *v, int n) {
    int i, fim, k;

    for (fim = (n-1); (fim > 0); --fim) {
        ponta_de_prova(5); // Ponto de prova antes do laço externo

        for (i = 0; (i < fim); ++i) {
            ponta_de_prova(6); // Ponto de prova do laço
            ponta_de_prova(7); // Ponto de prova do if

            if (v[i] > v[i+1]) {
                ponta_de_prova(8); // Ponto de prova na condição verdadeira
                troca(&v[i], &v[i+1]);
            }
            ponta_de_prova(9);
        }

        for (k = 0; k < n-1; k++)
            ponta_de_prova(10); // Ponto de prova ao final do laço
            ponta_de_prova(11); // Ponto de prova interno ao laço
            printf("%d ", v[k]);
        ponta_de_prova(12);
        printf("%d\n", v[k]);
    }
}

int main() {
    path = fopen("path.tes", "w");
    if (path == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    int n, i, Vetor[N];
    printf("Entre com o valor do n (tamanho do vetor, máximo %d):\n", N);
    scanf("%d", &n);
    printf("Entre com os valores do vetor a ser ordenado:\n");
    ponta_de_prova(1); // Ponto de prova ao início da execução

    for (i = 0; i < n; i++) {
        ponta_de_prova(2); // Ponto de prova do laço
        scanf("%d", &Vetor[i]); 
        ponta_de_prova(3);
    }

    ponta_de_prova(4); // Antes de chamar o bubbleSort
    bubbleSort(Vetor, n);

    printf("O resultado do vetor ordenado eh:\n");
    ponta_de_prova(13); // Após a ordenação
    for (i = 0; i < n-1; i++) {
        ponta_de_prova(14); // Ponta de prova do laço
        ponta_de_prova(15); // Ponta de prova interno
        printf("%d ", Vetor[i]);
    }
    ponta_de_prova(16); // Após a última impressão
    printf("%d\n", Vetor[i]);

    fclose(path);
    return 0;
}
