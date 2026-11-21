#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int even=0,odd=0;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            if(x%2!=i%2){
                if(x%2)
                    even++;
                else odd++;
 
            } 
        }
        if((even +odd)%2==1 || (even!=odd)){
            cout<<"-1
";
        }
        else{
            cout<<even<<"
";
        }
    }
}