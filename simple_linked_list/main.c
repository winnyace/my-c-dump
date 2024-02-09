#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node* next;
} NODE;

typedef struct list
{
    NODE *head, *tail;
} LIST;

void init_list(LIST* l)
{
    l->head = NULL;
    l->tail = NULL;
}

NODE* new_node(int n)
{
    NODE* new = malloc(sizeof(NODE*));
    new->info = n;
    new->next = NULL;
    return new;
}

void push_back(LIST* l, int n)
{
    NODE* temp = new_node(n);
    if (l->head == NULL)
        l->head = temp;
    else
        l->tail->next = temp;
    l->tail = temp;
}

void print_list(LIST* l)
{
    NODE* crt = l->head;
    printf("{ ");
    while(crt) {
        printf("%d", crt->info);
        if (crt->next != NULL)
            printf(", ");
        crt = crt->next;
    }
    printf(" }\n");
}

void pop_back(LIST* l)
{
    if (l->head == l->tail) {
        fprintf(stderr, "List is empty.");
        return;
    }
    NODE* temp = l->head;
    while (temp->next->next)
        temp = temp->next;
    l->tail = temp;
    l->tail->next = NULL;
    free(temp->next);
}

int main()
{ 
    LIST *my_list = malloc(sizeof(LIST*));
    for (int i = 0; i < 5; i++)
        push_back(my_list, i);
    printf("Initial list: ");
    print_list(my_list);

    printf("List after removing the first element: ");
    pop_back(my_list);
    print_list(my_list);
    return 0;
}
