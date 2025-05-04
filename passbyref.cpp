#include<iostream>
using namespace std;

void display(int arr[]){

    arr[0]=10;

}

int displaybyref(int arr[]){
    
    arr[0]=20;
   
    return 0;

}



int main(){

    cout<<"pass by value (array)"<<endl;


    int arr1[]={1,2,3,};

    display(arr1);

cout<<arr1[0]<<endl;


    cout<<"pass by refference (array)"<<endl;


    int arr2[]={1,2,3,};

    displaybyref(arr2);
    cout<<"modified :"<<arr2[0]<<endl;






}