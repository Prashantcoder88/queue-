#include <iostream>
using namespace std;
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
   // cout<<"Printing the elements of this linked list\n";
    while (ptr != NULL)
    {
        cout<<" Element: "<< " "<<ptr->data;
        ptr = ptr->next;
    }
}
 
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        cout<<"Queue is Full";
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        cout<<"Queue is Empty\n";
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
 
int main()
{
    linkedListTraversal(f);
   
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
     
    linkedListTraversal(f);
    cout<<"\n";
    
    dequeue();
     dequeue();
      dequeue();
       dequeue();
        dequeue();
     linkedListTraversal(f);
    return 0;
}
