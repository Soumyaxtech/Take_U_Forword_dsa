# include<iostream>

using namespace std;

int find_largest(int b[],int a){
    int max = b[0];         // max initialized to array 1st element 
    for(int i=1;i<a;i++){
        if(b[i]>max){       // compareing 
            max = b[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = find_largest(arr,n);

    cout<<"the largest element is "<<result;
}