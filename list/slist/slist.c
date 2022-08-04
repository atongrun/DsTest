#include "slist.h"



void slist_init(L* pl)
{
    assert(pl);
    pl->data=0;
    pl->next=NULL;
}

void slist_destroy(L* pl)
{
    assert(pl);
    L* cur=pl;
    while(cur)
    {
        L* tmp=cur;
        cur=cur->next;
        free(tmp);
        tmp=NULL;
    }
}

L* create_newnode(sl_datatype x)
{
    L* newnode = (L*)malloc(sizeof(L));
    assert(newnode);
    newnode->next=NULL;
    newnode->data=x;
    return newnode;
}

void slist_push_back(L** pl, sl_datatype x)
{
    assert(pl);
    if(*pl==NULL)
    {
        *pl=create_newnode(x);
    }
    else
    {
        L* cur=*pl;
        while(cur->next)
        {
            cur=cur->next;
        }
        cur->next=create_newnode(x);
    }
}

void slist_print(L* pl)
{
    assert(pl);
    L* cur=pl;
    while(cur)
    {
        printf("%d ",cur->data);
        cur=cur->next;
    }
    printf("\n");
}


void slist_push_front(L**pl, sl_datatype x)
{
    assert(pl);
    if(*pl==NULL)
    {
        *pl=create_newnode(x);
    }
    else
    {
        L* newhead=create_newnode(x);
        newhead->next=*pl;
        *pl=newhead;
    }

}

void slist_pop_back(L** pl)
{
    assert(pl);
    assert(*pl);
    L* cur=*pl;
    while(cur->next)
    {
        cur=cur->next;
    }
    free(cur);
    cur=NULL;

}
