// Input - {100,80,60,70,60,75,85}
// OUtput - {1, 1,  1, 2, 1, 4, 6}
// jaise ki 85 piche 6 din me sabse jada stock rha hai aur 75 pichle 4 din me sase jada stock rha hai 

#include<iostream>
#include<stack>
using namespace std;
// Using a Stack : pop,ans , push
// SC = O(n),Tc = O(n); 
// forwad in traverse
int main(){
    int arr []= {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Previous greatest index 
    int pgi[n];
     stack<int>st;
     pgi[0] = -1;
     st.push(0);
     for(int i=1;i<=n-1;i++){
        // pop all the element smaller than arr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        
        if(st.size()==0) pgi[i] = -1;// 
        else pgi[i] = st.top();
        pgi[i]= i-pgi[i];
        // push the arr[i]
        st.push(i);
     }

        for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
}