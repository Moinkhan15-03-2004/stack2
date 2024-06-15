// steps if you see opening bracket push
// if you see a closing bkt, st->top ko dekho agar Opening bracket hai to ( to 
// st.pop() kr do agar stack empty hai to false return kr do 
#include<iostream>
#include<stack>
using namespace std;
#include<stack>
bool isBalanced(string s){
    if(s.length()%2!=0) return false;// odd length of string 
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);// opening bracket
        else{
            if(st.size()==0) return false;
            else st.pop();
        }
    }
      if(st.size()==0) return true;
      else return false;
}

int main(){
    string s = "()()()";
    cout<<isBalanced(s);
}