
/*
12
6
9
18
4
10
5
16
49
31
43
*/


#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;


};
node *root=NULL;
queue<node*>q;

void BST_insert (int value)
{
    node* curr_node=new node();
    node* prev_node=new node();
    node* temp=new node();

    temp = new node();
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)root=temp;

    else
    {
        curr_node=root;
        prev_node=root;

        while(curr_node!=NULL)
        {
            prev_node=curr_node;
            if(curr_node->data<value)curr_node=curr_node->right;
            else
            {
                curr_node=curr_node->left;
            }
        }
        if(prev_node->data<value)prev_node->right=temp;
        else
        {
            prev_node->left=temp;
        }

    }
}
void inorder(node*temp)
{


    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp ->data<<" ";
        inorder(temp->right);
    }
}
void preorder(node*temp)
{


    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        preorder(temp->left);

        preorder(temp->right);
    }
}
void postorder(node*temp)
{


    if(temp!=NULL)
    {
        postorder(temp->left);

        postorder(temp->right);
        cout<<temp ->data<<" ";
    }
}
void findmax(node* root)
{
    node *curr_node=root;
    while(curr_node->right!=NULL)
    {
        curr_node=curr_node->right;
    }

    cout<<"\nMax:"<<curr_node->data<<endl;
}
void findmin(node* root)
{
    node *curr_node=root;
    while(curr_node->left!=NULL)
    {
        curr_node=curr_node->left;
    }

    cout<<"\nMin:"<<curr_node->data<<endl;
}
void perfect()
{

}


int main()
{
    int x;
    for(int i=1; i<=11; i++)
    {
        cin>>x;
        BST_insert(x);
    }
    cout<<"inorder: "<<endl;
    inorder(root);
     cout<<"\n pre order: "<<endl;
    preorder(root);
    cout<<"\n post order: "<<endl;
    postorder(root);
    findmax(root);
    findmin(root);

}


