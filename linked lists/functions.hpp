#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *link;

		Node(int info){
			this->data = info;
			this->next = nullptr;
		}

};

class LinkedList{
	public:
		Node *head;
		Node *tail;

		LinkedList(){
			this->head = nullptr;
			this->tail = nullptr;
		}

		void insert_node(int info){
			Node* node = new Node(info);
			if(!this->data)
				this->head = node;
			else
				this->tail->next = node;

			this->tail = node;		 
		}

		void print(LinkedList* head)
		{
			LinkedList* node = head;
			while(node)
			{

				cout<<node->data<<"\n";
				node = node->next;
			}	
		}
	
		void insertAtTail(Node* head,int data)
		{
			Node* node = head;
			Node* new_node = new Node(data);
			if(head == nullptr)
                		head = new_node;
            		else    
            		{   
				while(node->next != nullptr)
                    		node = node->next;
            
                		node->next = new_node;
                		tail = node;
            		}
			 
		}
}
