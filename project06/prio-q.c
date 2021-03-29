#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "prio-q.h"
#include "compare-name-lists.h"

/*
My implementation of a Prio_que is a singly-linked
linked list with a field for data, priority, and 
the next node in the list.
*/

/*
init initializes a new Prio_que to NULL for all pointers and
to 0 for its priority. It is the baseline for all new Prio_ques
and must be called after every new Prio_que is created.
*/
void init(Prio_que *const prio_q){
    if(prio_q == NULL){
        return;
    }

    (*prio_q).data = NULL;
    (*prio_q).prio = 0;
    (*prio_q).next = NULL;
}

/*
enqueue puts a new element into an existing Prio_que by
moving down the Prio_que and checking priorities and inserting
at the correct location. Additionally, the data in the new 
element is stored in the new_element array for reference.
*/
unsigned int enqueue(Prio_que *const prio_q, const char new_element[], unsigned int priority){
    Prio_que *const new = malloc(sizeof(Prio_que));
    char *newer_element = malloc((strlen(new_element) + 1) * sizeof(char));
    Prio_que *curr = prio_q;

    if(prio_q == NULL || new_element == NULL){
        return 0;
    }

    strcpy(newer_element, new_element);
    (*new).data = newer_element;
    (*new).prio = priority;
    (*new).next = NULL;

    while((*curr).next != NULL){
        if(priority > (*curr).next->prio){
            (*new).next = (*curr).next;
            (*curr).next = new;
            return 1;
        }else if(priority == (*curr).next->prio){
            return 0;
        }else{
            curr = (*curr).next;
        }
    }

    (*curr).next = new;
    return 1;
}

/*
is_empty checks if the symbolic head node of the Prio_que
is the only node in the Prio_que and returns 1 if it is,
and it returns 0 if it is not.
*/
unsigned int is_empty(const Prio_que prio_q){
    if(prio_q.next == NULL){
        return 1;
    }

    return 0;
}

/*
size moves through the Prio_que from node to node counting
each one except for the symbolic head node, then it returns
that count.
*/
unsigned int size(const Prio_que prio_q){
    unsigned int length = 0;
    Prio_que curr = prio_q;

    while(curr.next != NULL){
        length++;
        curr = *curr.next;
    }

    return length;
}

/*
peek returns the data of the first non-symbolic node
in the Prio_que without modifying the queue in any
form. If the queue is empty, then NULL is returned.
*/
char *peek(Prio_que prio_q){
    if(is_empty(prio_q)){
        return NULL;
    }else{
        char *deep = malloc((strlen(prio_q.next->data) + 1) * sizeof(char));
        strcpy(deep, prio_q.next->data);
        return deep;
    }
}

/*
dequeue also returns the data of the first non-symbolic
node, however it also removes that node from the Prio_que.
If the Prio_que is empty or the pointer points to NULL,
NULL is returned.
*/
char *dequeue(Prio_que *const prio_q){
    Prio_que *top;
    if(prio_q == NULL || is_empty(*prio_q)){
        return NULL;
    }

    top = (*prio_q).next;
    (*prio_q).next = (*prio_q).next->next;
    (*top).next = NULL;

    return (*top).data;
}

/*
get_all_elements returns an array of strings representative
of all the data in the Prio_que in priority order. The Prio_que
itself is not modified in any way. The array is terminated with NULL
to make iterations through the returned double-pointer easier.
*/
char **get_all_elements(Prio_que prio_q){
    char **elements = malloc(size(prio_q) * sizeof(char*) + sizeof(char*));
    Prio_que *curr = &prio_q;
    int i;

    if(is_empty(prio_q)){
        return NULL;
    }

    for(i = 0; i < size(prio_q); i++){
        elements[i] = malloc((strlen((*curr).next->data) + 1) * sizeof(char));
        strcpy(elements[i], (*curr).next->data);
        curr = (*curr).next;
    }

    return elements;
}
