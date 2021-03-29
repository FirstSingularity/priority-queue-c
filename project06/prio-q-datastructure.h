/*
My implementation of a Prio_que is a singly-linked
linked list with a field for data, priority, and 
the next node in the list.
*/

typedef struct prio_que{
    char *data;
    unsigned int prio;
    struct prio_que *next;
}Prio_que;
