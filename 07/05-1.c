#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100
typedef int element; //int를 element로 재정의
typedef struct{
	int data[MAX_STACK_SIZE];
	int top;
}Stack;
Stack s;
//1차원 배열로 스택 정의
//전역변수로 스택 선언


int isEmpty(){
	if(s.top == -1) return 1;
	else return 0;
}
int isFull(){
	if(s.top == MAX_STACK_SIZE -1) return 1;
	else return 0;
}	 
void push(element item){
	s.top = s.top+1;
	s.data[s.top] = item;
}
element pop(){ //반환후 제거
	element temp = s.data[s.top];
	s.top--;
	return temp;

}
element peek(){//반환만
	element temp = s.data[s.top];
	return temp;
}
int main(){
	s.top = -1;
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	return 0;

}