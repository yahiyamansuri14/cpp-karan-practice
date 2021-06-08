#include<bits/stdc++.h>
#include<iostream>
#include<queue>
 using namespace std;
 struct Node{
        Node *left;
        int data;
        Node *right;
 }*root=NULL;
  queue<Node*> q;
   void create(){
        Node *p,*t;
        int x;
        cout<<"Enter Root value\n";
        cin>>x;

        root=new Node;
        root->data=x;
        root->left=root->right=NULL;
        cout<<"Root node created\n";

        q.push(root);
        while(!q.empty()){
            p=q.front();
            q.pop();
            cout<<"Enter -1 if there is no left node\nEnter left child for\t"<<p->data<<endl;
            cin>>x;
            if(x!=-1){
                t=new Node;
                t->data=x;
                t->left=t->right=NULL;
                p->left=t;
                q.push(t);
            }
            cout<<"Enter -1 if there is no right node\nEnter right child for\t"<<p->data<<endl;
            cin>>x;
            if(x!=-1){
                t=new Node;
                t->data=x;
                t->left=t->right=NULL;
                p->right=t;
                q.push(t);
            }
        }
   }
   void preOrder(Node *p){
        if(p){
             cout<<p->data<<"\t";
             preOrder(p->left);
             preOrder(p->right);
        }
   }
    void inOrder(Node *p){
        if(p){
            inOrder(p->left);
            cout<<p->data<<"\t";
            inOrder(p->right);
        }
    }
    void postOrder(Node *p){
        if(p){
            postOrder(p->left);
            postOrder(p->right);
            cout<<p->data<<"\t";
        }
    }
    void iterativePreorder(Node *p){
    stack<Node*> stk;
    while (p != NULL || ! stk.empty()){
        if (p != NULL){
            //cout << p->data << ", " << flush;
            cout<<p->data<<"\t";
            //stk.emplace(p);
            stk.push(p);
            p = p->left;
        } else {
            p = stk.top();
            stk.pop();
            p = p->right;
        }
    }
    //cout << endl;

    }

    void iterativePostOrder(Node *p){
    stack<long int> stk;
    long int temp;
    while (p != NULL || ! stk.empty()){
        if (p != NULL){
            //stk.emplace((long int)p);
            stk.push((long int)p);
            p = p->left;
        } else {
            temp = stk.top();
            stk.pop();
            if (temp > 0){
                //stk.emplace(-temp);
                stk.push(-temp);
                p = ((Node*)temp)->right;
            } else {
                cout << ((Node*)(-1 * temp))->data << "\t" << flush;
                p = NULL;
            }
        }
    }
    //cout << endl;

    }
    void leverOrder(Node *p){
        queue<Node*> q;
        cout<<p->data<<"\t";
        q.push(p);
        while(p!=NULL){
            //p=q.pop();
            p=q.front();
            q.pop();
            if(p->left){
                cout<<p->left->data<<"\t";
                q.push(p->left);
            }
            if(p->right){
                cout<<p->right->data<<"\t";
                q.push(p->right);
            }
        }
    }
 int main(){
    create();
    cout<<"\n This is preOrder Traversal\n";
    preOrder(root);
    cout<<"\n This is InOrder Traversal\n";
    inOrder(root);
    cout<<"\n This is postOrder Traversal\n";
    postOrder(root);
    cout<<"\nThis is iterative preOrder Traversal\n";
    iterativePreorder(root);
    cout<<"\nThis is iterative Inorder Traversal\n";
    iterativeInorder(root);
    cout<<"\nThis is iterative PostOrder Traversal\n";
    iterativePostOrder(root);
    cout<<"\nThis is level Order Traversal\n";
    leverOrder(root);
    return 0;
 }
