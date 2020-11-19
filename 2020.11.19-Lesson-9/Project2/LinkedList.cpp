#include "LinkedList.h"

LinkedList::~LinkedList()
{
	while (!isEmpty())
	{
		removeHead();
	}
}

bool LinkedList::indexValid(int index)
{
	if (index < 0)
	{
		return false;
	}
	if (head == nullptr)
	{
		return false;
	}
	Node* node = head;
	//[0 1 2 3 4 5]
	// 1 2 3 4 5 6
	while (index >= 0)
	{
		if (node == nullptr)
		{
			return false;
		}
		index--;
		node = node->next;
	}
	return true;
}

void LinkedList::insert(int index, int element)
{
	if (index == 0)
	{
		return addHead(element);
	}
	if (index == length())
	{
		return addTail(element);
	}
	if (indexValid(index))
	{
		Node* node = head;
		for (int i = 0; i < index - 1; ++i)
		{
			node = node->next;
		}
		node->next = new Node(element, node->next);
	}
}

void LinkedList::addHead(int element)
{
	head = new Node(element, head);
	// !
	// 5->!
	// 3->5->!
}

void LinkedList::addTail(int element)
{
	if (head == nullptr)
	{
		return addHead(element);
	}

	Node* node = head;
	while (node->next != nullptr)
	{
		node = node->next;
		//node = (*node).next;
	}
	node->next = new Node(element);
}

int LinkedList::length()
{
	int length = 0;
	Node* node = head;
	/*node = ...; //сам список не меняется
	node->data = 4; //сам список изменится
	node->next = nullptr //сам список изменится*/
	while (node != nullptr)
	{
		node = node->next;
		++length;
	}
	return length;
}

bool LinkedList::isEmpty()
{
	return (head == nullptr);
}

void LinkedList::removeHead()
{
	if (head == nullptr)
	{
		return;
	}
	Node* node = head;
	head = head->next;
	delete node;
}

void LinkedList::remove(int index)
{
	if (head == nullptr)
	{
		return;
	}
	if (index == 0)
	{
		return removeHead();
	}
	if (index == length() - 1)
	{
		return removeTail();
	}
	if (indexValid(index))
	{
		Node* node = head;
		for (int i = 0; i < index - 1; ++i)
		{
			node = node->next;
		}
		Node* temp = node->next;
		node->next = node->next->next;
		delete temp;
	}
}

void LinkedList::removeTail()
{
	if (head == nullptr)
	{
		return;
	}
	if (head->next == nullptr)
	{
		delete head;
		head == nullptr;
	}
	Node* node = head;
	while (node->next != nullptr && node->next->next != nullptr)
	{
		node = node->next;
	}
	delete node->next;
	node->next = nullptr;
}

std::ostream& operator<<(std::ostream& stream, LinkedList& list)
{
	stream << "[" << list.length() << "] {";
	if (list.head == nullptr)
	{
		stream << "EMPTY";
	}
	Node* node = list.head;
	while (node != nullptr)
	{
		stream << node->data;
		if (node->next != nullptr)
		{
			stream << ", ";
		}
		node = node->next;
	}
	stream << "}";
	return stream;
}
