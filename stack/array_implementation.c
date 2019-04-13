
#define MAX_STACK_SIZE 10
#include<stdio.h>
#include<stdlib.h>

int space[MAX_STACK_SIZE];
int head=-1;

void printStack();
int pushToStack(int);
int popFromStack();

int main(){
	printf("Welcome to code interester");
	int input;
	while(1) {
		printf("1) Push to stack\n");
		printf("2) Pop from stack\n");
		printf("3) Exit\n");
		printf("Choose an option :");
		scanf("%d",&input);

		switch(input){
		case 1:
			printf("\nEnter a vaule to push to stack:");
			scanf("%d",&input);
			pushToStack(input);
			printStack();
			break;
		case 2:
			printf("Value Poped from stack : %d",popFromStack());
			printStack();
			break;
		case 3:
			exit(0);
		default:
			printStack();
		}
	}

	return 0;
}

void printStack(){
	printf("\n\n [ ");
	for (int i=0;i<=head;i++){
		printf("%d",space[i]);
		if (i!=head){
			printf(" | ");
		}
	}
	printf(" ]\n\n");
}

int pushToStack(int value){
	// Check if we have not reached our limits.
	if (head < MAX_STACK_SIZE){
		// Increment the head index and then assign the value
		space[++head]=value;
		return 0;
	}
	return -1;
}

int popFromStack(){
	if (head<0){
		printf("Noting to remove from stack");
		return -1;
	}
	// return the value then decrement the head index
	return space[head--];
}
