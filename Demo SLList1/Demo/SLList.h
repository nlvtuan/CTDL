#ifndef SLLIST
#define SLLIST

#include <iostream>

using namespace std;

struct Node
{
	int info;
	Node* next;
};

void init(Node *&head);
bool isEmpty(Node *head);
Node* createNode(int x);
void addToHead(Node* &head, int x);
void print(Node* head);

int menu();
void sLListApp();

#endif // !SLLIST