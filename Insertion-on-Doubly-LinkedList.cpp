class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        Node *head = NULL;
        Node *tail = NULL;
        
        for(int i = 0;i<arr.size();i++){
            if(head == NULL){
                head = new Node(arr[i]);
                tail = head;
            }
            else{
                Node *temp = new Node(arr[i]);
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }
        return head;
    }
};
