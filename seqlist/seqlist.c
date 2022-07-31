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
    sl->capacity=0;
    sl->size=0;

    free(sl->a);
    sl->a=NULL;
}

void isfull(SL* sl)
{
    if(sl->size==sl->capacity)
    {
        int newcapacity=sl->capacity==0?N:2*sl->capacity;
        sl_datatype* tmp=(sl_datatype*)realloc(sl->a,newcapacity*sizeof(sl_datatype));
        assert(tmp);
        sl->a=tmp;
        sl->capacity=newcapacity;
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




void push_sl_head(SL* sl,sl_datatype x)
{
    assert(sl);
    isfull(sl);
    sl->size++;
    int i=0;
    for(i=sl->size-1;i>0;i--)
    {
        sl->a[i]=sl->a[i-1];
    }
    sl->a[0]=x;
}

void modify_sl(SL* sl, int pos, sl_datatype x)
{
    assert(sl);
    assert(pos>=0&&pos<sl->size);
    sl->a[pos]=x;
}
