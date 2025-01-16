#define ponta_de_prova(num) if(++printed_nodes % 10) fprintf(path," %2d ",num);\
else fprintf(path," %2d\n",num);
#include <stdio.h>
#define N 100

void troca(int *a, int *b) {
/*8*/int aux;
/*8*/  aux = *a;
/*8*/  *a = *b;
/*8*/  *b = aux;
}


// v : vetor; n : tamanho do vetor
void bubbleSort(int *v, int n) {
 /*4*/ int i,fim, k;

 /*5*/ for (fim = (n-1); (fim > 0); --fim) {
 /*6*/    for (i = 0; (i < fim); ++i) {
 /*7*/       if (v[i] > v[i+1]) 
 /*8*/         troca(&v[i], &v[i+1]);
     }
 /*9*/   for(k=0;k<n-1; k++)
 /*10*/         printf("%d ",v[k]);
 /*11*/       printf("%d\n",v[k]);
  }
}

int main() {
    FILE * path = fopen("path.tes","w");
    static int printed_nodes = 0;
  /*1*/ int n, i, Vetor[N];
  /*1*/ printf("Entre com o valor do n tamanho do vetor\n");
  /*1*/ scanf("%d", &n);
  /*1*/ printf("Entre com os valores do vetor a ser ordenado\n");
  ponta_de_prova(1);
  /*2*/ for(i=0; i<n;i++)
  ponta_de_prova(2);
  /*3*/  scanf("%d",&Vetor[i]);
  /*4*/ bubbleSort(Vetor,n);
  /*12*/ printf("O resultado do vetor ordenado eh:\n");
  /*13*/ for(i=0;i<n-1;i++)
  /*14*/   printf("%d ",Vetor[i]);
  /*15*/ printf("%d\n",Vetor[i]);
 return 0;
 }