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
private:
    int max_depth(TreeNode* root,int count){
        if(root==NULL){
            return count-1;
        }
        int l = max_depth(root->left,count+1);
        int r = max_depth(root->right,count+1);
        if(l>r){
            return l;
        }else{
            return r;
        }
        
    }
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }else if(root->left==NULL && root->right==NULL){
            return 1;
        }else{
          int count = 1;
          
          return max_depth(root,count);
        }
    }
};
