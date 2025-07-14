/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        vector<int>v(3,0);
        Node* a=new Node(0);
        Node* b=a;
        while(head!=NULL)
        {
            v[head->data]+=1;
            head=head->next;
        }
        for(int i=0;i<3;i++)
        {
            int times=v[i];
            while(times>0)
            {
                Node* c=new Node(i);
                b->next=c;
                b=b->next;
                times-=1;
            }
        }
        return a->next;
    }
};