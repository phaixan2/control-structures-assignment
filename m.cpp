#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int counter = 1;

        while (temp->next)
        {
            temp = temp->next;
            ++counter;
        }

        int middleVal = int(counter / 2);

        temp = head;
        int c = 1;

        while (c <= middleVal)
        {
            temp = temp->next;
            ++c;
        }
        return temp;
    }
};

void printList(ListNode *&head)
{
    ListNode *temp = head;

    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Solution sol = Solution{};

    ListNode *head = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6))))));

    // printList(head);

    int val = sol.middleNode(head)->val;

    cout << "answer: " << val;

    return 0;
}