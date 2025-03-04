#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll i,j,k,t,n,m,f,q;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int pop= 0;
        for(auto ch : s){
            if(ch =='1') pop++;
        }
        int zero = s.length()-pop;
        if(abs(zero-pop)<=1){
            bool order = true;
            for(i=1; i<s.length(); i++){
                if(s[i-1]==s[i]){
                    order = false;
                    break;
                }
            }
            if(order)cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
            cout<<zero<<pop<<" "<<endl;
            int diff = abs(zero - pop)-1;
            cout<<diff<<endl;
            if(diff>2) cout<<3<<endl;
            else cout<<2<<endl;
        }
       
    }
    
    return 0;
}
