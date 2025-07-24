# include<iostream>
#include<set>
using namespace std;

void unique(int b[],int a){     // brute force approach using set data structure
    set<int>st;

    for(int i=0;i<a;i++){
        st.insert(b[i]);
    }
    cout<<"unique elements are ";
    for(auto j : st){
        cout<<j<<" ";
    }
    cout<<"\n";
}

int unique2(int b[],int a){
    int i=0;
    for(int j=1;j<a;j++){
        if(b[j]!=b[i]){
            b[i+1]=b[j];
            i++;
        }
    }
    return i;
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unique(arr,n);
    int result = unique2(arr,n);
    cout<<result;

}
    