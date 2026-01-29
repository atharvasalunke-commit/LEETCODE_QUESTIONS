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
void recursion(TreeNode*temp1,TreeNode*temp2,bool &x){
    if(temp1==nullptr&&temp2==nullptr){
        return;
    }
    else if(temp1==nullptr||temp2==nullptr){
        x=false;
        return;
    }
    if(temp1->val!=temp2->val){
        x=false;
        return;
    }
    
    recursion(temp1->left,temp2->right,x);
    recursion(temp1->right,temp2->left,x);
}
    bool isSymmetric(TreeNode* root) {
        auto temp1=root->left;
        auto temp2=root->right;
        bool x=true;
        recursion(temp1,temp2,x);
        return x;
    }
};