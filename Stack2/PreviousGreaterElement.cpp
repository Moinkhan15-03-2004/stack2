
#include<iostream>
#include<stack>
using namespace std;
// Using a Stack : pop,ans , push
// SC = O(n),Tc = O(n); 
// forwad in traverse
int main(){
    int arr []= {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Next Greater element Array 
    int pge[n];
     stack<int>st;
     pge[0] = -1;
     st.push(arr[0]);
     for(int i=1;i<=n-1;i++){
        // pop all the element smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array 
        if(st.size()==0) pge[i] = -1;// null stack
        else pge[i] = st.top();
        // push the arr[i]
        st.push(arr[i]);
     }

        for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
}