
#include<iostream>
#include<stack>
using namespace std;
// Using a Stack : pop,ans , push
// SC = O(n),Tc = O(n); 
// revers in traverse
int main(){
    int arr []= {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Next Greater element Array 
    int nge[n];
     stack<int>st;
     nge[n-1] = -1;
     st.push(arr[n-1]);
     for(int i=n-2;i>=0;i--){
        // pop all the element smaller than arr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        // mark the ans in nge array 
        if(st.size()==0) nge[i] = -1;// null stack
        else nge[i] = st.top();
        // push the arr[i]
        st.push(arr[i]);
     }

        for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}