/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    Node* temp = head;
    int n=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        n++;
    }

    k = n-k;
    // cout << n << " " << k << endl;
    if(k==0)   
        return head->next;
    else{
        n=1;
        temp=head;
        while(n!=k)
        {
            temp = temp->next;
            n++;
        }
        temp->next = temp->next->next;
        return head;
    }
}
