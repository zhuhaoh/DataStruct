#include <iostream>
using namespace std;
//将零元素后置，分为其中三种方法
void input(int A[], int n)
{
    int i = 0;
    cout << "please input nums: " << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> A[i];
    }
}

void output(int A[], int n)
{
    int i = 0;
    cout << "output nums:";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << A[i] << " ";
    }
}

void move0Ritht(int A[], int n)
{
    int i; //用来扫描元素
    int j; //用来移动元素
    for (i = 0; i < n;)
    {
        if (A[i] == 0)
        {
            for (j = i; j < n - 1; j++)
            {
                /* code */
                A[j] = A[j + 1];
            }
            A[n - 1] = 0;
            n--;
        }
        else
            i++;
    }
}

void move0Ritht2(int A[], int n)
{
    int i;
    int j = 0;
    int B[n];
    for (i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            B[j] = A[i];
            j++;
        }
    }
    for (; j < n; j++)
    {
        B[j] = 0;
    }
    for (i = 0; i < n; i++)
    {
        A[i] = B[i];
    }
}

void move0Ritht3(int A[], int n)
{
    int i, j = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] != 0)
        {
            /* code */
            A[j] = A[i];
            j++;
        }
    }
    for (; j < n; j++)
    {
        A[j] = 0;
    }
}

int main()
{
    //input and output ten nums;
    int data[10] = {1, 2, 0, 4, 5, 6, 0, 9, 7, 1};
    //input(data, 10);
    output(data, 10);
    move0Ritht3(data, 10);
    output(data, 10);
    return 0;
}
