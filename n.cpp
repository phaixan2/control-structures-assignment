#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cmath>

using namespace std;

void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
}

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
    int getDecimalValue(ListNode *head)
    {
    }
};

int main()
{
    Solution s = Solution{};

    // cout << s.getDecimalValue(new ListNode(1, new ListNode(0, new ListNode(1, NULL))));

    int a = 2; // Binary: 1100
    int b = 4; // Binary: 1010

    // 1100 ^ 1010 = 0110 (which is 6 in decimal)
    int result = a ^ b;
    cout << result;


    return 0;
}

/*class MyHashMap {
public:
    vector<int> keys;
    MyHashMap() { keys = vector<int>(10000000, -1); }

    void put(int key, int value) { keys[key] = value; }

    int get(int key) { return keys[key]; }

    void remove(int key) { keys[key] = -1; }
};
*/