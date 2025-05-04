#include<iostream>

using namespace std;


class Unary{

    int x,y;
    public:

    Unary(int a,int b){
        x=a;
        y=b;
     
    }

    void display(){


        cout<<x<<" "<<y<<endl;
    }

    void operator-(){
        x=-x;
        y=-y;

    }

};

int main(){

    Unary u(10,-20);

    -u;

    u.display();


    return 0;
}