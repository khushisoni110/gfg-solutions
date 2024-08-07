class Solution {
  public:
    vector<int> ans;
    bool fin(struct Node* root, int target){
        if(!root) return false;
        if(root->data == target) return true;
        bool left = fin(root->left, target);
        bool right = fin(root->right, target);
        if(left || right) ans.push_back(root->data);
        return left || right;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        fin(root, target);
        return ans;
    }
};
