#include<iostream>

using namespace std;


void pattern12(int n){
    int space = 2*(n-1);
    for(int i=0;i<n;i++){
        // for number
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        // for space
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        // for number
        for(int j=i;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;
        space = space-2;
    }
}


int main(){
    int n;
    cout<<"enter value for n ";
    cin>>n;
    pattern12(n);
}