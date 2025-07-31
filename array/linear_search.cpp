#include<iostream>


using namespace std;

// for 1st occurance .................................

int find_element(int arr[],int n,int d){

    for(int i=0;i<n;i++){
        if(arr[i]==d){
            return i;
        }

    }
    return -1;
}


int main(){
    int n; 
    int d;
    cout<<"enter number of element in array ";
    cin>> n;
    cout<<"element to find ";
    cin>>d;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = find_element(arr,n,d);

    if(result>=0){
        cout<<"element present and the index is "<<result;     
    }
    else{
        cout<<"element not present ";
    }
}