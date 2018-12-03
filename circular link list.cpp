#include<iostream>



using namespace std;

struct node
{
	int data;
	node *next;
};
class cl
{
	private:
		node * head;
	public:
		cl()
		{
			head = NULL;
		}
//////////////////////////////////////		
		addEnd(int x)
		{
		node *temp = new node;
		temp->data = x;
		if (head == NULL)
		{
			head = temp;
			temp->next = head;
		}
		else
			temp->next = head->next;
		head->next = temp;
		head = temp;
		}
/////////////////////////////////////////	
		void addAfter(int item, int x)
		{
			node *temp, *current;
			temp = new node;
			temp->data = x;
			current = head;
		while (current->data != item)
		{
			current = current->next;
		}
			temp->next = current->next;
			current->next = temp;
			delete temp;
		}
////////////////////////////////////////		
		void delitem(int x)
		{
			node *temp, *current;
			temp = new node;
				temp = head;
			current = new node;
			current = head;
			////////if only 1 node////////
			if (head->next == head && head->data == x)
			{
				temp = head;
				head = NULL;
				delete temp;
			}
		////////first item delete/
			while (temp->next != head)
			{
				temp = temp->next;
			}
			if (current->data = x)
			{
				head = head->next;
				delete current;
			}
		
		}

		void print()
		{
			node *temp;
			temp = head;
			while (temp != head)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
		}

};

int main()
{
	cl d;
	d.addEnd(19);
	d.addEnd(32);
	d.addEnd(34);
	d.addEnd(56);
	d.addEnd(68);
	d.addAfter(34, 100);
	d.print();
	return 0;
}

