class Solution {
public:
    struct Compare {
        bool operator()(Node* a, Node* b) {
            return a->data > b->data; // min heap
        }
    };

    Node* flatten(Node* root) {
        if (!root) return NULL;

        priority_queue<Node*, vector<Node*>, Compare> pq;

        // push all head nodes
        Node* curr = root;
        while (curr) {
            pq.push(curr);
            curr = curr->next;
        }

        Node* dummy = new Node(0);
        Node* tail = dummy;

        while (!pq.empty()) {
            Node* top = pq.top();
            pq.pop();

            tail->bottom = top;
            tail = tail->bottom;
            tail->next = NULL;

            if (top->bottom) {
                pq.push(top->bottom);
            }
        }

        return dummy->bottom;
    }
};
