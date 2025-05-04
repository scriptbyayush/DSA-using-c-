#include<iostream>

using namespace std;


class Complex{

    public:
    int real,img;

    void get(){

        cin>>real>>img;
    }

    void display(){

        cout<<"real : "<<real<<endl<<"img : "<<img<<endl;
    }

    Complex add(Complex c){

        Complex temp;

        temp.real=real+c.real;
        temp.img=img+c.img;

        return temp;
    }

    void conj(){


        cout<<real<<"-"<<img<<"i"<<endl;
    }



};


int main(){

    Complex c1,c2,result;

    cout<<"Enter the real and img for c1: "<<endl;
    c1.get();
    cout<<c1.real<<" "<<c1.img<<endl;

    cout<<"Enter the real and img for c2: "<<endl;
    c2.get();
    cout<<c2.real<<" "<<c2.img<<endl;


    result=c1.add(c2);


    result.display();


    cout<<"conj of c1"<<endl;
    c1.conj();




    return 0;
}