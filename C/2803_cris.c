#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct binary_tree
{
    int item;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree;

binary_tree *create_binary_tree(int item)
{
    binary_tree *new_binary_tree = (binary_tree *)malloc(sizeof(binary_tree));
    new_binary_tree->item = item;
    new_binary_tree->left = NULL;
    new_binary_tree->right = NULL;
    return new_binary_tree;
}

binary_tree *criando()
{
    char *arvore = malloc(sizeof(char) * 10);
    int i = 1;
    scanf("%c", &arvore[0]);
    while (arvore[0] == ' ')
    {
        scanf("%c", &arvore[0]);
    }
    if (arvore[0] == '(')
    {
        scanf("%c", &arvore[0]);
        while (arvore[0] == ' ')
        {
            scanf("%c", &arvore[0]);
        }
    }
    if (arvore[0] == ')')
    {
        return NULL;
    }
    scanf("%c", &arvore[i]);
    while (arvore[i] != '(')
    {
        if (arvore[i] != ' ')
        {
            i++;
        }
        scanf("%c", &arvore[i]);
    }
    arvore[i] = '\0';
    binary_tree *node = create_binary_tree(atoi(arvore));
    node->left = criando();
    node->right = criando();
    getchar();
    return node;
}
void concatenar(binary_tree *arvore, binary_tree *aux)
{
    if (arvore == NULL)
    {
        return;
    }
    if (arvore->item == aux->item)
    {
        arvore->left = aux->left;
        arvore->right = aux->right;
    }
    else
    {
        concatenar(arvore->left, aux);
        concatenar(arvore->right, aux);
    }
}
void print_preordem(binary_tree *arvore)
{
    printf("(");
    if (arvore != NULL)
    {
        printf("%d", arvore->item);
        print_preordem(arvore->left);
        print_preordem(arvore->right);
    }
    printf(")");
}
int main()
{
    binary_tree *arvore;
    binary_tree *aux;
    arvore = criando();

    getchar();
    if (arvore != NULL)
    {
        aux = criando();
        while (aux != NULL)
        {
            getchar();
            concatenar(arvore, aux);
            aux = criando();
        }
    }
    print_preordem(arvore);
}