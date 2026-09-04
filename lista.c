#include "lista.h"

Lista inicializarLista()
{
    Lista l;
    l.qnt = 0;
    return l;
}

Lista inserirLista(Lista l, int valor)
{
    if (l.qnt < 5)
    {
        l.dados[l.qnt] = valor;
        l.qnt++;
        printf("inseriu %d\n", valor);
    }
    else
    {
        printf("\nerro lista cheia \n");
    }
    return l;
}

Lista removerLista(Lista l, int valor)
{
    int i, pos = -1;
    for (i = 0; i < l.qnt; i++)
    {
        if (l.dados[i] == valor)
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        printf("lista : removeu %d da pos %d\n", valor, pos);
        for (i = pos; i < l.qnt - 1; i++)
        {
            l.dados[i] = l.dados[i + 1];
        }
        l.qnt--;
    }else{
        if(l.qnt == 0){
            printf("lista vazia\n");
        }else{
            printf("valor nao encontrado\n");
        }
    }
    return l;
}