/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        if (o == NULL) 
            return NULL;
        
        if (c->val == t->val) 
            return c;
        
        if (getTargetCopy(o->left, c->left, t) != NULL) {
            return getTargetCopy(o->left, c->left, t);
        }
        
        return getTargetCopy(o->right, c->right, t);
    }
};