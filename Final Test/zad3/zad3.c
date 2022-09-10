#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdint.h>

#define COUNT 5

typedef struct node
{
    int data;
    struct node* next;
}node_t;



u_int64_t* maxNum(node_t* head){
    node_t* current = head;
    static u_int64_t max=0ull;
    while (current != NULL){
        if(max<current->data){
            max=current->data;
        }
        current = current->next;
    }
     return &max;
}

void printList(node_t* head){
    node_t* current = head;
    while (current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

void listFree(node_t** list){
    node_t *current = *list, *prev;
    while (current){
        prev = current;
        current = current->next;
        free(prev);
    }
    *list = NULL;
}

void push(node_t** head, u_int64_t value){
    node_t* newNode = malloc(sizeof(node_t));
    newNode->data = value; //(*newNode).data
    newNode->next = *head;
    *head = newNode;
}

u_int64_t ones(node_t* head)
{
    u_int64_t result = 0;
    node_t* current = head;
    while (current != NULL) {
        for (int i = 0; i < 64; i++)
        {
            if (!!(current-> data & (1ull << (i))))
            {
                result++;
            }
        }
        current = current->next;
    }
    return result;
}


int main(){
    srand(time(NULL)); 
    node_t* head=NULL;
    for(int i=0;i<COUNT;i++){
        push(&head,(u_int64_t)rand());
    }
    printList(head);
    printf("Pointer to the biggest number:%p\nIts value:%lu\n",maxNum(head),*(maxNum(head)));
    printf("Bits that are ones:%lu\n",ones(head));
    listFree(&head);
    return 0;
}