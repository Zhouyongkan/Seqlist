#define _CRT_SECURE_NO_WARNINGS

#include"SeqList.h"


void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->_a = NULL;
	ps->_size = 0;
	ps->_capacity = 0;
}

void SeqListDestory(SeqList* ps)
{
	free(ps->_a);
	ps->_a=NULL;
	ps->_size = 0;
	ps->_capacity = 0;
}

void SeqListPrint(SeqList* ps)
{
	assert(ps);
	for (size_t i = 0; i < ps->_size; ++i)
	{
		printf("%d ", ps->_a[i]);
	}
	printf("\n");
}

void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->_size == ps->_capacity)
	{
		int newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
		ps->_a = realloc(ps->_a, newcapacity*sizeof(SLDataType));
		ps->_capacity = newcapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->_a[ps->_size] = x;
	ps->_size++;
}

void SeqListPopBack(SeqList* ps)
{
	assert(ps&&ps->_size > 0);
	ps->_size--;
}

void SeqListPushFront(SeqList* ps, SLDataType x)
{
	assert(ps);
	int end = ps->_size-1;
	while (end>=0)
	{
		ps->_a[end + 1] = ps->_a[end];
		--end;
	}
	ps->_a[0] = x;
	ps->_size++;
}

void SeqListPopFront(SeqList* ps)
{
	assert(ps&&ps->_size>0);
	for (size_t i = 0; i < ps->_size - 1; ++i)
	{
		ps->_a[i] = ps->_a[i + 1];
	}
	ps->_size--;
}

int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);
	for (size_t i = 0; i < ps->_size; ++i)
	{
		if (ps->_a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
	assert(ps && pos<ps->_size);
	int end =ps->_size;
	while (end>=(int)pos)
	{
		ps->_a[end + 1] = ps->_a[end];
		--end;
	}
	ps->_a[pos] = x;
	ps->_size++;
}

void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps && pos<ps->_size);
	size_t i = pos+1;
	for (; i < ps->_size; ++i)
	{
		ps->_a[i-1] = ps->_a[i];
	}
	ps->_size--;
}

void SeqListRemove(SeqList* ps, SLDataType x)
{
	int pos = SeqListFind(ps, x);
	if (pos >= 0)
	{
		SeqListErase(ps, pos);
	}
}
