#include<iostream>
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

    void search(int targetValue)
    {

        int count=1;
        int flag=1;

        if(head==nullptr)
        {
            cout<<"emptyy"<<endl;
            return;
        }

        Node *temp=head;

        while(temp!=nullptr)
        {

        
            if(temp->data==targetValue)
            {
                cout<<targetValue<<" found at "<<count<<endl;
                flag=0;
            }
                count++;
            temp=temp->next;
        }
        if(flag==1)
        {
            cout<<targetValue<<"not found "<<endl;
        }

        

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

        cout<<endl<<endl;

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
    list.insert(40);
    list.insert(50);

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(40);
    list.insert(50);

    list.display();

    list.search(40);

    list.search(20);

    return 0;
}