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

    // TLE 

   /* vector<int> traversBFS(TreeNode* root){
        vector<int> res;
        queue<int> q;
        q.push(root->val);

        while(!q.empty()){
            res.push_back(q.front());
            q.pop();

            if(root->left != NULL){
                q.push(root->left->val);
            }

            if(root->right != NULL){
                q.push(root->right->val);
            }
        }
        return res;
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }

        vector<int> res = traversBFS(root);

        if(res.size() == 1){
            return true;
        }
        if(res.size() == 2){
            return false;
        }
        if(res.size() == 3 && res[1] == res[2]){
            return true;
        }

        res.erase(res.begin());
        res.erase(res.begin()+1);
        res.erase(res.begin()+2);

        if(res.size() == 0 || res.size() % 4 != 0){
            return false;
        }
        
        vector<vector<int>> result;
        int counter = 0;
        int j = 0;
        int k = 0;
        while(j < res.size() && k < res.size()){
            vector<int> temp;
            for(int i=0; i<res.size(); i++){
                counter++;
                temp.push_back(res[k]);
                if(counter != 0 && counter % 4 == 0){
                    k++;
                    break;
                }
                k++;
            }
            result.push_back(temp);
            j++;
        }

        for(int i=0; i<result.size(); i++){
            if(result[i][0] != result[i][3] || result[i][1] != result[i][2]){
                return false;
            }
        }
        return true;

    }*/
    bool isMirror(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL){
            return true;
        }
        if(left == NULL || right == NULL){
            return false;
        }
        return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        return isMirror(root->left, root->right);
    }

};