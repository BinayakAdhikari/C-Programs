#include <stdio.h>
#include <conio.h>

#define SIZE 10


struct queue{
int item[SIZE];
int front,rear;
}q;

void enqueue(struct queue *q,int num);
void dequeue(struct queue *q);
void display(struct queue *q);

int main (){
int num,choice;
q.front = 0;
q.rear = -1;
printf("\n 1:Enqueue \n 2:Dequeue \n 3:Display \n 4:Exit");
while(1){
printf("\n Enter your Choice : ");
scanf("%d",&choice);
switch(choice){
case 1:
    printf("\n Enter the number : ");
    scanf("%d",&num);
    enqueue(&q,num);
    break;
case 2:
    dequeue(&q);
    break;
case 3:
    display(&q);
    break;
case 4:
    exit(0);
}
}
return 0;
}
void enqueue(struct queue *q,int num){
if (q -> rear == SIZE-1){
    printf("\n Queue is full!");
}
else{
    q -> rear++;
    q -> item[q -> rear] = num;
}
}
void dequeue(struct queue *q){
int dt;
int i;
if(q -> rear < q -> front){
    printf("\n Queue is empty!");
}else{
dt = q -> item[q -> front];
printf("\n The Deleted item = %d",dt);
//q -> front++;
for(i = 0;i< q-> rear;i++){
    q -> item[i] = q -> item[i+1];
}
q -> rear--;
}
}
void display(struct queue *q){
int i ;
if (q -> rear < q -> front){
    printf("\n The Queue is empty!");
}else{
printf("\n Content of Queue is :");
for (i = q -> front; i<=q->rear;i++){
    printf("\t%d\t",q -> item[i]);
}
}
}
