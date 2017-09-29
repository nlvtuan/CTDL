#include "SLList.h"

void init(Node *& head)
{
	head = NULL;	
}

bool isEmpty(Node * head)
{
	return (head == NULL);
}

Node* createNode(int x)
{	
	Node* tmp = new Node;
	if (tmp != NULL)
	{
		tmp->info = x;
		tmp->next = NULL;
	}

	return tmp;
}

void addToHead(Node *& head, int x)
{
	Node* tmp = createNode(x);
	if (head != NULL)
	{
		tmp->next = head;
	}
	head = tmp;
}

void print(Node * head)
{
	Node* tmp = head;
	while (tmp != NULL)
	{
		cout << tmp->info << "\t";
		tmp = tmp->next;
	}
}

int menu()
{
	cout << "1. Khoi tao DSLK.\n"
		<< "2. Chen dau DSLK.\n"

		<< "9. In DSLK.\n"
		<< "0. Thoat\n";
	
	int choose;
	cout << "Chon [0 - 9]:";
	cin >> choose;

	return choose;
}

void sLListApp()
{	
	Node* head = NULL;
	int choose = 0;

	do
	{
		choose = menu();
		switch (choose)
		{
		case 1: // Khoi tao danh sach
		{
			init(head);
			cout << endl;
			break;
		}

		case 2: // Chen dau danh sach
		{
			int x;
			cout << "Nhap gia tri x: ";
			cin >> x;

			addToHead(head, x);
			break;
		}

		case 3:
		{
			if (isEmpty(head) == true)
				cout << "DS rong";
			else
				cout << "DS khac rong";

			break;
		}

		case 9: // In
		{
			print(head);
			break;
		}

		default:
			return;
		}
	} while (true);
}

int main()
{
	sLListApp();

	return 0;
}

