#include<iostream>

using namespace std;

void sidePyramid(int n){
    for(int i=0;i<n;i++){
        int star =i+1;
        if(i>(n/2)){
            star = n-i;
        }
        for(int j=0;j<star;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter num of rows ";
    cin>>n;
    sidePyramid(n);
}