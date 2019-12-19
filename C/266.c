#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int item;
    struct node *next;
} node;

node *add(node *head, int item)
{
    node *novo = (node *)malloc(sizeof(node));
    novo->item = item;
    novo->next = NULL;
    if (head == NULL)
    {
        return novo;
    }
    node *aux = head;
    while (aux->next != NULL)
    {
        aux = aux->next;
    }
    aux->next = novo;
    return head;
}
int zeros(node *head)
{
    int cont = 0;
    while (head != NULL && head->item == '0')
    {
        cont++;
        head = head->next;
    }
    return cont;
}
int *maiorsequencia(node *head)
{
    int inicial = 0;
    int final = 0;
    int sequencia = 0;
    int i;
    for (i = 0; head != NULL; i++)
    {
        sequencia = zeros(head);
        if (final - inicial <= sequencia)
        {
            inicial = i;
            final = i + sequencia;
        }
        head = head->next;
    }
    int *resultado = malloc(2 * (sizeof(int)));
    resultado[0] = inicial;
    resultado[1] = final;
    return resultado;
}
int main()
{
    node *head = NULL;
    char item[2000];
    int *resultado;
    while (scanf("%s ", item))
    {
        if (strlen(item) == 1 && item[0] == '0')
            break;

        for (i = 0; i < strlen(item); i++)
        {
            head = add(head, item[i]);
        }
        resultado = maiorsequencia(head);
        printf("%d %d",resultado[0],resultado[1]);
    }
}