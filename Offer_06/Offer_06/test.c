#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
	
};

int* reversePrint(struct ListNode* head, int* returnSize)       //输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。
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