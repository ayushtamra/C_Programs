//Given an integer N, the task is to generate random passwords of length N of easy, medium and strong level each.

// C program to generate 
// password of given length 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

// Function to generate easy level 
// password with numbers 
void easylevelpassnumbers(int n) 
{ 
	int i; 

	// Random character generation 
	// setting the seed as TIME 
	srand(time(NULL)); 
	printf("Easy level password "
		"(only numbers): "); 
	for (i = 0; i < n; i++) { 

		// rand() to assign random 
		// characters in the password 
		printf("%d", rand() % 10); 
	} 
	printf("\n"); 
} 

// Function to generate easy level 
// password with letters 
void easylevelpassletters(int n) 
{ 
	int i, d; 
	printf("Easy level password"
		" (only letters): "); 
	for (i = 0; i < n; i) { 
		d = rand() % 123; 
		if ((d >= 65 && d <= 90) 
			|| d >= 97) { 
			printf("%c", (char)d); 
			i++; 
		} 
	} 
	printf("\n"); 
} 

// Function to generate random 
// medium level password 
void midlevelpass(int n) 
{ 
	int i, d; 
	printf("Medium level password: "); 
	for (i = 0; i < n; i++) { 
		d = rand() % 123; 

		// Random alphabetic characters 
		if ((d >= 65 && d <= 90) 
			|| d >= 97) { 
			printf("%c", (char)d); 
		} 
		else { 

			// Random digits 
			printf("%d", d % 10); 
		} 
	} 

	printf("\n"); 
} 

// Function to generate strong 
// level password 
void stronglevelpass(int n) 
{ 
	int i, d; 
	printf("Strong level password: "); 
	for (i = 0; i < n; i++) { 
		d = rand() % 200; 

		// Random special characters 
		if (d >= 33 && d <= 123) { 
			printf("%c", (char)d); 
		} 
		else { 

			// Random digits 
			printf("%d", d % 10); 
		} 
	} 

	printf("\n"); 
} 

// Driver Code 
int main() 
{ 
	int n = 5; 

	easylevelpassnumbers(n); 
	easylevelpassletters(n); 
	midlevelpass(n); 
	stronglevelpass(n); 
} 
