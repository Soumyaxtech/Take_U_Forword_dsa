#include<iostream>


using namespace std;


int max_concicutive_onces(int arr[],int n){
    int max = 0;
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count =0;
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

    int result = max_concicutive_onces(arr,n);

    cout<<"the number of onces occure one after is  "<<result;
}