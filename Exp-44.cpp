#include<iostream>
#include<stack>
using namespace std;

bool isvalid(char ch[], int size){
    stack<char> st;
    st.push(ch[0]);
    for(int i =1;i<size;i++){
        if((st.top() == '(' && ch[i] == ')') || (st.top() == '[' && ch[i] == ']') || (st.top() == '{' && ch[i] == '}')){
            st.pop();
        }
        else{
            st.push(ch[i]);
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
}

int main(){
    char ch[] = "[()]{}{[()()]()}";
    int size = sizeof(ch)/sizeof(ch[0]);
    if(isvalid(ch, size)){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
    
}
