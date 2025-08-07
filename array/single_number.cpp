#include<iostream>

using namespace std;

// all other are twice in array....................

int single_element(int arr[],int n){
    int xor1 =0;
    for(int i=0;i<n;i++){
        xor1 = xor1^arr[i];
    }
    return xor1;
}

// all others are thrise in array........................

int single_element1(int arr[],int n){
    int xor1 =0;
    int xor2=0;
    for(int i=0;i<n;i++){
        xor1 = (xor1^arr[i]) & ~xor2;
        xor2 = (xor2^arr[i]) & ~xor1;
    }
    return xor1;
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];
    int arr1[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int result = single_element(arr,n);
    int result1 =single_element1(arr1,n);

    cout<<"the single element is "<<result<<endl;
    cout<<"the single element is "<<result1;

}