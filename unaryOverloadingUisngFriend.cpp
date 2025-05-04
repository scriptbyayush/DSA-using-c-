#include<iostream>

using namespace std;


class Unary{

    public:

    int x,y;

    Unary(int a,int b){
        x=a;
        y=b;
     
    }

    void display(){


        cout<<x<<" "<<y<<endl;
    }

    friend void operator-(Unary &obj);

   
};

void operator-(Unary &obj)
{

    obj.x=-obj.x;
    obj.y=-obj.y;
}

int main(){

    Unary u(10,20);

    -u;

    u.display();


    return 0;
}