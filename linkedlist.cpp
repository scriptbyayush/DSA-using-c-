#include<iostream>
using namespace std;

struct Node{

    int data;
    Node *next;
};

class LinkedList{

    private:
    Node *head;

    public:
    LinkedList() : head(nullptr){}

    void insertAtBeginning(int value){
        Node *newnode=new Node();

        newnode->data=value;
        newnode->next=head;
        head=newnode;
    }


    void insertAtEnd(int value)
    {

        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=nullptr;

        if(head==nullptr)
        {

            head=newNode;
        }else{

            Node *temp=head;

            while(temp->next!=nullptr)
            {

                temp=temp->next;
            }     
            
            temp->next=newNode;
            }
            return;
    }

   
    void insertAfter(int value,int targetValue){
        Node *temp=head;
        while(temp!=nullptr&&temp->data!=targetValue){
            temp=temp->next;
        }

        if(temp==nullptr){

            cout<<"not fouund: "<<endl<<endl;
            return;
        }

        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=temp->next;
        temp->next=newNode;
    }


    void insertBefore(int value,int targetValue){

        if(head==nullptr)
        {

            cout<<"list is emptyyy"<<endl;
            return;
        }
        if(head->data==targetValue){
            Node *newNode=new Node();
            newNode->data=value;
            newNode->next=head;
            head=newNode;
            return;
        }

        Node *temp=head;
        Node *prev=nullptr;

        while(temp!=nullptr&&temp->data!=targetValue){

            prev=temp;
            temp=temp->next;
        }

        if(temp==nullptr){
            cout<<"not Found: "<<targetValue<<endl<<endl;
        }

        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=temp;
        prev->next=newNode;

        return;
    }


    void display(){

        if(head==nullptr){

            cout<<"emptyyyy"<<endl;
            return;
        }
        Node *temp=head;

        while(temp!=nullptr){

            cout<<temp->data<<endl;
            temp=temp->next;
        }

        return;
    }




};

int main(){
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);

    list.insertAtBeginning(100);
    list.insertAtBeginning(300);

    list.insertAfter(40,10);

    list.insertBefore(200, 100);

    list.display();

    return 0;
}