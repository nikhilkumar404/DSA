#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] ={2,4,2,6,24,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    stack<int>st;
    st.push(arr[0]);
    for(int i =0;i<size;i++){
        while(arr[i]>st.top()){
            cout<<st.top()<<"-->"<<arr[i];
            cout<<endl;
            st.pop();
        }
        st.push(arr[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<"--> -1";
        st.pop();
    }
}
