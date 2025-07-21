# include<iostream>

using namespace std;

int find_sorted_or_not_acending(int b[],int a){
    
    for(int i=0;i<a-1;i++){
        if(b[i+1]>=b[i]){

        }
        else{
            return false;
        }
    }
    return true;

}

int find_sorted_or_not_desending(int b[],int a){
    
    for(int i=0;i<a-1;i++){
        if(b[i+1]<=b[i]){

        }
        else{
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    int a;
    int result;
    cout<<"enter number of element in array ";
    cin>> n;
    cout<<"enter your case ";
    cin>>a;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    switch (a)
    {
    case 1:
         result = find_sorted_or_not_acending(arr,n);
        break;
    default:
         result = find_sorted_or_not_desending(arr,n);
        break;
    }

    if(result){
        cout<<"array is sorted  ";
    }
    else{
        cout<<"array not sorted  ";
    }

    
}