
//  #MAQ software

/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
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


************************************************************/
//  InOrder Traversal
void inorderTraversal(BinaryTreeNode<int> *root,vector<int>&in)
{
    if (root == NULL)
        return;

    inorderTraversal(root->left,in);
    in.push_back(root->data);
    inorderTraversal(root->right,in);
}

//  PreOrder Traversal
void preorderTraversal(BinaryTreeNode<int> *root,vector<int>&pre)
{
    if (root == NULL)
        return;

//     cout << root->data << " ";
    pre.push_back(root->data);
    preorderTraversal(root->left,pre);
    preorderTraversal(root->right,pre);
}

//  PostOrder Traversal
void postorderTraversal(BinaryTreeNode<int>*root,vector<int>&post)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left,post);
    postorderTraversal(root->right,post);
    post.push_back(root->data);
//     cout << root->data << " ";
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>>arr;
    vector<int>in;
    vector<int>pre;
    vector<int>post;
    
    inorderTraversal(root,in);
    preorderTraversal(root,pre);
    postorderTraversal(root,post);
    
    arr.push_back(in);
    arr.push_back(pre);
    arr.push_back(post);
    
    return arr;
}