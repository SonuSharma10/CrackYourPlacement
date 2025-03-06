#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll i,j,k,t,n,m,f,q, c;
    cin >> t;
    while(t--){
        cin >> n>>c;
        string s;
        cin>>s;
        
        vector<int>freq(5,0);
        for(auto &i : s){
            int m = i -'A';
            freq[m]++; 
        }

         for(auto p : freq){
            cout<<p<<"  ";
        }
        sort(freq.begin(), freq.end());
        int ans = 0;
        int sum = 0;
        for(auto i : freq){
            sum += i;
            int cost = (sum*(sum+1)) / 2;
            if(sum<c && cost<=c){
                ans = max(ans,cost);
            }
            else{
                ans+=c;
            }
        }



       
        cout<<ans<<endl;
    }
    
    return 0;
}
