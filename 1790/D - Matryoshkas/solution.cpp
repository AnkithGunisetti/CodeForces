#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N;i++) cin>>arr[i];
        multiset<int> s(arr.begin(),arr.end());
        int cnt=0,idx=0;
        while(s.size()>0){
            int first=*s.begin();
            s.erase(s.find(first));
            while(s.find(first+1)!=s.end()){
                s.erase(s.find(first+1));
                first++;
            }
            cnt++;
        }
        
        cout<<cnt<<"
";
    }
}