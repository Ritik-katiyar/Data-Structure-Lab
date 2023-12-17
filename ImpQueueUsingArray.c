#include<stdio.h>
#include<stdlib.h>
 
struct queue
{
    int size;
    int front;
    int rear;
    int* arr;
};
 
 
int isEmpty(struct queue *q){
    if(q->rear==q->front){
        return 1;
    }
    return 0;
}
 
int isFull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    return 0;
}
 
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->rear++;
        q->arr[q->rear] = val;
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->front++;
        a = q->arr[q->front]; 
    }
    return a;
}
 
int main(){
    int number,n,N,x;
    struct queue q;
    while(1){
    printf("\nType the operation which you want to do :\nType 1 for Enqueue\nType 2 for Dequeue\nType 3 for Exit\n");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf("Enter the Number of Values Which you want to Insert : ");
        scanf("%d",&x);
        for(int i=0;i<x;i++){
        q.size = x;}
        q.front = q.rear = 0;
        q.arr = (int*) malloc(q.size*sizeof(int));
        for(int i=0;i<q.size;i++){
            scanf("%d",&N);
            enqueue(&q, N);
         }
        break;
    case 2:
        printf("Enter the Number of Values Which you want to Dequeued : ");
        while(1){
        scanf("%d",&n);
        //for(int i=0;i<n;i++)
        printf("Dequeuing element : %d\n", dequeue(&q));
        
    }
        break;
    case 3:
        /* code */
        break;
    
    default:
        break;
    }
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    }
    return 0;
}
