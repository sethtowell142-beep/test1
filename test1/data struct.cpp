#include <stdlib.h>
#include <stdio.h>
#include <assert.h>



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


//typedef struct SlistNode
//{
//	int data;
//	struct SlistNode* next;
//}SLTNode;
//
//
//void printlist(SLTNode* phead)
//{
//	SLTNode* p = phead;
//	while (p != NULL)
//	{
//		printf("%d->", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//
//
//
//void snodetest()
//{
//	SLTNode* node1 = (SLTNode*)calloc(1, sizeof(SLTNode));
//	node1->data = 1;
//	SLTNode* node2= (SLTNode*)calloc(1, sizeof(SLTNode));
//	node2->data = 2;
//	SLTNode* node3 = (SLTNode*)calloc(1, sizeof(SLTNode));
//	node3->data = 3;
//
//	SLTNode* node4 = (SLTNode*)calloc(1, sizeof(SLTNode));
//	node4->data = 4;
//
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//
//	SLTNode* plist = node1;
//	printlist(plist);
//
//}
//
//
////尾插
//void LISTPushBack(SLTNode** phead, int x)    //函数传址调用，改变的是原本的内容，而不是临时变量
//{
//	
//	SLTNode* back = (SLTNode*)calloc(1, sizeof(SLTNode));
//	back->data = x;
//	back->next = NULL;
//	if (*phead == NULL)
//	{
//		*phead = back;
//	}
//	else
//	{
//		SLTNode* cur = *phead;//地址复制一份 以免丢失源地址，使用地址->可以找到原来的内容
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = back;
//	}
//
//}
//
////头插
//void LISTPushFront(SLTNode** phead, int x)
//{
//	assert(phead);
//	SLTNode* front = (SLTNode*)calloc(1, sizeof(SLTNode));
//	front->data = x;
//	front->next = *phead;
//	*phead = front;    //原来的指针链表发生改变
//}
//
////尾删
//void LISTPopBack(SLTNode** phead)
//{
//	assert(phead && *phead);    //空指针和空链表
//	if ((*phead)->next == NULL)   //只有一个
//	{
//		free(*phead);
//		*phead = NULL;      //改变本身 需要传地址
//
//}
//	else
//	{
//		SLTNode* cur = *phead;       //变量  只是变量 使用->查询状态
//		while ((cur->next)->next)
//		{
//			cur = cur->next;
//		}
//		free(cur->next);
//		cur->next = NULL;
//	}
//}
//
//
////头删
//void LISTPopfront(SLTNode** phead)
//{
//	assert(phead && *phead);
//	SLTNode* cur = (*phead)->next;
//	free(*phead);
//	*phead = cur;
//
//}
//
//
////查找
//SLTNode* SLTFind(SLTNode* phead, int x)  //不需要修改原初内容 源数据
//{
//	assert(phead);
//	SLTNode* cur = phead;
//	while (cur)
//	{
//		if (cur->data == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
//
//
//
////指定前插入
//void SLTInsert(SLTNode** phead, SLTNode* pos, int x)
//{
//	assert(phead && *phead && pos);
//	SLTNode* prev = *phead;
//	if (pos == *phead)
//	{
//		LISTPushFront(phead, x);
//	}
//	else
//	{
//		SLTNode* NewNode = (SLTNode*)calloc(1, sizeof(SLTNode));
//		NewNode->data = x;
//		while (prev->next != pos)
//		{
//			prev = prev->next;
//		}
//		NewNode->next = pos;
//		prev->next = NewNode;
//	}
//
//}
//
//
//
////指定后插   attention  phead本身没有地址来改变他的变量  所以使用了**
//void LISTInsertAfter(SLTNode* pos, int x)
//{
//	assert(pos);
//	SLTNode* NewNode = (SLTNode*)calloc(1, sizeof(SLTNode));
//	NewNode->data = x;
//	NewNode->next = pos->next;     //防止数据被覆盖
//	pos->next = NewNode;
//}
//
//
////删除指定节点
//void LISTErase(SLTNode** phead, SLTNode* pos)
//{
//	assert(phead && *phead && pos);
//	if (*phead == pos)
//	{
//		SLTNode* cur = pos->next;
//		free(pos);
//		*phead = cur;
//	}
//	else
//	{
//		SLTNode* prev = *phead;
//		while (prev->next != pos)
//		{
//			prev = prev->next;
//		}
//		prev->next = pos->next;
//		free(pos);
//
//	}
//
//}
//
//
//
//
////删除pos节点之后的一个节点
//void LISTEraseAfter(SLTNode* pos)
//{
//	assert(pos && pos->next);
//	SLTNode* del = pos->next;
//	pos->next = pos->next->next;
//	free(del);
//
//}
//
//
////销毁链表
//void Slistdestroy(SLTNode** phead)
//{
//	assert(phead && *phead);
//	SLTNode* pcur = *phead;
//	while (pcur)
//	{
//		SLTNode* next = pcur->next;
//		free(pcur);
//		pcur = next;
//	}
//	*phead = NULL;
//}
//
//int main()
//{
//	snodetest();
//	SLTNode* plist = NULL;
//	LISTPushBack(&plist, 1);     //push back
//	LISTPushBack(&plist, 2);
//	LISTPushBack(&plist, 3);
//	LISTPushFront(&plist, 4);    //push front
//	LISTPushFront(&plist, 5);
//	LISTPushFront(&plist, 6);
//	SLTNode* find=	SLTFind(plist, 6);
//	if (find == NULL)
//		printf("no data\n");
//	else
//		printf("find it\n");
//	SLTInsert(&plist, find, 66);
//	printlist(plist);
//	LISTInsertAfter(find, 77);
//	printlist(plist);
//	LISTErase(&plist, find);
//	printlist(plist);
//
//	LISTPopBack(&plist);        //pop back
//	printlist(plist);
//	LISTPopBack(&plist);
//	printlist(plist);
//	LISTPopBack(&plist);
//	printlist(plist);
//	LISTPopfront(&plist);      //pop front
//	printlist(plist);
//	LISTPopfront(&plist);
//	printlist(plist);
//	Slistdestroy(&plist);
//	return 0;
//}
//
//





