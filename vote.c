#include<stdio.h>
int main() {
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<0){
		printf("Error:Age cannot be negative.\n");
	}else{
		if(age==18){
			printf("congratulations!this is your first time voting.\n";
					}else{
					printf("you are eligible to vote.\n");
					}
					}
					return0;
					}
