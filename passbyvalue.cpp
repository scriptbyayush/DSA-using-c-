#include<iostream>
using namespace std;

void passbyvalue(int num1, string s1){

    num1+=100;
    s1+=" world";

    cout<<endl<<"inside pass by value : "<<endl<<num1<<endl<<s1<<endl;


}

void passbyreference(int &num2, string &s2,int arr[]){

    num2+=100;
    s2+=" world";
    arr[0]=100;

    cout<<endl<<"inside pass by reference : "<<endl<<num2<<endl<<s2<<endl<<arr[0]<<endl;



}

int main(){

    int num1=10;
    int num2=50;
    string s1="hello";
    string s2="hello";

    int arr[5];

    for(int i=0;i<5;i++){

        cin>>arr[i];
    }

    passbyvalue(num1,s1);
    passbyreference(num2,s2,arr);

    cout<<endl<<"after pass by value"<<endl<<num1<<endl<<s1<<endl;

    cout<<endl<<"after pass by reference"<<endl<<num2<<endl<<s2<<endl;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;

    }
    
    
    return 0;
}