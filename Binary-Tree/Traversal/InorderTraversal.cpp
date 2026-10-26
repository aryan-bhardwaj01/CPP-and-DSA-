#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node *buildTree(vector<int>& nums, int i)
{
    if (i >= nums.size())
        return nullptr;
   
    Node* root = new Node(nums[i]);   
    root->left = buildTree(nums , 2*i +1 );
    root->right = buildTree(nums , 2*i+2);

    return root ;
    
}
void Inorder(Node* root){
    if(root == nullptr) return ;

    Inorder(root->left);
    cout << root->data << " " ;
    Inorder(root->right);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node *root = buildTree(arr, 0);
    cout << "Inorder Traversal :- " ;
    Inorder(root);
    return 0 ;
}
