#include <stdio.h>

int stack[20]; //Here we declared the stack and its maxsize.
int head = -1; //We have take the value of head=-1 to track the position of stack.

//By push function,we will take input of the stack.
void push(int data){
head++;
stack[head] = data;
}

////By pop function,we will find the last input and output it.
int pop(){
int value = stack[head];
head--;
return value;

}

//By print function,we will display the total stack.
void print(){
    printf("The condition of the stack is: \n");
    for(int i=0;i<=head;i++){
            printf("%d ",stack[i]);
    }

}

void main() //declaration of the main function.
{
    push(9);  //giving value to take input.
    push(6);
    push(3);
    push(5);
    push(8);
    print();  //calling the print function to display the stack.
    printf("\n Pop data : %d \n",pop()); //calling pop to find the last input.
    print();
}
