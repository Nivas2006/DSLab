#include<stdio.h>

int main()
{
	int roll_no;
	char name[50];
	int marks[5], total=0;
	int i;
	
	printf("Enter roll number: ");
	scanf("%d",&roll_no);
	
	printf("Enter name: ");
	scanf("%[^\n]", name);
	
	for(i=0;i<5;i++) {
		printf("Enter marks for subject %d: ",i+1);
		scanf("%d",&marks[i]);
		total += marks[i];
	}
	
	printf("\n--- Student details (using array) ---\n");
	printf("roll number: %d\n",roll_no);
	printf("name: %s\n", name);
	printf("marks: ");
	for(i=0;i<5;i++) {
		printf("%d",marks[i]);
	}
	printf("\nTotal: %d\n",total);
	getch();
	return 0;
}
