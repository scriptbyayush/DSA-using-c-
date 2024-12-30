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
    LinkedList():head(nullptr){}

    void insert(int value)
    {
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=nullptr;

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

        return;
    }

    void reverse()
    {
        Node *prev=nullptr;
        Node *next=nullptr;
        Node *current=head;

        while(current!=nullptr)
        {

            next=current->next;
            current->next=prev;
            prev=current;
            current=next;

        }

        head=prev;

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

};

int main()
{

    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.display();

    cout<<"after reverse :"<<endl<<endl;

    list.reverse();
    list.display();

    return 0;
}