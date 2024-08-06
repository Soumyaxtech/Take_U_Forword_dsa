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


// void printName(){
//         cout<<"Hey!Soumyajit";
//     }
// int main(){
//     printName();
//     return 0;
// }

//      PASS BY VALUE IN FUNCTION .....................


// void addFive(int n){

//     cout<<n<<endl;
//     n=n+5;
//     cout<<n<<endl;
//     n=n+5;
//     cout<<n<<endl;
// }
// int main(){

//     int n=10;   // 1st 87 no line execution start --> 88(call the function)
//     addFive(n); // then 79(print 10)-->81(print 15)-->83(print 20)
//     cout<<n;    // then 89 (but print 10 insted of 20 ) as original value won't pass
//     return 0;   // here a copy of the number pass so original n remain same (10) 
// }               // this is called pass by value


// PASS BY REFERENCE IN FUNCTION ...................................


void addFive(int &n){   // (&) IT TAKES THE ADDRESS OF ORIGINAL n 
                        // so value changes ans 10,15,20,20
    cout<<n<<endl;
    n=n+5;
    cout<<n<<endl;
    n=n+5;
    cout<<n<<endl;
}
int main(){

    int n=10;
    addFive(n);
    cout<<n;
}   


