//Insertion in Linked List
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void Insert(int);
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void main()
{
    int choice,item;
    do
    {
        printf("\nEnter the item that you want to insert\n");
        scanf("%d",&item);
        Insert(item);
        printf("\nPress 0 to insert more\n");
        scanf("%d",&choice);
    } while (choice==0);
}
void Insert(int item)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node *));
    if(ptr==NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nNode inserted\n");
        printlist(head);
    }
}
void begdelete()  
    {  
        struct Node *ptr;  
        if(head == NULL)  
        {  
            printf("\nList is empty");  
        }  
        else   
        {  
            ptr = head;  
            head = ptr->next;  
            free(ptr);  
            printf("\n Node deleted from the begining ...");  
        }  
    }  
void printlist(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}