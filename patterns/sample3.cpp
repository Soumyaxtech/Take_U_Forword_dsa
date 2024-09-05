#include<iostream>

using namespace std;

void revTriangl(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void numRevTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    revTriangl(n);
    numRevTriangle(n);
}