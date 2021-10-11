#include <iostream>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode *next;
} * LinkList;

void InitList(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
}

void Insert(LinkList &L, int A[], int n)
{
    //定义两个指针
    LNode *p;
    LNode *r;
    r = L;
    for (int i = 0; i < n; i++)
    {
        p = new LNode;
        p->data = A[i];
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

void ShowList(LinkList L)
{
    LNode *p;
    p = L->next; //L为带头结点的指针
    while (p)
    {
        /* code */
        cout << p->data << " ";
        p = p->next;
    }
}

void move_R(LinkList &L)
{
    LNode *p;
    LNode *head0, *r;
    InitList(head0);
    r = head0;
    p = L;
    while (p->next)
    {
        if (p->next->data == 0)
        {
            r->next = p->next;
            r = r->next;
            p->next = r->next;
                }
        else
        {
            p = p->next;
        }
    }
    p->next = head0->next;
    r->next = NULL;
    delete head0;
}

int main()
{
    int data[10] = {1, 2, 3, 0, 4, 0, 5, 0, 6, 7};
    LinkList head;
    InitList(head);
    Insert(head, data, 10);
    ShowList(head);
    move_R(head);
    cout << "move end!: " << endl;
    ShowList(head);

    return 0;
}