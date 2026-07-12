#include <iostream>
#include <vector>
#include <map>
#include <set>

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

void printList(ListNode *&head)
{
    ListNode *temp = head;

    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
};

template <typename T>
void printArray(T *arr, int size)
{
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}

void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
}

class Solution
{
public:
    int minimumPairRemoval(vector<int> &nums)
    {
        int countOperations = 0;

        int i = 1;
        while (i < nums.size() && i > 0)
            if (nums[i] < nums[i - 1])
                countOperations += 1,
                    merge(nums, findMinAdjPairSum(nums)),
                    i = 1;
            else
                i++;

        return countOperations;
    }

private:
    void merge(vector<int> &arr, int idx)
    {
        vector<int> merged_arr = vector<int>{};

        for (int i = 0; i < arr.size(); i++)

            if (i == idx)
                merged_arr.push_back(arr[i] + arr[i + 1]),
                    ++i;
            else
                merged_arr.push_back(arr[i]);

        arr = merged_arr;
    }

    int findMinAdjPairSum(vector<int> &arr)
    {
        pair<int, int> p = pair<int, int>{arr[0] + arr[1], 0};
        for (int i = 0; i < arr.size() - 1; i++)
        {
            int s = arr[i] + arr[i + 1];
            if (s < p.first)
                p.first = s,
                p.second = i;
        }

        return p.second;
    }
};


int main()
{
    Solution sol = Solution{};

    // ListNode *head = new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(6))))));

    vector<int> v = vector<int>{5, 2, 3, 1, 4, 8};

    cout << "operations required: " << sol.minimumPairRemoval(*new vector<int>{5, 4, 3, 2, 1, 0}) << endl;
    cout << "operations required: " << sol.minimumPairRemoval(*new vector<int>{5, 2, 3, 1}) << endl;
    cout << "operations required: " << sol.minimumPairRemoval(*new vector<int>{1, 2, 2}) << endl;

    // printVector(v);
    // merge(v, *(new pair<int, int>(1, 2)));
    // cout << endl;
    // printVector(v);
    // merge(v, *(new pair<int, int>(1, 2)));
    // cout << endl;

    pair<int, int> p;
    // p = findMinAdjPairSum(*new vector<int>{3, 2, 1, 2});
    // p = findMinAdjPairSum(*new vector<int>{5, 2, 3, 1, 4, 8});

    return 0;
}