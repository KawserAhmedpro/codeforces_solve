#include<iostream>
using namespace std;

struct node
{
    int data;
    node*next;
};

class linkedlist{
    node*head;
    public:
    linkedlist() : head(NULL){}

    void insertAtBiginning(int value)
   {
    node*newnode=new node();
    newnode->data=value;
    newnode->next=head;
    head= newnode;


   }



void display() {
    if(!head){
        cout<<"list is empty";
        return;
    }

    node*temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<< endl;
}
};

int main(){
    linkedlist list1;

    list1.insertAtBiginning(10);
    list1.insertAtBiginning(20);
    list1.insertAtBiginning(30);
    list1.display();
    return 0;

}