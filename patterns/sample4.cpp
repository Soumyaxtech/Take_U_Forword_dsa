#include<iostream>

using namespace std;

void fullTriangl(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void revFullTriangl(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*(n-i))-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}



int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    fullTriangl(n);
    revFullTriangl(n);
}