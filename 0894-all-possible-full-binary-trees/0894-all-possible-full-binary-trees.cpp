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
    unordered_map<int, vector<TreeNode*>> mem;

    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> res;
        if(n == 0){
            return res;
        }
        if(n == 1){
            TreeNode* node = new TreeNode(); 
            res.push_back(node);
            return res;
        }
        for(int l = 0; l<n; ++l){
            int r = n - l - 1;

            // all possible left and right subtrees
            vector<TreeNode*> left;
            vector<TreeNode*> right;
            if(mem[l].size() != 0){
                left = mem[l];
            }else{
                left = allPossibleFBT(l);
                mem[l] = left;
            }
            if(mem[r].size() != 0){
                right = mem[r];
            }else{
                right = allPossibleFBT(r);
                mem[r] = right;
            }
            
            // combine
            for(int i = 0; i < left.size(); ++i){
                for(int j = 0; j<right.size(); ++j){
                    TreeNode* t = new TreeNode(0, left[i], right[j]);
                    res.push_back(t);
                }
            }
        }
        return res;
    }
};