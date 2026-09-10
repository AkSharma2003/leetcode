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

        pair<int,int>left,right;
        left=caluclate(root->left);
        right=caluclate(root->right);
        ct=left.second+right.second+1;

        int sum=root->val+left.first+right.first;
        if(sum/ct==root->val) count++;
        return {sum,ct};
    }
public:
    int averageOfSubtree(TreeNode* root) {

        pair<int,int> ans= caluclate(root);
        return count;
    }
};