//双向链表

//typedef struct ListNode
//{
//	struct ListNode* prev;
//	int data;
//	struct ListNode* next;
//}LN;
//
//
//
//void LTPrint(LN* head)
//{
//	LN* pcur = head->next;
//	while (pcur != head)
//	{
//		printf("%d->", pcur->data);
//		pcur=pcur->next;
//	}
//	printf("\n");
//}
//
//
//LN* BuyNode(int x)
//{
//	LN* node = (LN*)malloc(sizeof(LN));
//	if (node == NULL)
//		exit(1);
//	node->data = x;
//	node->next = node->prev = node;
//	return node;
//}
//
//
//
//
//void LTInit(LN** head)
//{
//	*head = BuyNode(-1);
//
//}
//
//
//void LTPUshFront(LN* phead, int x)
//{
//	assert(phead);
//	LN* newnode = BuyNode(x);
//	newnode->prev = phead;
//	newnode->next = phead->next;
//	phead->next->prev = newnode;
//	phead->next = newnode;     //0 1 2  无 一 多
//}
//
//
//
//void LTPUshback(LN* head, int x)
//{
//	assert(head);
//	LN* newnode = BuyNode(x);
//	newnode->prev = head->prev;
//	newnode->next = head;
//	head->prev->next = newnode;//原末尾节点的next指针修改
//	head->prev = newnode;
//}
//
//
//
//void LTPopBack(LN* head)
//{
//	assert(head && head->next != head);
//	LN* del = head->prev;
//	del->prev->next  = head;
//	head->prev = del->prev;
//	free(del);
//	del = NULL;
//}
//
//
//
//void LTPopFront(LN*head)
//{
//	assert(head && head->next != head);
//	LN* del = head->next;
//	del->next->prev = head;
//	head->next = del->next;
//	free(del);
//	del = NULL;
//}
//
//
//
//
//
//LN* Find(LN* head, int x)
//{
//	LN* pcur = head->next;
//	while (pcur != head)
//	{
//		if (pcur->data == x)
//		{
//			return pcur;
//		}
//		pcur = pcur->next;
//	}
//	return NULL;
//}
//
//
//
//
//void Insert(LN* pos, int x)
//{
//	assert(pos);
//	LN* newnode = BuyNode(x);
//	newnode->next = pos->next;
//	newnode->prev = pos;
//	pos->next = newnode;
//	newnode->next->prev = newnode;
//}
//
//
//void Erase(LN* pos)
//{
//	assert(pos);
//	pos->prev->next = pos->next;
//	pos->next->prev = pos->prev;
//	free(pos);
//}
//
//
//
//
//void LTDestroy(LN* head)         //函数传参并没有改变保存指针变量的内存  有必要置为空吗？出函数自动销毁临时变量
//{
//	LN* pcur = head->next;
//	while (pcur != head)
//	{
//		LN* next = pcur->next;
//		free(pcur);
//		pcur = next;
//	}
//	free(pcur);
//}
//
//
//void test01()
//{
//	LN* plist = NULL; //很明显 使用二级指针需要改变函数之外的变量，且这个变量没有指针指向他。
//	LTInit(&plist);
//	LTPUshback(plist, 1);
//	LTPrint(plist);
//
//	LTPUshback(plist, 2);
//	LTPrint(plist);
//
//	LTPUshback(plist, 3);
//	LTPrint(plist);
//	LTPUshFront(plist, 4);
//	LTPrint(plist);
//
//
//	LTPUshFront(plist, 5);
//	LTPrint(plist);
//
//	LTPUshFront(plist, 6);
//	LTPrint(plist);
//
//	LN*find=Find(plist, 5);
//	Insert(find, 66);
//	LTPrint(plist);
//
//	LTPopBack(plist);
//	LTPrint(plist);
//	LTPopBack(plist);
//	LTPrint(plist);
//	LTPopBack(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//	LTPopFront(plist);
//	LTPrint(plist);
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}





//