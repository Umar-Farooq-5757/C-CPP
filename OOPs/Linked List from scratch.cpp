#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int val){
			data = val;
			next = NULL;
		}
};

class List{
	private:
		Node* head;
		Node* tail;
	public:
		List(){
			head=tail=NULL;
		}
		void push_front(int val){
			Node* newNode = new Node(val);
			if(head == NULL){
				head = tail = newNode;
				return;
			}else{
				newNode->next = head;
				head = newNode;
			}
		}
		void push_back(int val){
			Node* newNode = new Node(val);
			if(head==NULL){
				head = tail = newNode;
				return;
			}else{
				tail->next = newNode;
				tail = newNode;
			}
		}
		void pop_front(){
			if(head!=NULL){
				Node* temp = head;
				head = head->next;
				temp->next = NULL;
				
				delete temp;
				if (head == NULL) {
            		tail = NULL;
        		}
			}
		}
		void pop_back(){
			if(head!=NULL){
				Node* temp = head;
				while(temp->next != tail){
					temp = temp->next;
				}
				
				temp->next = NULL;
				delete tail;
				tail = temp;
			}
		}
		void insert(int val, int pos){
			if(pos<0){
				cout<<"Invalid position.\n";
				return;
			}
			if(pos==0){
				push_front(val);
				return;
			}
			Node* newNode = new Node(val);

			Node* temp = head;
			for(int i=0; i<pos-1; i++){
				if(temp->next == NULL){
					cout<<"Invalid position.\n";
					return;
				}
				temp = temp->next;
			}
				
				newNode->next = temp->next;
				temp->next = newNode;
		}
		int search(int val){
			Node* temp = head;
			if(temp == NULL){
				cout<<"Linked list is empty";
				return -1;
			}
			int count=0;
			while(temp!=NULL){
				if(temp->data == val){
					return count; 
				}
				temp=temp->next;
				count++;
			}
			return -1;
		}
		void printList(){
			Node* temp = head;
			if(temp == NULL){
				cout<<"Linked list is empty";
				return;
			}
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
		}
		
};

int main(){
	List ll;
	ll.push_back(1);
	ll.push_back(2);
	ll.push_back(3);
	ll.push_back(4);
//	ll.insert(5,1);
	ll.printList();
	cout<<ll.search(3)<<endl;
	
	return 0;
}
