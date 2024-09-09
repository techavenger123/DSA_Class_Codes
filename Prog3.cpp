#include <iostream>
using namespace std;
class Node
{
public:
    int coef;
    int exp;
    Node* next;
    Node(int co,int ex)
    {
        coef=co;
        data=ex;
        next=nullptr;
    }
};

class singlell
{
private:
    Node* head;
public:
    singlell()
    {
        head=nullptr;
    }
    void insert_end(int co,int ex)
    {
        Node* newnode=new Node(val,ex);
        if(head==nullptr)
        {
            head=newnode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display()
    {
        Node* temp=head;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    Node* gethead()
    {
        return head;
    }
    void merge_list(Node* list1,Node* list2)
    {
        singlell result;
        while(list1!=nullptr and list2!=nullptr)
        {
            if(list1->data<list2->data)
            {
                result.insert_end(list1->data);
                list1=list1->next;
            }
            else
            {
                result.insert_end(list2->data);
                list2=list2->next;
            }
        }
        while(list1!=nullptr)
        {
            result.insert_end(list1->data);
            list1=list1->next;
        }
        while(list2!=nullptr)
        {
            result.insert_end(list2->data);
            list2=list2->next;
        }
        result.display();
    }
};

int main()
{
    singlell list1,list2;
    list1.insert_end(1);
    list1.insert_end(3);
    list1.insert_end(5);
    list1.insert_end(7);

    list2.insert_end(2);
    list2.insert_end(4);
    list2.insert_end(8);
    list2.insert_end(10);
    list2.insert_end(15);
    list2.insert_end(20);

    list1.display();
    list2.display();

    cout<<" merging the two linklists"<<endl;
    list1.merge_list(list1.gethead(),list2.gethead());
}
