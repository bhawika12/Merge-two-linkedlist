#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};

class node1
{
    public:
    node *temp;
    node *t;
    node *s1=NULL;
    node *s2=NULL;
    node *s3=NULL;
    node *newnode;
    void createnode()
    {
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
    }
    void insertion()
    {
        int n1,n2;
        cout<<"enter the numbers of elements";
        cin>>n1;
        for(int i=0;i<n1;i++)
        {
            createnode();
            if(s1==NULL)
            {
                s1=newnode;
            }
            else
            {
                temp=s1;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=newnode;
            }
        }
        cout<<"enter the number of elements for 2 linked list";
        cin>>n2;
        for(int i=0;i<n2;i++)
        {
            createnode();
            if(s2==NULL)
            {
                s2=newnode;
            }
            else
            {
                temp=s2;
                while(temp->next!=NULL)
                    temp=temp->next;
                temp->next=newnode;
            }
        }
    }
    void merging()
    {
        if(s1->data<s2->data)
        {
            s3=s1;
            s1=s1->next;
        }
        else
        {
            s3=s2;
            s2=s2->next;
        }
        t=s3;
        while(s1!=NULL && s2!=NULL)
        {
            if(s1->data<s2->data)
            {
                t->next=s1;
                s1=s1->next;
                t=t->next;
            }
            else
            {
                t->next=s2;
                s2=s2->next;
                t=t->next;
            }
        }
        if(s1!=NULL)
        {
            t->next=s1;
        }
        else
        {
            t->next=s2;
        }
    }
    void display()
    {
        temp=s3;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    node1 n;
    n.insertion();
    n.merging();
    n.display();
}
