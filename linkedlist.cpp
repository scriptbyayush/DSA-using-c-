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

    void removeFromStart()
    {
        if(head==nullptr)
        {

            cout<<"emptyyy"<<endl;
            return;
        }

        Node *temp=head;
        head=head->next;
        delete temp;

        return;
    }


    void removeFromEnd()
    {
        if(head==nullptr)
        {

            cout<<"emptyy"<<endl;
            return;
        }

        Node *temp=head;
        Node *prev=nullptr;

        while(temp->next!=nullptr)
        {

            prev=temp;
            temp=temp->next;
        }

        prev->next=nullptr;

        delete temp;

        return;
    }

    void removeNode(int targetValue)
    {
        if(head==nullptr)
        {
            cout<<"emptyy"<<endl;
            return;
        }

        if(head->data==targetValue)
        {

            removeFromStart();
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

            cout<<"not found"<<targetValue<<endl;
            return;
        }

        prev->next=temp->next;

        delete temp;

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

            cout<<temp->data<<endl;

            temp=temp->next;
        }

        cout<<endl<<endl;

        return;
    }


};

int main()
{

    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtEnd(60);


    // list.display();

    list.insertAtBeginning(5);

  //  list.display();

    list.insertAfter(15,10);

    //list.display();

    list.insertBefore(25,30);

    list.removeFromStart();

    list.removeFromEnd();

    list.removeNode(25);
    list.removeNode(10);


    list.display();

    return 0;
}