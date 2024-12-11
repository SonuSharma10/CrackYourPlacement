#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int i, n,j,k;
    cout<<"Enter the size of butterfly : ";
    cin>>n;
    for (i = 1; i<=ceil(n/2.0);i++){
       for(j = 1; j<=ceil(n/2.0)-i;j++){
        cout <<"   ";
       }
       for(j = 1; j<=2*i - 1; j++){
        cout<< " * ";
       }
       cout<<"\n";
    }

    for(i;i<=n;i++){
         for(k= 1;k<i-n/2;k++){
            cout<< "   ";
        }
        for(j=1;j<=2*(n-i)+1;j++){
            cout<< " * ";
        }
       
    cout<<"\n";
    }

    // cout<<n;
    return 0;
}
