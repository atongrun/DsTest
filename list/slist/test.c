#include "slist.h"


void test_pusht()
{
    L* l=NULL;
    slist_push_tail(&l,1);
    slist_push_tail(&l,2);
    slist_push_tail(&l,3);
    slist_push_tail(&l,4);
    slist_print(l);
    slist_destroy(l);
}



int main()
{
    test_pusht();
    return 0;
}
