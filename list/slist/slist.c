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
    if(pl==NULL)
    {
        printf("NULL\n");
    }
    else
    {
        L* cur=pl;
        while(cur)
        {
           printf("%d ",cur->data);
           cur=cur->next;
        }
         printf("\n");
    }
}


void slist_push_front(L**pl, sl_datatype x)
{
    //复用insert
    slist_insert(pl, NULL, x);
    
    //if(*pl==NULL)
    //{
    //    *pl=create_newnode(x);
    //}
    //else
    //{
    //    L* newhead=create_newnode(x);
    //    newhead->next=*pl;
    //    *pl=newhead;
    //}

}

void slist_pop_back(L** pl)
{
    assert(pl);
    assert(*pl);
    if((*pl)->next==NULL)
    {
        free(*pl);
        *pl=NULL;
        return;
    }

    L* cur=*pl;
    while(cur->next->next)
    {
        cur=cur->next;
    }
    free(cur->next);
    cur->next=NULL;

}



void slist_pop_front(L** pl)
{
    assert(pl&&*pl);
    L* next=(*pl)->next;
    free(*pl);
    *pl=next;
}


L* slist_search(L* pl, sl_datatype x)
{
    //不存在返回NULL,存在返回
    assert(pl);
    L* cur=pl;
    while(cur)
    {
        if(cur->data==x)
        {
            return cur;
        }
        cur=cur->next;
    }
    return NULL;
}

//在pis位置之后插入节点
void slist_insert(L** pl, L* pos, sl_datatype x)
{
    assert(pl);
    //如果链表为空，pos传入NULL，创建节点x
    if(*pl==NULL)
    {
        *pl  = create_newnode(x);    
    }
    else
    {
        //情况1、如果pos为NULL就是头插
        if(pos==NULL)
        {
            L* newnode=create_newnode(x);
            newnode->next=(*pl);
            *pl=newnode;
        }
        else
        {
             //在pos之后插入
             L* newnode=create_newnode(x);
             newnode->next=pos->next;
             pos->next=newnode;
        }
    }
}
