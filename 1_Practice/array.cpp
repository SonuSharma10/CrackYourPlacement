#include<iostream>

using namespace std;

void printarr(int arr[],int n);

int main(){

    int arr[]={1,2,4,5,7,8,9,9,8,76,5,0,3,3,3,3};

    int n = sizeof(arr)/sizeof(int);

    // printarr(arr,n);
    // cout<<*(arr+n)<<endl;

    int a = 10;
    int &b = a;
    int c = 99;

    int *ptr =&c;


    cout<< &a<< "\t "<< b<< "\t"<<&c<<endl;
    cout << *ptr<<"\t"<<ptr<<"\t"<<sizeof(ptr)<<endl;
}

void printarr(int number[],int size){

    for(int i=0; i<size;i++){
        cout<<number[i]<<",";
    }
}