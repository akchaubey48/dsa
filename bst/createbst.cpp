#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
      int data;
      Node* left;
      Node* right;

    Node(int val){
        this->data = val;
       this-> left = this->right =  NULL;
    }
};



void insertIntobst(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return;
    }

    if(data > root->data){
        insertIntobst(root->right, data);
    } else {
        insertIntobst(root->left, data);
    }
}

void levelordertreversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
   Node* temp = q.front();
   cout<< temp->data<< " ";
   q.pop();
   if(temp->left){
      q.push(temp->left);
   }

    if(temp->right){
      q.push(temp->right);
   }

    }
}


void preorder(Node* root){
    if( root == NULL){
        return ;
    }
    cout<< root->data<< " ";
    preorder(root->left);
    preorder(root->right);

}


void inorder(Node* root){
    if(root== NULL){
        return;
    }
   
    inorder(root->left);
     cout<< root->data<< " ";
    inorder(root->right);

}


void search(Node* &root, int key){
    while(root != NULL){
        if(root->data == key){
            cout<< key << " is found"<< endl;
            return;
        } else if( key > root->data){
            root= root->right;
        } else{
            root= root->left;
        }
    }
    cout<< " key is not found"<< endl;
}


Node* minofroot(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}


Node* deleteNode(Node* root, int val){
    if(root == NULL){
        return root;
    }

    if(root->data == val){
    // 0 child
    if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
    }

    // 1 child
    // left child
    if( root->left != NULL && root->right == NULL){
        Node* temp = root->left;
        delete root;
        return temp;
    }
   
    // right child
     if( root->left == NULL && root->right != NULL){
        Node* temp = root->right;
        delete root;
        return temp;
    }

    // 2 child
    if( root->left != NULL && root->right != NULL){
        int min = minofroot(root->right)->data;
        root->data = min;
        root->right = deleteNode(root->right, min);
        return root;
    }

    }
    else if( root->data > val){
        root->left = deleteNode(root->left,val);
        return root;
    } else{
        root->right = deleteNode(root->right,val);
        return root;
    }
}

void takeinput(Node* &root){

    int data;
    cin>> data;
    while(data != -1){
      insertIntobst(root,data);
      cin>> data;
    }

}




int main(){


    Node* root = NULL;

    cout<<" enter data for bst"<< endl;

   takeinput(root);
  

   cout<<" prientong inorder"<< endl;
   inorder(root);
   cout<<endl;
   cout<<" printing by level"<<endl;
   levelordertreversal(root);
   cout<< endl;

   cout<< " printing pre"<< endl;
   preorder(root);

   cout<< endl;

   search(root,20);
}