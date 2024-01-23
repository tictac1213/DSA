#include<iostream>
#include<queue>

using namespace std;

class Node{

    public:
        int data;
        Node* right;
        Node* left;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node* buildTree(Node* root){
    int x;
    cout << "Enter the data (Enter -1 if no data) ";
    cin >> x;
    cout << endl;
    root = new Node(x);
    if( x == -1){
        return NULL;
    }
    else{
        cout << "Building Left node of " << x << endl;
        root -> left = buildTree(root -> left);
        cout << "Building right node of " << x << endl;
        root -> right = buildTree(root -> right);

        return root;
    }
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        Node* temp = q.front();
        q.pop();
        if( temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
            // q.push(NULL);
        }
    }
    
    
}



int main(){
    Node* root;
    root = buildTree(root);
    levelOrderTraversal(root);

    return 0;
}