#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next; //下一个节点也是struct类型，存储地址

} LNode, *LinkList;
void InitHeader(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
}

void InputList(LinkList &L, int n)
{
    LNode *p;
    for (int i = 1; i < n; i++)
    {
        p = new LNode;
        cin >> p->data;
        p->next = L->next;
        L->next = p;
    }
}
void InputList_R(LinkList &L, int n)
{
    LNode *p;
    LNode *r;
    r = L;
    for (int i = 1; i < n; i++)
    {
        p = new LNode;
        cin >> p->data;
        r->next = p;
        r = p;
    }
    r->next = NULL;
}
void showList(LinkList L)
{

    LNode *P;
    P = L->next;
    while (P != NULL)
    {
        /* code */
        cout << P->data << "\t";
        P = P->next;
    }
}
int getLength(LinkList L)
{
    int len = 1;
    LNode *P;
    P = L->next;
    while (P != NULL)
    {
        /* code */
        len++;
        P = P->next;
    }
    return len;
}
void insertR(LinkList &L)
{
    cout << "please input finally nusm:" << endl;
    LNode *p;
    p = new LNode;
    p->next = NULL;
    cin >> p->data;

    LNode *r = L;
    while (r->next != NULL)
    {
        /* code */
        r = r->next;
    }
    r->next = p;
}
int main()
{
    LNode *head;
    //LinkList head;
    InitHeader(head); //初始话头节点（带头节点）
    InputList_R(head, 5);
    showList(head);
    cout << "表长为： " << endl;
    cout << getLength(head) << endl;
    insertR(head);
    showList(head);
    system("pause");
    return 0;
}