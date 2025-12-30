class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {

        Node* r1 = NULL;
        Node* r2 = NULL;

       
        while(head1 != NULL) {
            if(r1==NULL and head1->data==0)
            {
                
            }
            else
            {
            Node* help = new Node(head1->data);
            help->next = r1;
            r1 = help;
            }
            head1 = head1->next;
        }

      
        while(head2 != NULL) {
            if(r2==NULL and head2->data==0)
            {
                
            }
            else
            {
            Node* help = new Node(head2->data);
            help->next = r2;
            r2 = help;
            }
            head2 = head2->next;   
        }

        Node* ans = new Node(0);
        Node* actans = ans;
        int carry = 0;

        while(r1 != NULL || r2 != NULL) {
            int sum = carry;
            if(r1) { sum += r1->data; r1 = r1->next; }
            if(r2) { sum += r2->data; r2 = r2->next; }

            carry = sum / 10;
            ans->next = new Node(sum % 10);
            ans = ans->next;
        }

        if(carry)
            ans->next = new Node(carry);
            
        actans=actans->next;
            
        Node* rev=NULL;
        while(actans != NULL) {
            Node* help = new Node(actans->data);
            help->next = rev;
            rev = help;
            actans = actans->next;   
        }

        return rev;   
    }
};
