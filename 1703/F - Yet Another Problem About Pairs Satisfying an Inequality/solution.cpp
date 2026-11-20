#include<bits\stdc++.h>
 
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
        vector<pair<int,int>> v;
        for(int i=0;i<N;i++){
            if(arr[i]<(i+1)){
                v.push_back({arr[i],i+1});
            }
        }
        sort(v.begin(),v.end());
       
        long long ans=0;
        for(int i=0;i<v.size();i++){
            pair<int,int> p={v[i].second+1, v[i].second};
            auto u=upper_bound(v.begin(),v.end(),p);
            int len=v.end()-u;
            ans+=(len);
        }
        cout<<ans<<"
";
    }
}