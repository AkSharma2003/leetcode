/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int count=0;
    int ct=0;

    pair<int,int> caluclate(TreeNode* root){
        if(!root) return {0,0};
        auto [left,ct1]=caluclate(root->left);

        auto [right,ct2]=caluclate(root->right);
        int ct=ct1+ct2+1;
        int sum=root->val+left+right;
        if(sum/ct==root->val) count++;
        return {sum,ct};
    }
public:
    int averageOfSubtree(TreeNode* root) {

        caluclate(root);
        return count;
    }
};