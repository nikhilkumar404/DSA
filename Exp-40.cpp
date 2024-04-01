# include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


TreeNode * build(vector<int> &A, int &i, int bound){
    if(i==A.size() || A[i] > bound) return NULL;
    TreeNode * root = new TreeNode(A[i++]);
    root->right = build(A, i, root->data);
    root->left = build(A, i, bound);
    return root;
}

void preorder(TreeNode * root, vector<int> &ans){
    if(root==NULL) return;
    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
}

vector<int> convert(vector<int> &postorder){
    int i = postorder.size() - 1;
    TreeNode * root = build(postorder, i, INT_MAX);
    vector<int> ans;
    preorder(root, ans);
    return ans;
}

int main(){
    int n;
    cout<<"Enter n: "; cin>>n;
    vector<int> postorder(n);
    cout<<"Enter Postorder elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>postorder[i];
    }
    cout<<"Preorder : "<<endl;
    vector<int> preorder = convert(postorder);
    for (int i = 0; i < n; i++)
    {
        cout<<preorder[i]<<" ";
    }
    cout<<endl;
}
