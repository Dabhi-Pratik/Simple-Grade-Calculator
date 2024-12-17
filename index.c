#include<stdio.h>


int main(){
	
	int mark;
    int grade;
	
	printf("Enter your Mark:");
	scanf("%d",&mark);
	
	if( mark >= 90){
		printf("Your Grade is A \n");
		grade ='A';
	}	
	
	else if( mark >= 75){
		printf("Your Grade is B \n");
		grade ='B';
	}
	
	else if( mark >= 60){
		printf("Your Grade is C \n");
		grade ='C';
	}
	
	else if( mark >= 45){
		printf("Your Grade is D \n");
		grade ='D';
	}
	
	else if( mark > 30){
		printf("Your Grade is F \n");
		grade ='F';
	}
	
	switch( grade ){
		
		case 'A':
			printf("Excellent work! \n");
			 break;
		case 'B':
			printf("Well done. \n");
			 break;
			 
		case 'C':
			printf("Good job.\n");
			 break;	
			 	
		case 'D':
			printf("You passed, but you could do better. \n");
			 break;	
			 
	    default:
		    printf("Sorry, you failed.");
				 			 
	}
	
	if( grade=='A' || grade=='B' || grade=='C' || grade=='D'){
		
		 printf("You are eligible for the next level.");
	}
	
	else{
		printf("Please try again next time");
	}
	
	
	return 0;
}
