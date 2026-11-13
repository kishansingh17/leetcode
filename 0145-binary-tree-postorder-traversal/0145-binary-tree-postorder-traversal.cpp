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

    void postorderTraversal(TreeNode* root, vector<int>&output){
        if(root==NULL){
            return;
        }
        postorderTraversal(root->left,output);
        postorderTraversal(root->right,output);
        output.push_back(root->val);

    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> output;
        postorderTraversal(root,output);
        return output;

        
    }
};