/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool trav(Node* root,Node* root2)
    {
        if(root==NULL and root2==NULL) return true;
        // if(root==NULL and root!=NULL) return false;
        // if(root!=NULL and root2==NULL) return false;
        if( root==NULL || root2==NULL || root->data!=root2->data) return false;
        if(trav(root->left,root2->right) && trav(root->right,root2->left))
        {
            return true;
        }
        return false;
        
    }
    bool isSymmetric(Node* root) {
        // Code here
        return trav(root->left,root->right);
    }
};