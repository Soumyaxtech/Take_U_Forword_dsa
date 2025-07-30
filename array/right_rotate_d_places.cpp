#include<iostream>

using namespace std;

void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void left_rotate(int arr[],int n,int d){
        d= d%n;
        reverse(arr,0,n-1);
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);

        cout<<"the output array will be ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

}






int main(){
    int n;
    int d;
    cout<<"enter number of element in array ";
    cin>> n;
    cout<<"enter the rotating term ";
    cin>> d;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    left_rotate(arr,n,d);


}