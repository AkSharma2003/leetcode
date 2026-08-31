/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool chek(int a, int b, int c) {
        if (b > a && b > c)
            return true;
        if (b < a && b < c)
            return true;

        return false;
    }

    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = nullptr;
        vector<int> dummy;
        int ct = 1;

        while (curr->next != nullptr) {
            ct++;
            nxt = curr->next;
            if (chek(prev->val, curr->val, nxt->val))
                dummy.push_back(ct);
            curr = curr->next;
            prev = prev->next;
        }

        vector<int> ans(2, -1);
        if (dummy.size() < 2)
            return ans;

        int mn = INT_MAX;
        int a;
        for (int i = 1; i < dummy.size(); i++) {
            a = dummy[i] - dummy[i - 1];
            mn = min(mn, a);
        }

        ans[0] = mn;
        a = dummy.back() - dummy.front();
        ans[1] = a;
        return ans;
    }
};