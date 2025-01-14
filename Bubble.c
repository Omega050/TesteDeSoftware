#include <stdio.h>

#define ponta_de_prova(num) if(++printed_nodes % 10) fprintf(path," %2d ",num);\
else fprintf(path," %2d\n",num);

int w = 1;

void main() {
    FILE *path = fopen("path.tes", "w");
    static int printed_nodes = 0;
    ponta_de_prova(1);

    int z, x, y;
    ponta_de_prova(1);
    printf("Entre com os valores de x e y");
    scanf("%d %d", &x, &y);

    if (x < 10) {
        ponta_de_prova(2);
        z = 5;
    } else {
        ponta_de_prova(3);
        z = 20;
    }

    ponta_de_prova(4);
    while (y > 10) {
        ponta_de_prova(4);
        ponta_de_prova(5);
        z = z + x + y;
        y -= 1;
        x = z;
    }

    ponta_de_prova(4);
    ponta_de_prova(6);

    if (x > y) {
        ponta_de_prova(7);
        printf("%d \n", z);
    }

    ponta_de_prova(8);
    printf("%d - %d  - %d", x, y, w);
    fclose(path);
}