#include<iostream>

using namespace std;

// brute force solution..............................

int find_missing(int arr[],int n){

    for(int i=1;i<=n;i++){
        int flag =0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag++;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

// optimal solution .....................................

int find_missing_optimal(int arr[],int n){

    int sum,s2;
    s2=0;
    sum = (n*(n+1))/2;

    for(int i=0;i<n-1;i++){
        s2=s2+arr[i];
    }

    return (sum-s2);
}

// more optimal .....................................


int find_missing_xor(int arr[],int n){

    int xor1 =0;
    int xor2 =0;
    for(int i=0;i<n-1;i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^n;

    return (xor1^xor2);

}



int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n-1];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    int result = find_missing(arr,n);

    cout<<"the missing element is "<<result<<endl;

    int result1 = find_missing_optimal(arr,n);

    cout<<"the missing element is "<<result1<<endl;

    int result2 = find_missing_xor(arr,n);

    cout<<"the missing element is "<<result2;
}