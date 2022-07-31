#include "seqlist.h"

void test()
{
    SL s;
    init_sl(&s);
    push_sl_tail(&s,1);

    push_sl_tail(&s,2);
    push_sl_tail(&s,3);
    push_sl_tail(&s,4);
    push_sl_tail(&s,5);
    push_sl_tail(&s,6);
    push_sl_tail(&s,7);
    print_sl(&s);
    pop_sl(&s);
    print_sl(&s);
    push_sl_head(&s,100);
    push_sl_head(&s,200);
    print_sl(&s);
    modify_sl(&s,5,222);
    print_sl(&s);
    destroy_sl(&s);
}

void test_insert()
{

    SL s;
    init_sl(&s);
    push_sl_tail(&s,1);

    push_sl_tail(&s,2);
    push_sl_tail(&s,3);
    push_sl_tail(&s,4);
    push_sl_tail(&s,5);
    push_sl_tail(&s,6);
    push_sl_tail(&s,7);
    print_sl(&s);
    insert_sl(&s,2,250);
    print_sl(&s);

}

void test_search()
{

    SL s;
    init_sl(&s);
    push_sl_tail(&s,1);

    push_sl_tail(&s,2);
    push_sl_tail(&s,3);
    push_sl_tail(&s,4);
    push_sl_tail(&s,5);
    push_sl_tail(&s,6);
    push_sl_tail(&s,7);
    print_sl(&s);
    int pos1=search_sl(&s,4);
    int pos2=search_sl(&s,10);
    if(pos1!=-1)
    {
        printf("find it: %d\n",s.a[pos1]);
    }
    else
    {
        printf("no x in a\n");
    }

    if(pos2!=-1)
    {
        printf("find it: %d\n",s.a[pos2]);
    }
    else
    {
        printf("pos2=-1\n");
    }
}

void test_delete()
{
    SL s;
    init_sl(&s);
    push_sl_tail(&s,1);
    push_sl_tail(&s,2);
    push_sl_tail(&s,3);
    push_sl_tail(&s,4);
    print_sl(&s);
    delete_sl(&s,1);
    print_sl(&s);
    destroy_sl(&s);
}
int main()
{
    test_delete();
    return 0;
}
