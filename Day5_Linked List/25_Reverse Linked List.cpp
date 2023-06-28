#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    vector<int> arr;
    LinkedListNode<int> *temp = head;

    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }

    
    temp = head;

    for(int i = arr.size()-1; i>=0; i--)
    {
        temp->data = arr[i];
        temp=temp->next;
    }

    return head;

}