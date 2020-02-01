 #include <stdio.h>
 
 struct person{
 	char fname[20];
 	char lname[20];
 	int age;
 	char education[20];
 	char work[20];
 	
 } applicant = {"Gregory", "Miller", 24, "Collin's College", "Programmer"};
 

 int main(void){

 	//
 	printf("%s %s\n%i\n%s\n%s\n", applicant.fname, applicant.lname, applicant.age, applicant.education, applicant.work);
 }
 
 //suck my dick! nailed it
