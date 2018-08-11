#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct S_RacingCar {

	char name[12];
	int speed;
	struct S_RacingCar *next;
	struct S_RacingCar *previous;
	
} RacingCar;

void PrintList(RacingCar *start) {
	RacingCar *currentCar = start;
	int count = 0;
	
	RacingCar *ahead = NULL;
	RacingCar *behind = NULL;
	
	while(currentCar != NULL) {
		count++;
		
		ahead = currentCar->next;
		behind = currentCar->previous;
		
		printf("Car:%d Name:%s Speed:%d Ahead:%s Behind:%s\n",count,
			currentCar->name,
			currentCar->speed,
			(ahead == NULL) ? "None" : ahead->name,
			(behind == NULL) ? "None" : behind->name
			);
		currentCar = currentCar->next;
		ahead = NULL;
		behind = NULL;
	}	
	printf("Total Cars:%d\n",count);
}

RacingCar *AddCar(RacingCar *previous) {

	printf("Enter Name And Speed: ");
	char input[16];
	fgets( input, 15, stdin);
	
	RacingCar *newCar = malloc(sizeof(RacingCar));
	sscanf(input, "%s %d", newCar->name, &newCar->speed);
	printf("Added:%s Speed:%d\n\n",newCar->name,newCar->speed);
	
	newCar->next = NULL;
	newCar->previous = NULL;
	
	if(previous != NULL) {
		previous->next = newCar;
		newCar->previous = previous;
	}
	return newCar;
}

void CleanUp(RacingCar *start) {
	
	RacingCar *freeMe = start;
	RacingCar *holdMe = NULL;	
	while(freeMe != NULL) {
		holdMe = freeMe->next;
		printf("Free Name:%s Speed:%d\n",
			freeMe->name,
			freeMe->speed);
		free(freeMe);
		freeMe = holdMe;
	}	
}

int main() {	
	
	char command[16];
	char input[16];	
	
	RacingCar *start = NULL;
	RacingCar *newest = NULL;
	
	while( fgets( input, 15, stdin) ) {
		
		sscanf(input,"%s",command);	
		
		if ( strncmp(command, "quit", 4) == 0) {
			printf("\n\nBreaking...\n");
			break;		
		} else if ( strncmp(command, "print", 5) == 0) {
			PrintList(start);
		} else if ( strncmp(command, "add", 3) == 0) {
			if(start == NULL) {
				start = AddCar(NULL);
				newest = start;
			} else {
				newest = AddCar(newest);
			}
		}
	}
	
	CleanUp(start);
	
	return 0;

}
