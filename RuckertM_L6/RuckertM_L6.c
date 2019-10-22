#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int item;
    struct list * next;
}List;

int main()
{
    List *node3 = malloc(sizeof(List));
    node3->item = 3;
    node3->next = NULL;

    List *node2 = malloc(sizeof(List));
    node2->item = 2;
    node2->next = node3;

    List *list = malloc(sizeof(List));
    list->item = 1;
    list->next = node2;

    List **lpp = NULL;
    int i = 2;

    for(lpp = &list; (*lpp) != NULL; lpp = &(*lpp)->next)
    {
        if((*lpp)->item == i)
        {
            *lpp = (*lpp)->next;
            break;
        }
    }

    List * ptr = list;

    while(ptr != NULL)
    {
        printf("%d", ptr->item);
        ptr = ptr->next;
    }

    return 0;
}