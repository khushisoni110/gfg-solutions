class Solution {
  public:
    bool compute(Node* head) {
        string s="";
        Node *a=head;
        while(a!=NULL){
            s.append(a->data);
            a=a->next;
        }
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};
