#include<iostream>

using namespace std;

void starRectangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cout<<"enter number of patterns ";// no of patterns
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n; // two diff patern for diff values of n
        starRectangle(n);
    }
}