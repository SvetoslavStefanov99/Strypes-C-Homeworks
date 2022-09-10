
#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
#include "zad3Funcs.h"

void push(node_t** head, u_int64_t value){
    node_t* newNode = malloc(sizeof(node_t));
    newNode->data = value; //(*newNode).data
    newNode->next = *head;
    *head = newNode;
}

void printList(node_t* head){
    node_t* current = head;
    while (current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

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

u_int64_t ones(node_t* head){
    u_int64_t one = 0;
    node_t* current = head;
    while (current != NULL) {
        for (int i = 0; i < 64; i++){
            if (!!(current-> data & (1ull << (i)))){
                one++;
            }
        }
        current = current->next;
    }
    return one;
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