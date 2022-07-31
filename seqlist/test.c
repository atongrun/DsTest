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

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    test();
    return 0;
}
