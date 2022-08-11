#include "hdlist.h"


HDL* create_newnode(hdl_datatype x)
{

    HDL* phead=(HDL*)malloc(sizeof(HDL));
    if(phead==NULL)
    {
        perror("malloc failed!");
        exit(-1);
    }
    phead->data=x;
    phead->next=NULL;
    phead->prev=NULL;
    return phead;
}

HDL* hdl_init()
{
    HDL* phead=(HDL*)malloc(sizeof(HDL));
    phead->data=-1;
    phead->next=phead;
    phead->prev=phead;
    return phead;
}


void hdl_push_back(HDL* pl, hdl_datatype x)
{
    assert(pl);
    HDL* newnode=create_newnode(x);
    newnode->next=pl;
    newnode->prev=pl->prev;
    pl->prev->next=newnode;
    pl->prev=newnode;
}



void hdl_print(HDL* pl)
{
    assert(pl);
    HDL* cur=pl->next;
    while(cur!=pl)
    {
        printf("%d ",cur->data);
        cur=cur->next;
    }
    printf("\n");
}


void hdl_push_front(HDL* pl, hdl_datatype x)
{
    assert(pl);
    HDL* newnode = create_newnode(x);
    newnode->next=pl->next;
    pl->next->prev=newnode;
    newnode->prev=pl;
    pl->next=newnode;
}
