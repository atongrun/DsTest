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


int main()
{
    test_push_back();
    return 0;
}
