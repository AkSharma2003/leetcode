/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> a,b;
        while(headA!=nullptr){
            a.push_back(headA);
            headA=headA->next;
        }

        while(headB!=nullptr){
            b.push_back(headB);
            headB=headB->next;
        }

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        int n=min(a.size(),b.size());
        ListNode* ans=nullptr;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]) return ans;
            else ans=a[i];
        }
        return ans;
    }
};