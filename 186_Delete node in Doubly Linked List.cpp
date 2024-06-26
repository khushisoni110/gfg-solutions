class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
    Node* temp = head; 
    int t = 1; 
    while (temp != nullptr) {
        if (t == x) {
            if (temp == head) {
                head = head->next; 
                if (head != nullptr) {
                    head->prev = nullptr; 
                }
            }
            else if (temp->next == nullptr) {
                temp->prev->next = nullptr;
            }
            else {
                Node* front = temp->next; 
                temp->prev->next = front; 
                front->prev = temp->prev; 
            }
            break; 
        }
        ++t; 
        temp = temp->next; 
    }
    return head; 
    }
};
