#include<iostream>
using namespace std;

class Node
{
    public :
        int data;
        Node * next;

    public : 
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* createList(int A[],int n)
{
    Node *head = new Node(A[0]);
    head->next = NULL;

    Node * temp = head;

    int i=1;

    while(i<n)
    {
        Node * t = new Node(A[i]);
        temp->next = t;
        t->next = NULL;
        temp = temp->next;
        i++;

    }
    return head;
}


Node removeDuplicates(Node *head)
{
    // if the list is empty ot have only one element that means one element is always sorted
    if(head== NULL || head->next == NULL)
        return *head;
    // taking two pointer previous ans head
    Node *temp = head->next;
    Node *prev = head;
    

    // iterating through the list until temp become null
    while(temp!=NULL)
    {
        // checking if previous data is equal to temp data that means we have to move temp 
        if(prev->data == temp->data)
        {
            temp=temp->next;
            prev->next = NULL;
        }
        // it will exicute when we have to delete dulicate node
        else if(prev->next != temp)
        {
            prev->next = temp;
            prev = temp;
            temp=temp->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
        
    }
    return *head;
    
}

int main()
{
    int A[] = {2,3,3,4,6,7};
    Node * head = createList(A,6);
    *head = removeDuplicates(head);
    Node *temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}