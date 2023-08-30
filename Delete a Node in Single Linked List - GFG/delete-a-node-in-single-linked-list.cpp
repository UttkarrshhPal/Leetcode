//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref,
           int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
struct Node* deleteNode(struct Node *head,int );

void printList(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }
   cout << "\n";
}

/* Driver program to test above function*/
int main()
{
  int T, i, n, l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

	int kk;
	cin>>kk;
    head = deleteNode(head,kk);
    printList(head);
    }
    return 0;
}

// } Driver Code Ends


/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
// delete at head
void delete_at_head(Node *&head){
    Node *to_delete = head;
    head = head->next;
    
    if(head == NULL){
        delete(to_delete); 
    }
    
}
void delete_at_tail(Node *&head){
    Node *temp = head;
    // we will till second last node 
    while(temp->next!=NULL){
        temp = temp->next;
    }
    // and point to last node to NULL
    temp->next = NULL;
}
/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    // check if Linked list Exists
    if(head == NULL) return NULL;
   
    
    if(x==1){
        delete_at_head(head);
        return head;
    }
    Node *temp = head;
    int cnt = 2;
    while(cnt<x){
        temp = temp->next;
        // if temp-<next become NULL------->EDGE CASE
        if(temp->next==NULL){
            delete_at_tail(head);
            return head;
        }
        cnt++;
    }
    Node *to_delete = temp->next;
    temp->next = temp->next->next;
    delete(to_delete);
    return head;
}

