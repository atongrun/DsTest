#include "hdlist.h"

void test_push_back()
{
    HDL* phead=hdl_init();
    hdl_push_back(phead,1);
    hdl_push_back(phead,2);
    hdl_push_back(phead,3);
    hdl_push_back(phead,4);
    hdl_push_back(phead,5);
    hdl_print(phead);
}

void test_push_front()
{
    HDL* phead=hdl_init();
    hdl_push_back(phead,1);
    hdl_push_back(phead,2);
    hdl_push_back(phead,3);
    hdl_push_back(phead,4);
    hdl_push_back(phead,5);
    hdl_print(phead);
    hdl_push_front(phead,10);
    hdl_push_front(phead,20);
    hdl_push_front(phead,30);
    hdl_print(phead);
}

int main()
{
    test_push_front();
    return 0;
}
