#include "seqlist.h"

void test()
{
    SL s;
    init_sl(&s);
    push_sl_tail(&s,1);

    push_sl_tail(&s,2);
    push_sl_tail(&s,3);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    push_sl_tail(&s,4);
    print_sl(&s);
    pop_sl(&s);
    print_sl(&s);
    destroy_sl(&s);
}

int main()
{
    test();
    return 0;
}
