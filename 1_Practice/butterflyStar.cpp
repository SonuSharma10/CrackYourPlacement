#include<iostream>

using namespace std;

int main(){
    int i, n,j,k;
    cout<<"Enter the size of butterfly : ";
    cin>>n;
    for (i = 1; i<=n/2;i++){
        for(j = 1; j<=i; j++){
            cout<<" * "; 
        }
        for(k = j; k <= abs(n-i); k++){
            cout<<"   ";
        }
        for(j = k; j<=n; j++){
            cout<<" * ";
        }
        cout << "\n";
    }

    for(i;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<< " * ";
        }
        for(k= 0;k<n-2*(j-1);k++){
            cout<< "   ";
        }
        for(j = j+k; j<=n; j++){
            cout<<" * ";
        }
    cout<<"\n";
    }

    // cout<<n;
    return 0;
}
