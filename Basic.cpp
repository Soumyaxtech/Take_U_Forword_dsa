#include<iostream>

using namespace std;

// SWITCH STATEMENT...............

/* QUESTION  TAKE DAY NO AND PRINT THE DAYS */

// int main(){
//     int day;
//     cin>>day;
//     switch(day){
//         case 1:
//             cout<<"MONDAY";
//             break;
//         case 2:
//             cout<<"TUESDAY";
//             break;
//         case 3:
//             cout<<"WEDNESDAY";
//             break;
//         case 4:
//             cout<<"THURSDAY";
//             break;
//         case 5:
//             cout<<"FRIDAY";
//             break;          // BREAK STATEMENT HELPS TO BREAK OUT FROM
//         case 6:             // EVERY CONDITIONAL STATEMENT
//             cout<<"SATURDAY";
//             break;
//         case 7:
//             cout<<"SUNDAY";
//             break;
//         default:
//             cout<<"invalid";
//     }
//     return 0;

// }

// ARRAY ELEMENTS ARE STORED  IN CONTINUOUS MEMORY LOCATION 

// int main(){
//     //2D array
//     int arr[3][5];
//     arr[1][3]=78;
//     cout<<arr[1][3]<<endl;  // o/p 78
//     cout<<arr[2][3];        // gives garbage value as we dont assigned it
    

// }


// int main(){

//     string name = "Soumyajit";
//     int len = name.size();
//     cout<<name[3]<<endl;
//     cout<<name[0]<<endl;
//     cout<<name[len-1]<<endl;
// }

// FUNCTIONS IN DSA ..................................


void printName(){
        cout<<"Hey!Soumyajit";
    }
int main(){
    printName();
    return 0;
}