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

void oneZeroTriangle(int n){
    int start;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter num of rows ";
    cin>>n;
    sidePyramid(n);
    oneZeroTriangle(n);
}