#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
	
};

int* reversePrint(struct ListNode* head, int* returnSize)       //����һ�������ͷ�ڵ㣬��β��ͷ����������ÿ���ڵ��ֵ�������鷵�أ���
{
    int n = 0;
    *returnSize = 0;
    int* ret1 = (int*)malloc(sizeof(int) * 1);

    if (head == NULL)
        return 0;

    struct ListNode* prev = head;
    while (prev)
    {
        ret1[n] = prev->val;
        n++;
        ret1 = (int*)realloc(ret1, sizeof(int) * (n + 1));
        prev = prev->next;
    }

    int* ret = (int*)malloc(sizeof(int) * (n + 1));
    int i = 0;
    while (n > 0)
    {
        n--;
        ret[i] = ret1[n];

        i++;
    }

    *returnSize = i;

    return ret;
}

int main()
{

}