#include<iostream>

using namespace std;

void left_rotate(int arr[],int n){

    int temp= arr[0];

    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;

    
    cout<<"the new array will be ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    left_rotate(arr,n);


}