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

Node* buildtree(Node* root){
    cout<< " enter the data "<< endl;
    int data;
    cin>> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<< " enter the data for inserting in left of "<< data<< endl;
    root->left = buildtree(root->left);
    cout<< " enter the data for inserting  in right of "<< data<< endl;
    root->right = buildtree(root->right);
    return root;
}


void buildTreeFromlevelordertraversal(Node* root){
   queue<Node*> q;
   cout<<" enter data for root "<<endl;
   int data;
   cin>> data;
   root = new Node(data);
   q.push(root);

   while(!q.empty()){
      Node* temp =  q.front();
      q.pop();

      cout<< " enter left node for "<< temp->data<<endl;
      int leftdata;
      cin>> leftdata;

      if(leftdata != -1){
        temp->left = new Node(leftdata);
        q.push(temp->left);

      }


     cout<< " enter right node for "<< temp->data<<endl;
      int rightdata;
      cin>> rightdata;

      if(rightdata != -1){
        temp->right = new Node(rightdata);
        q.push(temp->right);

      }
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

void Reverselevelorder(Node* root){
    queue<Node*> q;
    stack<int> s;
    q.push(root);

    while(!q.empty()){
        Node* temp  = q.front();
       s.push(temp->data);
       q.pop();

       if(temp->left){
        q.push(temp->left);
       }
       if( temp->right){
        q.push(temp->right);
       }
    }
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->data<< " ";
    inorder(root->right);
}

void preorder(Node* root){
    if( root == NULL){
        return ;
    }
    cout<< root->data<< " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root){
    if( root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
    
}


int main(){

   Node* root = NULL;


   root =  buildtree(root);
   levelordertreversal(root);
   

  return 0;

}