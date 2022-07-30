#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define N 4

typedef int sl_datatype;

typedef struct SeqList
{
    sl_datatype *a;
    int size;
    int capacity;
}SL;


void init_sl(SL* sl);
void destroy_sl(SL* sl);
void push_sl_tail(SL* sl, sl_datatype x);
void print_sl(SL* sl);
void pop_sl(SL* sl);
