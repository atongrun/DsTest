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


void slist_init(L** ppl);



