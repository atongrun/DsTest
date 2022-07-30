#include "seqlist.h"



void init_sl(SL* sl)
{
    sl->capacity=0;
    sl->size=0;
    sl->a=NULL;
}


void destroy_sl(SL* sl)
{
    assert(sl);
    free(sl->a);
    sl->capacity=0;
    sl->size=0;
}

void isfull(SL* sl)
{
    if(sl->size==sl->capacity)
    {
        int newcapacity=sl->capacity==0?N:2*sl->capacity;
        sl_datatype* tmp=(sl_datatype*)realloc(sl->a,newcapacity);
        assert(tmp);
        sl->a=tmp;
        printf("扩容\n");
    }
}

void push_sl_tail(SL* sl, sl_datatype x)
{
   isfull(sl);
   sl->a[sl->size++]=x;

}


void print_sl(SL* sl)
{
    assert(sl);
    int i=0;
    for(i=0;i<sl->size;i++)
    {
        printf("%d ",sl->a[i]);
    }
    printf("\n");
}



void pop_sl(SL* sl)
{
    assert(sl);
    assert(sl->size!=0);
    sl->size--;
}
