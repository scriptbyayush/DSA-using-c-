#include <iostream>
#include <type_traits>

using namespace std;

struct Node{
    int data;
    Node *next;
};

class LinkedList
{

    private:
    Node *head;

    public:
    LinkedList() : head(nullptr){}

    void insertAtBeginning(int value){

        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=head;
        head=newNode;

        return;
    }

    void insertAtEnd(int value){

        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=nullptr;

        if(head==nullptr)
        {

            head=newNode;
        }else{

            Node *temp=head;
            while(temp->next!=nullptr){

                temp=temp->next;
            }
            temp->next=newNode;
        }

        return;
    }


    void insertAfter(int value,int targetValue){

        Node *temp=head;
        while(temp!=nullptr&&temp->data!=targetValue)
        {

            temp=temp->next;
        }

        if(temp==nullptr)
        {

            cout<<"not found: "<<targetValue<<endl<<endl;
            return;
        }

        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=temp->next;
        temp->next=newNode;

        return;
    }

    void insertBefore(int value,int targetValue)
    {

        if(head==nullptr)
        {

            cout<<"emptyyy"<<endl;
            return;
        }

        if(head->data==targetValue)
        {

            insertAtBeginning(value);
            return;
        }

        Node *temp=head;
        Node *prev=nullptr;

        while(temp!=nullptr&&temp->data!=targetValue)
        {
            prev=temp;
            temp=temp->next;
        }

        if(temp==nullptr)
        {
            cout<<"not found : "<<targetValue<<endl<<endl;
        }
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=temp;
        prev->next=newNode;


        return;
    }

    void display(){

        if(head==nullptr)
        {

            cout<<"emptyyy";
            return;
        }
        Node *temp=head;
        while(temp!=nullptr){

            cout<<temp->data<<endl<<endl;

            temp=temp->next;
        }

        return;
    }


};

int main()
{

    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.insertAtBeginning(5);

    list.insertAfter(15,10);

    list.insertBefore(25,30);

    list.display();

    return 0;
}