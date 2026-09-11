#include "fila.h"

Fila inicializarFila()
{
    Fila f;
    f.fim = 0; // zera o fim pq ta vazia ainda
    return f;
}

Fila inserirFila(Fila f, int valor)
{
    if (f.fim < 5)
    {
        f.dados[f.fim] = valor;
        f.fim++;
        printf("Fila: inseriu %d\n", valor);
    }
    else
    {
        printf("\nFila: erro - fila cheia\n");
    }
    return f;
}

Fila removerFila(Fila f) {
    if (f.fim > 0) {
        printf("\nFila: Removeu %d\n", f.dados[0]);
        // puxa tudo pra esquerda pq nao tem ponteiro
        for (int i = 0; i < f.fim - 1; i++) {
            f.dados[i] = f.dados[i + 1];
        }
        f.fim--;
    } else {
        printf("\nFila: ERRO - Fila vazia!\n");
    }
    return f;
}
