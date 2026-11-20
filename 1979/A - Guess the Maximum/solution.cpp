#include<bits/stdc++.h>
 
using namespace std;
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int mini=INT_MAX;
        for(int i=1;i<N;i++){
            int m= max(arr[i],arr[i-1]);
            mini= min(mini, m);
        }
        cout<<mini-1<<"
";
    }
}