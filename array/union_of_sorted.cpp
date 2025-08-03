#include<bits/stdc++.h>

#include<iostream>

using namespace std;


vector<int>unions(vector<int>&num1,vector<int>&num2){
        int n = num1.size();
        int m = num2.size();
        int i=0;
        int j=0;

        vector<int>result;

        while(i<n && j<m){
            if(num1[i]<=num2[j]){
                if(result.size()==0 || result.back()!=num1[i]){
                    result.push_back(num1[i]);
                }
                i++;
            }
            else{
                if(result.size()==0 || result.back()!=num2[j]){
                    result.push_back(num2[j]);
                }
                j++;
            }
        }

        while(i<n){
            if(result.size()==0 || result.back()!=num1[i]){
                    result.push_back(num1[i]);
                }
                i++;
        }
        while(j<m){
            if(result.size()==0 || result.back()!=num2[j]){
                    result.push_back(num2[j]);
                }
                j++;
        }

        return result;
}

int main() {
    int n, m;

    cout << "Enter size of nums1: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of nums1: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums1[i];
    }

    cout << "Enter size of nums2: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements of nums2: ";
    for (int i = 0; i < m; ++i) {
        cin >> nums2[i];
    }

    vector<int> result = unions(nums1, nums2);

    cout << "union: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}