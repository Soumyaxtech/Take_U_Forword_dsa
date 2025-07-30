#include<iostream>

using namespace std;


void move_zeros_last(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1){
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    }
    else{
            for(int i=j+1;i<n;i++){
                if(arr[i]!=0){
                    int temp= arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

                    j++;
                }
            }

            cout<<"after moving zeros last ";

            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
}


void move_zeros_first(int arr[],int n){
    int j=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1){
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    }
    else{
            for(int i=j-1;i>=0;i--){
                if(arr[i]!=0){
                    int temp= arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;

                    j--;
                }
            }

            cout<<"after moving zeros first  ";

            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
    }
}





int main(){
    int n;
    cout<<"enter number of element in array ";
    cin>> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    move_zeros_last(arr,n);
    move_zeros_first(arr,n);

}