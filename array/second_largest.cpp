# include<iostream>

using namespace std;

int find_largest_sec_largest(int b[],int a){
    int max = b[0];           // max initialized to array 1st element 
    int sec_max = 0 ;        // sec_max initialized at 0 
    for(int i=1;i<a;i++){
        if(b[i]>max && b[i]>sec_max){ // compareing
            sec_max = max;       
            max = b[i];
        }
        else if(b[i]>sec_max && b[i]!=max){
            sec_max = b[i];
        }
    }
    cout << "the largest element is " << max<<"\n";
    return sec_max;
}

int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = find_largest_sec_largest(arr,n);

    cout<<"the second largest element is "<<result;
}