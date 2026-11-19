#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N,K;
    cin>>N>>K;
    string s;
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<N;i++){
        arr[s[i]-'A']++;
    }
    struct cmp{
        bool operator()(int a,int b){
            return a>b;
        }
    };
    sort(arr.begin(),arr.end(),cmp());
 
    int k=0,idx=0;
    long long ans=0;
    while(k<K){
        long long cnt=arr[idx++];
        if(k+cnt<=K){
            ans= ans+ cnt*cnt*1LL;
            k+=cnt;
        }
        else{
            cnt=abs(k-K);
            ans=ans+ cnt*cnt;
            k+=cnt;
        }
    }
    cout<<ans<<"
";
}