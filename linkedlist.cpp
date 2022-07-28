#include <iostream>
using namespace std;
class Node
{
	Node *next;
	int data;
	public:
		Node()
		{
			data=-1;
			next=NULL;
		}
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
		Node(Node*next)
		{
			this->next=next;
			this->data=-1;
		}
		Node(int data,Node *next)
		{
			this->data=data;
			this->next=next;
		}
		//getters
		int getData()
		{
			return data;
		}
		Node *getNext()
		{
			return this->next;
		}
		//setters
		void setData(int data)
		{
			this->data=data;
		}
		void setNext (Node *next)
		{
			this->next=next;
		}
};
class LinkedList
{
	private:
		Node *head;
	public:
		LinkedList()
		{
			head=NULL;
		}
		LinkedList(int val)
		{
			InsertAtLast(val);
		}	
};
 bool IsEmpty()
 {
 {
 	return(head==Null)?true:false;
 }
 void InsertAtBeginning(int val)
 {
 	Node *t=new Node(val);
 	new Node-> setNext(t);
 	head=t;
 }
}
int getlength()
{
	Node *temp=head;
	int count=0;
	while(temp!=Null)
	{
		count++;
		temp=temp->getNext();
	}
}
 bool removeFromBeginning()
 {
 	if(IsEmpty())
	 {
 		return false;
	 }
	 else
	 {
	 	if(getlength==1){
	 		delete head;
	 		head=Null;
		 }
		 else
		 {
		 	Node *t=new Node;
		 	Node *t=head->getNext();
		 	delete head;
		 	head=t;
		 }
	 	
 }
 void insertAtLast(int val)
 {
    Node *newNode=new Node(val);
    if(IsEmpty())
	{
    	head=newNode;
	}
	else 
	{
		Node *temp=head;
		while(temp->getNext() != Null)
		{
		  temp=temp->getNext();
		}
		temp->setNext(newNode);
	}
 }
 void removeFromLast()
 {
 	if(IsEmpty());
 	return false;
 	Node *temp=head;
 	while(temp->getNext()!=Null)
 	temp=temp->getNext();
 	delete temp;
 	temp=Null;
 	return true;

 }
 Node *getFirstElement()
 {
 	return head;
 }
 Node *getLastElement()
 {
 	Node *temp;
 	temp=head;
 	while(temp->getNext()!=Null)
 	{
 		temp=temp->getNext();
	}
	return temp;
 }
 void print()
 {
 	Node *temp;
 	temp=head;
 	while(temp!=Null)
 	{
 		cout<<temp->getData()<<endl;
 		temp=temp->getNext();
	 }
 }
