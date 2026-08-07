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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return root;
        }else if(root->left==NULL && root->right==NULL){
            return root;
        }else{
            queue<TreeNode*>q;            
            TreeNode* p = NULL;
            q.push(root);
            while(!q.empty()){
                p = q.front();
                if(p->left!=NULL && p->right!=NULL){
                    TreeNode* temp1 = p->left;
                    p->left = p->right;
                    p->right = temp1;
                    q.push(p->left);
                    q.push(p->right);
                    q.pop();
                }else if(p->left==NULL&&p->right!=NULL){
                    TreeNode* temp1 = p->left;
                    p->left = p->right;
                    p->right = temp1;
                    q.push(p->left);
                    q.pop();
                } 
                else if(p->left!=NULL&&p->right==NULL){
                    TreeNode* temp1 = p->left;
                    p->left = p->right;
                    p->right = temp1;
                    q.push(p->right);
                    q.pop();
                    
                }else{
                    q.pop();
                }
            }
            return root;



        }
        

    } 
};
