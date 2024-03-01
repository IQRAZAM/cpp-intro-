/*#include<iostream>
using namespace std;
int main(){
   int a  , b ;
   cout<<"enter the value of a";
   cin>>a;
   cout<<"enter the value of b";
   cin>>b;
   cout<<"\n the sum of a and b is "<<a+b;
   cout<<"\n the subtraction of a and b is "<<a-b;
   cout<<"\n the multiplication of a and b is "<<a * b;
   cout<<"\n the division of a and b is "<<a/b;
    cout<<"\n the value of a is smaller than  to b "<<(a<b) ;
   
    return 0;
}*/
//********Q1***********
/* #include<iostream>
 using namespace std;
 int main(){
    int i;
    cout<<"enter a number"; 
    cin>>i;
    if(i%2==0){
        cout<<"the number you entered is an even number"<<endl;
    }else{
        cout<<"the number an odd one !";
    }
 return 0;
 }*/
 //***********Q2**********
 /*#include<iostream>
 using namespace std;
 int main(){
    int i;
    cout<<"Enter your percentage plz "<<endl;
    cin>>i;
    if(i>=95){
        cout<<" Congratulations!!you got an A+ "<<endl;
    }else if(i>=80){
        cout<<"you got an A,well done! "<<endl;
    }else if(i>=60){
        cout<<"you got a B"<<endl;
    }else{
        cout<<"you passed it"<<endl;
    }
 }*/
 //**********   Q3*****************
/*#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter your fvrt alphabet to know if it's vowel or not"<<endl;
    cin>>alpha;
    switch(alpha){
        case 'a':
        cout<<"you got a vowel"<<endl;
        break;
        case 'e':
        cout<<"you got a vowel"<<endl;
        break;
        case 'i':
        cout<<"you got a vowel"<<endl;
        break;
        case 'o':
        cout<<"you got a vowel"<<endl;
        break;
        case 'u':
        cout<<"you got a vowel"<<endl;
        break;
        default:
        cout<<"its a consonant";
        

    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int x , n;
    cout<<"Enter your nuber to get its table"<<endl;
    cin>>n;
    for(x=1; x<=10;x++){
        cout<<n;
        cout<<" * ";
        cout<<x;
        cout<<" =  ";
        cout<<n*x;
        cout<<endl;

        
        
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
 int sum(int a, int b);
 int multiplication(int a , int b);
  int subtraction(int a , int b);
  float division(float a , float b);
int main(){
    int num1 , num2;
    cout<<"enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"enter the value of num2 "<<endl;
    cin>>num2;
    cout<<"so the value of sum of num1 and num2 is "<<sum(num1 ,num2)<<endl;
    cout<<"so the multipluactio of two numbers is given by "<<multiplication(num1,num2)<<endl;
    cout<<"so if we subtract two digits given above we goinna get "<<subtraction(num1, num2)<<endl;
    cout<<"so the division of two numbers will be "<<division(num1 , num2 )<<endl;
    return 0;
}
 int sum(int a, int b){
  int c= a+b;
  return c;
}
 int multiplication (int a , int b){
    int c= a * b;
  return c;
}
int subtraction(int a , int b){  
    int c= a - b;
  return c;}
 float division(float a , float b){
    float c= a / b;
  return c;
}*/
//**********swap with values*********
/*#include<iostream>
using namespace std;
swap(int a,int b){
    int t = a ;
    a = b ;
    b = t;
}
int main(){
    int x= 23;
    int y = 55;
  cout<<"the value of x is " <<x<<endl<<"the value of y is "<<y<<endl;
  swap(x , y);
  cout<<"the value of x is " <<x<<endl<<"the value of y is "<<y<<endl;
  return 0;
}*/
//**********swap with reference ********
/*#include<iostream>
using namespace std;
 void swapRef(int &a,int &b){
    int t = a ;
    a = b ;
    b = t;
};
int main(){
    int x= 23;
    int y = 55;
  cout<<"the value of x is " <<x<<endl<<"the value of y is "<<y<<endl;
  swapRef( x , y);
  cout<<"the value of x is " <<x<<endl<<"the value of y is "<<y<<endl;
  return 0;
}*/
/*#include<iostream>
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
}*/
#include<iostream>
using namespace std;
int main(){
int arr
return 0;
}
