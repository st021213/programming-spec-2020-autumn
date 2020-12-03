#include "LinkedList.h"

LinkedList::LinkedList(const LinkedList& list)
{
	tail = head = nullptr;
	count = 0;

	for (Node* temp = list.head; temp != nullptr; temp = temp->next)
	{
		addToTail(temp->data);
	}
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		Node* node = head;
		head = head->next;
		delete node;
	}
}

bool LinkedList::indexValid(int index)
{
	return (index >= 0 && index < count);
}

int LinkedList::length()
{
	return count;
}

int LinkedList::extractHead()
{
	if (head == nullptr)
	{
		return -1;
	}
	if (head == tail)
	{
		tail = nullptr;
	}
	int result = head->data;
	Node* node = head;
	head = head->next;
	delete node;
	--count;
	return result;
}

int LinkedList::extractTail()
{
	if (count < 2)
	{
		return extractHead();
	}
	Node* node = head;
	while (node->next->next != nullptr)
	{
		node = node->next;
	}
	int result = tail->data;
	delete tail;
	tail = node;
	tail->next = nullptr;
	--count;
	return result;
}

int LinkedList::extract(int index)
{
	if (!indexValid(index))
	{
		return -1;
	}
	if (index == 0)
	{
		return extractHead();
	}
	if (index == count - 1)
	{
		return extractTail();
	}
	Node* node = head;
	for (int i = 0; i < index - 1; ++i, node = node->next);
	Node* deleted = node->next;
	int result = deleted->data;
	node->next = node->next->next;
	delete deleted;
	--count;
	return result;
}

void LinkedList::operator-=(int index)
{
	extract(index);
}

int LinkedList::indexOf(int element)
{
	Node* node = head;
	for (int i = 0; node != nullptr; ++i, node = node->next)
	{
		if (node->data == element)
		{
			return i;
		}
	}
	return -1;
}

bool LinkedList::contains(int element)
{
	return (indexOf(element) != -1);
}

bool LinkedList::addToHead(int element)
{
	if (head == nullptr) //в списке ничего нет
	{
		head = tail = new Node(element);
	}
	else //в списке уже есть элементы
	{
		/*
		Node* newHead = new Node(element, head);
		head = newHead;
		*/
		head = new Node(element, head);
	}
	++count;
	return true;
}

bool LinkedList::addToTail(int element)
{
	if (tail == nullptr) //в списке ничего нет
	{
		return addToHead(element);
	}
	//в списке уже есть элементы
	/*
	Node* newTail = new Node(element);
	(*tail).next = newTail;
	tail = (*tail).next;
	*/
	tail->next = new Node(element);
	tail = tail->next;
	++count;
	return true;
}

bool LinkedList::add(int index, int element)
{
	if (index == 0)
	{
		return addToHead(element);
	}
	if (index == count)
	{
		return addToTail(element);
	}
	if (!indexValid(index))
	{
		return false;
	}

	Node* temp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}
	temp->next = new Node(element, temp->next);
	++count;

	return true;
}

int LinkedList::get(int index)
{
	if (!indexValid(index))
	{
		return -1;
	}
	if (index == 0)
	{
		return head->data;
	}
	if (index == count - 1)
	{
		return tail->data;
	}

	Node* temp = head;
	for (int i = 0; i < index; ++i)
	{
		temp = temp->next;
	}
	return temp->data;

}

bool LinkedList::set(int index, int element)
{
	if (!indexValid(index))
	{
		return false;
	}
	if (index == 0)
	{
		head->data = element;
	}
	else if (index == count - 1)
	{
		tail->data = element;
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index; ++i)
		{
			temp = temp->next;
		}
		temp->data = element;
	}
	return true;
}

int& LinkedList::operator[](int index)
{
	if (head == nullptr)
	{
		addToHead(0);
		return head->data;
	}
	if (index <= 0)
	{
		return head->data;
	}
	if (index >= count)
	{
		addToTail(0);
		return tail->data;
	}
	if (index == count - 1)
	{
		return tail->data;
	}
	Node* temp = head;
	for (int i = 0; i < index; ++i)
	{
		temp = temp->next;
	}
	return temp->data;
}

LinkedList& LinkedList::operator=(const LinkedList& list)
{
	if (this != &list)
	{
		while (count > 0)
		{
			extractHead();
		}

		for (Node* temp = list.head; temp != nullptr; temp = temp->next)
		{
			addToTail(temp->data);
		}
	}
	return *this;

}

std::ostream& operator<<(std::ostream& stream, const LinkedList list)
{
	stream << "[" << list.count << "]{";
	if (list.head == nullptr)
	{
		stream << "EMPTY";
	}
	else
	{
		Node* temp = list.head;
		while (temp != nullptr)
		{
			stream << temp->data;
			if (temp->next != nullptr)
			{
				stream << ", ";
			}
			temp = temp->next; //переходим на следующий элемент
		}
	}
	stream << "}";

	return stream;
}

Node* LinkedList::extractHeadNode()
{
	Node* node = head;
	head = head->next;
	--count;
	node->next = nullptr;
	return node;
}

Node* LinkedList::extractTailNode()
{
	if (head->next == nullptr)
	{
		return extractHeadNode();
	}
	Node* node = head;
	while (node->next->next != nullptr)
	{
		node = node->next;
	}
	tail = node;
	node = node->next;
	tail->next = nullptr;
	--count;
	node->next = nullptr;
	return node;
}

Node* LinkedList::extractNode(int index)
{
	if (index == 0)
	{
		return extractHeadNode();
	}
	if (index == count - 1)
	{
		return extractTailNode();
	}
	Node* node = head;
	for (int i = 0; i < index - 1; ++i, node = node->next);
	Node* temp = node;
	node = node->next;
	temp->next = temp->next->next;
	--count;
	node->next = nullptr;
	return node;
}

void LinkedList::insertHeadNode(Node* node)
{
	node->next = head;
	head = node;
	++count;
}

void LinkedList::insertTailNode(Node* node)
{
	tail->next = node;
	tail = tail->next;
	tail->next = nullptr;
	++count;
}

void LinkedList::insertNode(int index, Node* node)
{
	if (index == 0)
	{
		return insertHeadNode(node);
	}
	if (index == count)
	{
		return insertTailNode(node);
	}
	Node* temp = head;
	for (int i = 0; i < index - 1; ++i, temp = temp->next);
	node->next = temp->next;
	temp->next = node;
	++count;
}

bool LinkedList::swap(int index1, int index2)
{
	if (!indexValid(index1) || !indexValid(index2))
	{
		return false;
	}
	if (index1 == index2)
	{
		return true;
	}
	if (index1 > index2)
	{
		return swap(index2, index1);
	}
	// index1 == 0; index2 == count - 1; index2 == index1 + 1;
	Node* node2 = extractNode(index2);
	Node* node1 = extractNode(index1);
	insertNode(index1, node2);
	insertNode(index2, node1);
}