#pragma once 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int hdl_datatype;

typedef struct HDList
{
    struct HDList* next;
    struct HDList* prev;
    hdl_datatype data;
}HDL;

void hdl_push_back(HDL* pl, hdl_datatype x);
