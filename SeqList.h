#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SeqList
{
	SLDataType*   _a;
	size_t _size;
	size_t _capacity;
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);
void SeqListPrint(SeqList* ps);

void SeqListCheckCapacity(SeqList* ps);//检查空间够不够
void SeqListPushBack(SeqList* ps, SLDataType x);//尾插
void SeqListPopBack(SeqList* ps);//尾删
void SeqListPushFront(SeqList* ps, SLDataType x);//前插
void SeqListPopFront(SeqList* ps);//前删

int SeqListFind(SeqList* ps, SLDataType x);//返回的是下标
void SeqListInsert(SeqList* ps, size_t pos, SLDataType x);//随机插入
void SeqListErase(SeqList* ps, size_t pos);//删除某个位置的值
void SeqListRemove(SeqList* ps, SLDataType x);//

void SeqListBubbleSort(SeqList* ps);
int SeqListBinaryFind(SeqList* ps, SLDataType x);