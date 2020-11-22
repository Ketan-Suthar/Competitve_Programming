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
    Solution()
    {
        ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
        // if(root == NULL)
        //     return 0;
        int diam = 0;
        int height = diameter(root, diam);
        return diam;
    }
    
    int diameter(TreeNode *root, int &diam)
    {
        if(root == NULL)
            return 0;
        
        int left = diameter(root->left, diam);
        int right = diameter(root->right, diam);
        
        diam = max(diam, left+right);
        
        return 1 + max(left,right);
    }
};

