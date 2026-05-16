#include <stdlib.h>
#include <stdio.h>




//顺序表
// 
// 
//#define InitSize 10    
//typedef struct 
//{
//	int* date;
//	int MaxSize;
//	int Length;
//}Seqlist;
//
//void Initlist(Seqlist &L)
//{
//	L.date = (int*)calloc(InitSize, sizeof(int));
//	L.Length = 0;
//	L.MaxSize = InitSize;
//}
//bool IncreaseSize(Seqlist& L, int length)
//{
//	int *tmp = (int*)realloc(L.date, (length + L.MaxSize) * sizeof(int));
//	if (tmp == NULL)
//	{
//		perror("realloc");
//		return false;
//	}
//	else
//	{
//		L.MaxSize = length + L.MaxSize;
//		L.date = tmp;
//		return true;
//	}
//}
//bool ListInsert(Seqlist&L, int i, int e)
//{
//	if (i<1 || i>L.Length + 1)
//	{
//		return false;
//	}
//	if (i >= L.MaxSize)
//		return false;
//	for (int j = L.Length; j >= i; j--)   //length是长度 12345 直接扔到下标 0123自动加一
//		L.date[j] = L.date[j - 1];
//	L.date[i - 1] = e;
//	L.Length++;
//	return true;
//}
//bool Listdelete(Seqlist& L, int i, int& e)
//{
//	if (i<1 || i>L.Length)
//		return false;
//	e = L.date[i-1];
//	for (int j = i; j < L.Length; j++)   //自然短一
//		L.date[j-1] = L.date[j];    //最后搬回去的j
//	L.Length--;
//	return true;
//}
//int LocateElem(const Seqlist &L,int e)
//{
//	for (int i = 0; i < L.Length; i++)
//		if (L.date[i] == e)
//			return i+1;
//	return 0;
//}
//bool GetElem(const Seqlist &L, int i,int &e)
//{
//	if (i<1 || i>L.Length)
//		return false;
//	e = L.date[i - 1];
//	return true;
//}
//int main()
//{
//	Seqlist L;
//	Initlist(L);
//	IncreaseSize(L,5);
//	int i = 1;
//	int e = 8;
//	ListInsert(L, i, e);
//	LocateElem(L, e);
//	GetElem(L, i,e);
//	free(L.date);
//	if (Listdelete(L, i, e))
//		printf("delete%d\n", e);
//	return 0;
//}
//








//单链表


typedef struct SlistNode
{
	int data;
	struct SlistNode* next;
}SLTNode;


void printlist(SLTNode* phead)
{
	SLTNode* p = phead;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("\n");
}



void snodetest()
{
	SLTNode* node1 = (SLTNode*)calloc(1, sizeof(SLTNode));
	node1->data = 1;
	SLTNode* node2= (SLTNode*)calloc(1, sizeof(SLTNode));
	node2->data = 2;
	SLTNode* node3 = (SLTNode*)calloc(1, sizeof(SLTNode));
	node3->data = 3;

	SLTNode* node4 = (SLTNode*)calloc(1, sizeof(SLTNode));
	node4->data = 4;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;

	SLTNode* plist = node1;
	printlist(plist);

}


//尾插
void LISTPushBack(SLTNode** phead, int x)    //函数传址调用，改变的是原本的内容，而不是临时变量
{
	
	SLTNode* back = (SLTNode*)calloc(1, sizeof(SLTNode));
	back->data = x;
	back->next = NULL;
	if (*phead == NULL)
	{
		*phead = back;
	}
	else
	{
		SLTNode* cur = *phead;//地址复制一份 以免丢失源地址，使用地址->可以找到原来的内容
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = back;
	}




}



int main()
{
	snodetest();
	SLTNode* plist = NULL;
	LISTPushBack(&plist, 1);
	LISTPushBack(&plist, 2);
	LISTPushBack(&plist, 3);


	printlist(plist);
	return 0;
}