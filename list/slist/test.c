#include "slist.h"


void test_pusht()
{
    L* l=NULL;
    slist_push_back(&l,1);
    slist_push_back(&l,2);
    slist_push_back(&l,3);
    slist_push_back(&l,4);

    slist_print(l);
    slist_push_front(&l,100);
    slist_push_front(&l,200);
    slist_print(l);
    //slist_pop_back(&l);
    //slist_print(l);
    slist_destroy(l);
}

void test()
{
    int a=0;
    printf("%d\n",a);
}

int main()
{
    test_pusht();
    return 0;
}
