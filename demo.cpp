#include<iostream>
using namespace std;

void d(int arr[]){

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
}



int main(){

int n=3;
int arr[n]={2,3,4};

d(arr);

cout<<arr[0];

cout<<arr[1];

cout<<arr[2];


    return 0;
}