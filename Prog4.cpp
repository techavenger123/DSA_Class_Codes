#include<iostream>
using namespace std;

class Node
{
    Node Prev;
    int data;
    Node *Next;
    Node(int val)
    {
        data=val;
        Next=nullptr;
        Prev=nullptr;
    }
};
class doublyll
{
private:
    Node *head;
public:
    doublyll()
    {
        head=nullptr;
    }
    void travel()
    {
        Node *temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->Next;
        }
    }
    void searching(int key)
    {
        Node *temp=head;
        while(temp!=nullptr)
        {
            if(temp->data==key)
            {
                count<<"key is present";
                return;
            }
            temp=temp->Next;
        }
        cout<<"key is not Present";
        return;
    }
};
int main()
{

}
