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
    slist_pop_back(&l);
    slist_print(l);
    slist_pop_back(&l);
    slist_print(l);
    slist_pop_back(&l);
    slist_print(l);
    slist_pop_back(&l);
    slist_print(l);
    slist_pop_back(&l);
    slist_print(l);
    slist_pop_back(&l);
    slist_print(l);
    slist_destroy(l);
}

void test_pop_front()
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

    slist_pop_front(&l);
    slist_print(l);
    slist_pop_front(&l);
    slist_print(l);
    slist_pop_front(&l);
    slist_print(l);
}

void test_insert()
{

    L* l=NULL;
    slist_insert(&l,NULL,0);
    slist_push_back(&l,1);
    slist_push_back(&l,2);
    slist_push_back(&l,3);
    slist_push_back(&l,4);
    slist_push_front(&l,10);
    slist_print(l);
    slist_push_front(&l,20);
    slist_print(l);
    slist_push_front(&l,30);
    slist_print(l);
    slist_push_front(&l,40);

    slist_print(l);
    L* ret =slist_search(l, 2);
    if(ret==NULL)
    {
        printf("no num\n");
    }
    else
    {
        printf("find it : %d\n",ret->data);
    }
    //在2之后插入100
    slist_insert(&l, ret, 100);
    slist_print(l);
    //测试头插
    slist_insert(&l, NULL, 200);
    slist_print(l);

}
int main()
{
    test_insert();
    return 0;
}
