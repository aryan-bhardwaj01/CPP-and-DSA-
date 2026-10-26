#include<iostream>
#include<vector>
using namespace std ;

struct Node {
    int data ;
    struct Node* left ;
    struct Node* right ;
  
    Node (int val){
        data =  val  ;
        left =  nullptr ;
        right = nullptr ;
    }
};

Node* buildTree(vector<int>&nums , int i ){
      if( i>= nums.size()){
        return nullptr ;
      }

      Node* root = new Node(nums[i]);

      root->left = buildTree(nums , 2 * i + 1 );
      root->right = buildTree(nums , 2*i+2);

      return root ;
}

void preOrder(Node* root){
    if(root == nullptr){
        return ;
    }

    cout << root->data << " " ;
    preOrder(root->left);
    preOrder(root->right);


}

int main(){
    int n = 0 ;
    cout << "Enter the Size of the Tree :- " ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>> arr[i] ;
    }

    Node* root = buildTree(arr , 0 );
    cout << "Pre-Order Traversal :- " ;
    preOrder(root);
    return 0 ;

}
