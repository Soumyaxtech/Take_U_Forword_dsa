# include<iostream>

using namespace std;

int find_smallest(int b[],int a){
    int min = b[0];         // min initialized to array 1st element 
    for(int i=1;i<a;i++){
        if(b[i]<min){       // compareing 
            min = b[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = find_smallest(arr,n);

    cout<<"the smallest element is "<<result;
}