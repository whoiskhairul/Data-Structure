#include<stdio.h>

int queue[10]; //defined the size of queue.
int head = -1,tail = 0;

//This is enqueue function,by this we will take input.we will check first if the queue is full .
void enqueue(int data){
   if(head == 9)
      printf("Queue is Full.\n");
   else{
      head++;
      queue[head] = data;
   }
}

//If the queue is no empty,then this function will give output ( first input ).
void dequeue(){
   if(head == -1)
      printf("Queue is Empty.\n");
   else{
      printf("\n Deleted : %d\n", queue[tail]);
      tail++;
   }
}

//This function is to Display the queue.
void display(){
   if(head == -1)
      printf("Queue is Empty.\n");
   else{
      int i;
      printf("Queue elements are:\n");
      for(i=tail; i<=head; i++)
	 printf("%d ",queue[i]);
   }
}

void main()
{

enqueue(10);
enqueue(20);
enqueue(30);
display();
enqueue(40);
display();
dequeue();
display();
dequeue();
display();
}
