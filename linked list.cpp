#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(){
        data=0;
        next= NULL;
    }
};


int main(){
    node *head;
    node *one= NULL;
    node *two= NULL;
    node *three= NULL;
    

    one = new node();
    two = new node();
    three = new node();


    one->data = 1;
    two->data = 2;
    three->data = 3;

    head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;
    node* temp= head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;

}