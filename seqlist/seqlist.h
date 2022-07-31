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
void push_sl_head(SL* sl,sl_datatype x);
void modify_sl(SL* sl, int pos, sl_datatype x);
void insert_sl(SL* sl, int pos, sl_datatype x);
//找到返回下标，找不到返回-1
int search_sl(SL* sl, sl_datatype x);
//删除pos位置元素
void delete_sl(SL* sl, int pos);
