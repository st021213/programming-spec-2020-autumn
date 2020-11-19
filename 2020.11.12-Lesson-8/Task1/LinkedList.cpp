#include "LinkedList.h"

LinkedList::LinkedList(const LinkedList& list)
{
    tail = head = nullptr;
    count = 0;

    for(Node* temp = list.head; temp != nullptr; temp = temp->next)
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
        int result = head->data;
        delete head;
        tail = head = nullptr;
        count = 0;
        return result;
    }
    int result = head->data;
    Node* node = head;
    head = head->next;
    delete node;
    --count;
    return result;
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
    while (count > 0)
    {
        extractHead();
    }

    for (Node* temp = list.head; temp != nullptr; temp = temp->next)
    {
        addToTail(temp->data);
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
