#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int sl_datatype;

typedef struct SList
{
    struct SList* next;
    sl_datatype data;

}L;


void slist_init(L* pl);
void slist_destroy(L* pl);
void slist_push_back(L** pl, sl_datatype x);
void slist_print(L* pl);
void slist_push_front(L** pl, sl_datatype x);
void slist_pop_back(L** pl);
void slist_pop_front(L** pl);
L* slist_search(L* pl, sl_datatype x);
void slist_insert(L** pl, L* pos, sl_datatype x);
