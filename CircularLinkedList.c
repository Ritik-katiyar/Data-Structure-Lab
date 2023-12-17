#include<stdio.h>
#include<stdlib.h>

struct Node {
    int head;
    struct Node*next;
};
struct Node*last=NULL;
void InsertAtBegin(int data){
    struct Node*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if (last == NULL) {
        temp->head = data;
        temp->next = temp;
        last = temp;
    }
    else{
        temp->head=data;
        temp->next=last->next;
        last->next=temp;
    }
}
void InsertAtEnd(int data){
    struct Node*temp;
    temp=(struct Node*)malloc(sizeof(struct Node));
    if (last == NULL) {
        temp->head = data;
        temp->next = temp;
        last = temp;
    }
    else{
        temp->head=data;
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
void PrintList(){
    if (last==NULL)
    printf("\nList is Empty");
    else{
        struct Node*temp;
        temp=last->next;
        do{
            printf("\nList=%d",temp->head);
            temp=temp->next;
        }while(temp!=last->next);
    }
}
int main(){
    InsertAtBegin(10);
    InsertAtBegin(20);
    InsertAtBegin(30);
    InsertAtBegin(40);
    InsertAtBegin(50);
    InsertAtEnd(1);
    InsertAtEnd(2);
    InsertAtEnd(3);
    InsertAtEnd(4);
    InsertAtEnd(5);
    PrintList();
    return 0;
}