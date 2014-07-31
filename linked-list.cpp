struct node
{
	int key; struct node *next;
};
struct node *head, *z;
head = new node; z = new node;
head->next = z; z->next = z;