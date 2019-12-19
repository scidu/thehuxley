#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define  MAX_SIZE 1000000
#include <limits.h>
typedef struct adj_list
{
    int item;
    struct adj_list *next;    
}adj_list;
typedef struct grafo
{
    adj_list *vertices[MAX_SIZE];
    int visited[MAX_SIZE];
}grafo;
grafo *create_grafo()
{
    grafo *new_grafo = (grafo*)malloc(sizeof(grafo));
    int i;
    for(i=0;i <= MAX_SIZE - 1;i++)
    {
        new_grafo->vertices[i]= NULL;
        new_grafo->visited[i] = 0;
    }
    return new_grafo;
}
adj_list *create_adj_list(int item)
{
    adj_list *new_adj_list = (adj_list*)malloc(sizeof(adj_list));
    new_adj_list->item = item;
    new_adj_list -> next = NULL;
    return new_adj_list;
}
adj_list *add_crescente(adj_list *vertex,adj_list *list)
{
    if(list == NULL || list-> item > vertex->item)
    {
        vertex -> next = list;
        return vertex;
    }
    else
    {
       adj_list *aux1;
       adj_list *aux2;
       aux1 = list;
       aux2 = list-> next;
       while(aux2 != NULL && aux2->item < vertex->item)
       {
           aux1 = aux2;
           aux2 = aux2->next;
       } 
       aux1->next = vertex;
       vertex->next = aux2;
       return list;
    }
    
}
void add_edge(grafo *graph,int vertex1,int vertex2)
{
    adj_list *vertex = create_adj_list(vertex2);
    graph->vertices[vertex1] = add_crescente(vertex,graph->vertices[vertex1]);
    vertex = create_adj_list(vertex1);
    graph->vertices[vertex2] = add_crescente(vertex,graph->vertices[vertex2]);
}
void add_end(adj_list *lista,adj_list *lista2)
{
    while(lista->next != NULL)
    {
        lista = lista->next;
    }
    lista->next =lista2;
}
adj_list *dfs(grafo *graph,int item)
{
    if(graph->visited[item])return NULL;
    adj_list *aux = create_adj_list(item);
    graph->visited[item] = 1;
    adj_list *adj_list = graph ->vertices[item];
    while(adj_list != NULL)
    {
        if(!graph->visited[adj_list->item])
        {
            add_end(aux,dfs(graph,adj_list->item));
        }
        adj_list = adj_list->next;
    }
    return aux;
}
adj_list *achar_maior(adj_list *lista,adj_list *aux, int *quant)
{
    int i,j;
    i=0;
    j=0;
    adj_list *aux2 = lista;
    while(aux2 != NULL)
    {
        aux2 = aux2->next;
        i++;
    }
    aux2 = aux;
    while (aux2 != NULL)
    {
        aux2 = aux2 ->next ;
        j++;
    }
    if(j>1){
        (*quant)++;
    }
    if(j>i)
    {
        return aux;
    }
    return lista;
    
}
void printar_lista(adj_list *list)
{
    while(list!=NULL)
    {
        printf("%d",list->item);
        if(list->next != NULL)
        {
            printf(" ");
        }
        list = list->next;
    }
}
int main()
{
    int i,planeta1,planeta2,quant= 0, nplanetas, nrotas;
    scanf("%d %d", &nrotas, &nplanetas);
    grafo *graph = create_grafo();
    for(i=0; i<nrotas; i++)
    {
        scanf("%d%d",&planeta1,&planeta2);
        if(planeta1 <= nplanetas && planeta2 <= nplanetas)
        {
            add_edge(graph,planeta1,planeta2);
        }
    }
    adj_list *lista = NULL;
    adj_list *aux = NULL;
    
    for(i=1;i<= nplanetas;i++)
    {
        if(!graph->visited[i])
        {
            aux = dfs(graph,i);
            lista = achar_maior(lista,aux, &quant);
        }
    }
    printf("%d\n",quant);
    printar_lista(lista);

}

