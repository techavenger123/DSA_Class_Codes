#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};
class Linkedlist
{
    private:
    Node* head;
    public:
    Linkedlist()
    {
        head=nullptr;
    }
    void insert_at_beggining(int data)
    {
        Node* new_node=new Node(data);
        new_node->next=head;
        head=new_node;
    }
    void inser_at_end(int data)
    {
        Node* new_node=new Node(data);
        if(head==nullptr)
        {
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
    void display()
    {
        if(head==nullptr)
        {
            cout<<"linkedlist doesnot exist"<<endl;
            return;
        }
        else
        {
            Node* temp=head;
            while(temp!=nullptr)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }

    bool searching(int key)
    {
        if(head==nullptr)
        {
            cout<<"linkedlist doesnot exist"<<endl;
        }
        else
        {
            Node* temp=head;
            while(temp!=nullptr)
            {
                if(temp->data==key)
                {
                    return true;
                }
                temp=temp->next;
            }
            return false;
        }
    }
};

int main()
{
    Linkedlist list1;
    list1.insert_at_beggining(5);
    list1.insert_at_beggining(10);
    list1.inser_at_end(8);
    list1.inser_at_end(7);
    list1.inser_at_end(6);
    list1.display();
    bool sea;
    sea=list1.searching(6);
    cout<<endl<<sea;
    return 0;
}
