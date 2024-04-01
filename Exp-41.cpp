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
    root->left = build(A, i, root->data);
    root->right = build(A, i, bound);
    return root;
}

void postorder(TreeNode * root, vector<int> &ans){
    if(root==NULL) return;
    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> convert(vector<int> &preorder){
    int i = 0;
    TreeNode * root = build(preorder, i, INT_MAX);
    vector<int> ans;
    postorder(root, ans);
    return ans;
}

int main(){
    int n;
    cout<<"Enter n: "; cin>>n;
    vector<int> preorder(n);
    cout<<"Enter Preorder elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>preorder[i];
    }
    cout<<"Postorder : "<<endl;
    vector<int> postorder = convert(preorder);
    for (int i = 0; i < n; i++)
    {
        cout<<postorder[i]<<" ";
    }
    cout<<endl;
}
