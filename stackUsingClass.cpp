#include<iostream>

using namespace std;



class Stack{

    public:
        int *arr;
        int size,top;

        Stack(int s){
            size=s;
            arr=new int[size];

            top=-1;

        }

        ~Stack(){

            delete[] arr;

        }

        void push(int value)
        {
            if(top<size-1)
            {
                arr[++top]=value;
                cout<<"Pushed: "<<value<<endl;
            }else{
                cout<<"overflow";
            }
        }
        void pop(){

            if(top<0){

                cout<<"underflow"<<endl;
            }else{

                cout<<"Poped: "<<arr[top--]<<endl;
            }
        }

        void display(){

            for(int i=0;i<=top;i++)
            {
                cout<<arr[i]<<endl;
            }
        }


};

int main(){

    Stack s1(10);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    s1.display();

    s1.pop();
    s1.display();



    return 0;
}