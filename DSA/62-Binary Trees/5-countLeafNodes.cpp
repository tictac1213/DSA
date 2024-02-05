// https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?

#include<bits/stdc++.h>
using namespace std;

   template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

void solve(BinaryTreeNode<int> *root, int &count){
    if( root == NULL){
        return;
    }

    if( root -> left == NULL && root -> right == NULL){
        count++;
    } 

    solve(root->right,count);
    solve(root->left,count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = 0;
    solve(root,count);
    return count;
}

int main(){
    


return 0;
}