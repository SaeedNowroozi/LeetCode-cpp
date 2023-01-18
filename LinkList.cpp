#include <iostream>
using namespace std;
class Node{
public:
    int value;
    Node *next = nullptr;
    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
};
class Linklist{
private:
    Node * head =nullptr;
    Node * tail = nullptr;
    int lenght = 0;
public:
    Linklist(int value)
    {
        Node * _new = new Node(value);
        head = _new;
        tail = _new;
        lenght = 1;
    }
    void remove_last()
    {
        if(lenght == 0) return ;
        if(lenght == 1)
        {
            head = nullptr;;
            tail = nullptr;
        }
        else{
            Node *temp = head;
            while(temp->next)
            {
                tail = temp;
                temp = temp->next;
            }
            tail->next = nullptr;
            lenght--;
            delete temp;
        }

    }
    void append(int value)
    {
        Node *_new = new Node(value);
        if(lenght == 0)
        {
            head = _new;
            tail = _new;
        }else
        {
            tail->next = _new;
            tail = _new;
        }
        lenght ++;
    }
    ~Linklist()
    {
        Node *temp = head;
        while(head)
        {
            head = head->next;
            delete  temp;
            temp = head;
        }
    }
    void printLinkList()
    {
        Node *temp = head;
        while(temp)
        {
            std::cout << temp->value << std::endl;
            temp = temp->next;
        }
    }
    void prepend(int value)
    {
        Node *_prenode = new Node(value);
        if(lenght == 0)
        {
            head = _prenode;
            tail = _prenode;
        }
        _prenode->next = head;
        head = _prenode;
        lenght++;
    }
    void removefirst()
    {
        if(lenght == 0) return ;
        Node * temp = head->next;
        if(lenght == 1)
        {
            head = nullptr;;
            tail = nullptr;
        }
        else{
            delete head;
            head =temp;
        }
        lenght--;
    }
    Node * get(int index)
    {
        if(index <0 || index >= lenght)
            return nullptr;
        Node * temp = head;
        for(int i =0; i < index; i++)
            temp = temp->next;

        return temp;
    }
    bool set(int index, int value)
    {
       Node * temp = get(index);
       if(temp)
       {
           temp->value = value;
           return true;
       }
       return false;
    }
    bool insert(int index, int value)
    {
        if(index < 0 || index > lenght) return false;
        else if(index == 0) {
            prepend(value);
            return true;
        }
       else if(index == lenght)
        {
            append(value);
            return true;
        }
        else
        {
            Node *temp = get(index -1);
            Node *_nex = new Node(value);
           _nex->next = temp->next;
           temp->next = _nex;
           lenght++;
           return true;
        }
        return false;
    }
    void delete_index(int index)
    {
        if(index < 0 || index >= lenght) return ;
        if(index == 0)
            removefirst();
        if(index == lenght-1)
            remove_last();
        Node *temp = get(index -1);
        Node *temp1= get(index);
        temp->next = temp1->next;
        delete temp1;
        lenght--;
    }

};
using namespace std;

int main()
{
    Linklist ll(12);
    ll.append(15);
    ll.append(89);
    ll.append(74);
    ll.printLinkList();
    cout <<endl<<endl;
   ll.delete_index(2);
  ll.printLinkList();

    return 0;
}
