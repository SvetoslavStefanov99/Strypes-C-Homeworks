#ifndef ZAD3_FUNCS_H
#define ZAD3_FUNCS_H

typedef struct node
{
    int data;
    struct node* next;
}node_t;

void push(node_t** head, u_int64_t value);
void printList(node_t* head);
u_int64_t* maxNum(node_t* head);
u_int64_t ones(node_t* head);
void listFree(node_t** list);

#endif