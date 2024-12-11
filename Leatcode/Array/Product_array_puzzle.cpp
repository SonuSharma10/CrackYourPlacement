// Given an array, arr[], construct a product array, pro[] where each element pro[i] is the product of all elements in arr except arr[i]. Return this resultant array, pro[].

// Examples:

// Input: arr[] = [10, 3, 5, 6, 2]
// Output: [180, 600, 360, 300, 900]
// Explanation: For i=0, pro[i] = 3*5*6*2 = 180.
// For i=1, pro[i] = 10*5*6*2 = 600.
// For i=2, pro[i] = 10*3*6*2 = 360.
// For i=3, pro[i] = 10*3*5*2 = 300.
// For i=4, pro[i] = 10*3*5*6 = 900.


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Complete back-end function template for C++


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        
        if (n==1){
            cout << 0;
        }
        else if (n==2){
            
            cout <<arr[1]<<" "<<arr[0];
        }
        else {
            long long k = n,counter=0;
            vector<long long> arr2;
            while(k > 0){
            long long product = 1;
            
            for(int i = 0; i<n; i++){
                if (counter == i)
                continue;
            product = product * arr[i];
            }
            arr2.push_back(product);
            counter++;
            k--;
            }
            for (int i=0; i<n;i++){
                cout <<arr2[i]<<" ";
            }
            
        }
    }
};


//{ Driver Code Starts.

int main() {

    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // To ignore newline character after t input

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<long long> vec = obj.productExceptSelf(arr); // Function call

        for (int i = 0; i < vec.size(); i++) { // Print the output
            cout << vec[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends