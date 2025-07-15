#include <iostream>
using namespace std;

// int addFunctionalRecursion(int n) {
//     if (n == 0) {
//         return 0;  // base case returns 0
//     } else {
//         return n + addFunctionalRecursion(n - 1);  // recursive step
//     }
// }



// void add(int n,int sum){
//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     add(n-1,sum+n);
// }


// void factrorial(int n,int factr){
//     if(n<1){
//         cout<<factr;
//         return;
//     }
//     factrorial(n-1,factr*n);

// }


// void f(int i ,int arr[],int n){
// if(i>=n/2){
//     return;
// }
// swap(arr[i],arr[n-i-1]);
// f(i+1,arr,n);
// }




// void f(int i,int arr[],int n){
//     if(i>=n/2){
//         return;
//     }
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);
// }


bool isPalindrome(int i,int arr[],int n){

if(i>=n/2){
return true;
    
}
    if(arr[i]!=arr[n-i-1]){
       
        return false;
    }
  return isPalindrome(i+1,arr,n);

}

int main() {

// print 1 to n sum usimg functional recursion

    // int n;
    // cin >> n;
    // cout << addFunctionalRecursion(n) << endl;
    // return 0;


    // print 1 to n sum using paramatrized way



    // int n;
    // cin >> n;
    // add(n,0);

    // factrorial on n using parametrized way

    // int n;
    // cin >> n;
    // factrorial(n,1);



    // print reverse of an array using recursion

//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     f(0,arr,n);
    
// for(int i=0;i<n;i++){
//         cout<<arr[i]<<"";
//     }

// Check if a string is a palindrome using recursion

int n;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
if (isPalindrome(0,arr,n)){
    cout<<"is palindrime"<<endl;

}else{
    cout<<"is not a plaindrome"<<endl;
}


}