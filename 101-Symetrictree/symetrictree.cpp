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
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root->left);
        q.push(root->right);
        while(q.size()){
            TreeNode* one = q.front();q.pop();
            TreeNode* two = q.front();q.pop();
            if( !one and two) return false;
            if(!two and one ) return false;
            if(one and two){
                if(one->val !=two->val) return false;
                q.push(one->left);
                q.push(two->right);
                q.push(one->right);
                q.push(two->left);
            }
        }
        return true;
    }
};
