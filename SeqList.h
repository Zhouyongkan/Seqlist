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

void SeqListCheckCapacity(SeqList* ps);//���ռ乻����
void SeqListPushBack(SeqList* ps, SLDataType x);//β��
void SeqListPopBack(SeqList* ps);//βɾ
void SeqListPushFront(SeqList* ps, SLDataType x);//ǰ��
void SeqListPopFront(SeqList* ps);//ǰɾ

int SeqListFind(SeqList* ps, SLDataType x);//���ص����±�
void SeqListInsert(SeqList* ps, size_t pos, SLDataType x);//�������
void SeqListErase(SeqList* ps, size_t pos);//ɾ��ĳ��λ�õ�ֵ
void SeqListRemove(SeqList* ps, SLDataType x);//

void SeqListBubbleSort(SeqList* ps);
int SeqListBinaryFind(SeqList* ps, SLDataType x);