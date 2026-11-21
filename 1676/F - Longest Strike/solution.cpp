#include<bits\stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> arr(N);
        map<int,int> mpp;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        int l=-1, r=-1;
        while(mpp.size()>0){
            auto it= mpp.begin();
            int num=it->first;
            int freq=it->second;
            int l1=num,r1=num;
            mpp.erase(mpp.find(num));
            if(freq<K) continue; 
            while(mpp.find(num+1)!= mpp.end() && mpp[num+1]>=K){
                r1=num+1;
                mpp.erase(mpp.find(num+1));
                num++;
            }
            if( l==-1 || r1-l1 > r-l){
                l=l1,r=r1;
            }
        }
        if(l==-1) cout<<"-1
";
        else
        cout<<l <<" "<<r <<"
";
    }
}