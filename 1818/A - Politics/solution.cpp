#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        vector<string> arr(N);
        int ans=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i]==arr[0]){
                ans++;
            }
        }
        cout<<ans<<"
";
    }
}