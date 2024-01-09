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
    // res with &
    void traverse(TreeNode* root, vector<int>& res){
        if(root == NULL){
            return;
        }

        // This is a leaf
        if(root->left == NULL && root->right == NULL){
            res.push_back(root->val);
        }
        if(root->left != NULL){
            traverse(root->left, res);
        }
        if(root->right != NULL){
            traverse(root->right, res);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> res1;
        vector<int> res2;

        traverse(root1, res1);
        traverse(root2, res2);

        return (res1 == res2); 
    } 
};