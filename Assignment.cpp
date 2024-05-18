//Q1 write a C program that inputs an integer array and checks if all the elments in an array are unique (we cannot find any pair of elemts that are equal ).

   #include<iostream>
using namespace std;

int arr[8];
int sum ;
int main(){
  for(int i=0 ; i<8; i++ ){
    cout<<" enter the value of i " <<endl;
    cin>>arr[i];
    //cout<<arr[i];
  }
  for( int i = 0; i<8; i++ ){
     sum =  sum +  arr[i];
  }
cout<<" so the sum of arrays is "<<sum;
  
    return 0;
}
//Q2
//**********reversing array method#1***************
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
    cout<<"the reverse of the arrays is "<<endl;
    for(int i = n-1; i>= 0; i--){
        cout<<arr[i]<<endl;
    }
return 0;
}
//********reversing an array 2nd Mehod **********
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
 int s = 0 ;
 int e = n-1;
 int arr[n];
 cout<<"enter the value of array"<<endl;
 for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
 }
 while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--;
 }
 for(int i = 0 ; i < n ; i++){
    cout<<arr[i]<<endl;
 }
return 0;
}
//Q3 
#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"enter the value of n "<<endl;
cin>>n;

int arr1[n];
int arr2[n];
cout<<"enter the value of array 1  "<<endl;

    cin>>arr1[n];
cout<<"enter the value of array 2  "<<endl;
    cin>>arr2[n];
    
if(arr1[n] != arr2[n]){
 cout<<"not same ";
    return false;
}else{
    cout<<"same ";
    return true;
}
return 0; 
}
