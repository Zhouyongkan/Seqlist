#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"



void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFront(&s, -1);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPrint(&s);

	printf("%d\n",SeqListFind(&s, 3));

	SeqListInsert(&s, 3, 30);
	SeqListPrint(&s);

	SeqListErase(&s, 3);
	SeqListPrint(&s);


}



int main()
{
	TestSeqList1();
	return 0;

}


