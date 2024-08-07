class Solution {
  public:
    string solve(Node* root,map<string,int> &m,map<int,Node*> &a){
        if(!root) return "N";
        string s = to_string(root->data)+"0"+solve(root->left,m,a)+"0"+solve(root->right,m,a);
        if(m.find(s)!=m.end()){
            a[stoi(s)]=root;
        }
        else{
            m[s]=1;
        }
        return s;
    }
    vector<Node*> printAllDups(Node* root)
    {
        vector<Node*> ans;
        map<string,int> m;
        map<int,Node*> a;
        string s=solve(root,m,a);
        for(auto i: a){
            ans.push_back(i.second);
        }
    return ans;
    }
};
