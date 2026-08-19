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
    int result = 0;
    int diameterBinaryTree(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l = diameterBinaryTree(root->left);
        int r = diameterBinaryTree(root->right);
        if(root->left==NULL && root->right==NULL){
            return 1;
        }else{
            if(l+r>result){
                result = l+r;
            }
            if(l>r){
                return l+1;
            }else{
                return r+1;
            }
        }
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameterBinaryTree(root);
        return result;
    }
};
