# include<iostream>

using namespace std;

int find_smallest_sec_smallest(int b[],int a){
    int min = b[0];           // min initialized to array 1st element 
    int sec_min = INT8_MAX ;        // sec_min initialized at max value of int
    for(int i=1;i<a;i++){
        if(b[i]<min ){ // compareing
            sec_min = min;       
            min = b[i];
        }
        else if(b[i]<sec_min && b[i]!=min){
            sec_min = b[i];
        }
    }
    cout << "the smallest element is " << min<<"\n";
    return sec_min;
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = find_smallest_sec_smallest(arr,n);

    cout<<"the second smallest element is "<<result;
}