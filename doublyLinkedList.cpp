#include<iostream>

using namespace std;

struct Node{

    int data;
    Node *next;
    Node *prev;

};

class DoublyLinkedList
{

    private:
    Node *head;

    public:
    DoublyLinkedList():head(nullptr){}

    void append(int value)
    {
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=nullptr;
        newNode->prev=nullptr;

        if(head==nullptr)
        {
            head=newNode;
            return;
        }
        Node *temp=head;
        while(temp->next!=nullptr)
        {

            temp=temp->next;
        }

        temp->next=newNode;
        newNode->prev=temp;


        return;
    }


    void display()
    {
        Node *temp=head;
        while(temp!=nullptr)
        {

            cout<<temp->data<<endl;
            temp=temp->next;
        }

        return;
    }

    void reverse()
    {

        Node *temp=head;
        while(temp->next!=nullptr)
        {

            temp=temp->next;
        }

        while(temp!=nullptr)
        {

            cout<<temp->data<<endl;
            temp=temp->prev;
        }

        return;
    }

};


int main()
{

    DoublyLinkedList list;

    list.append(10);

    list.append(20);

    list.append(30);

    list.append(40);


    list.display();

    cout<<endl<<"after reverse:"<<endl;

    list.reverse();

    return 0;
}