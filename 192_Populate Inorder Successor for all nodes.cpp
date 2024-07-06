class Solution
{
public:
    void inorder(Node*root,vector<Node*>&ans){
        if(root == NULL){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
    void populateNext(Node *root)
    {   
        vector<Node*>ans;
        inorder(root,ans);
        if(ans.size()<2){
            ans[0]->next = NULL;
        }
        else{
        int i = 0;
        while(i<=ans.size()-2){
            ans[i]->next= ans[i+1];
            i++;
           }
        }
    }
};
