// "aaabbcddaabffg" convert into a 
// abcdabfg
#include<iostream>
#include<stack>
using namespace std;

string removeDuplicate(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    s = "";
    while(st.size()>0){
        s += st.top();
        st.pop();
    }
    // reverse(s.begin(),s.end());
    // return 0;

}

int main(){
    string  s = "aaabbbcccddddefg";
    cout<<s<<endl;
    s = removeDuplicate(s);
    cout<<s<<endl;
}