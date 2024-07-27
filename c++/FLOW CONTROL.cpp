#include<iostream>
using namespace std;
int main(){
	cout<<"\n-------------------CONTROL STRUCTURE------------------------------";
	//control the FLOW/DIRECTION of CODE/PROGRAM
	//REPEAT THE ANY BLOCK/BODY
	//Which PART ECECUTE FIRST 
	//THREE TYPES==>1)DECISION MAKING STTRUCTURE
	//				2)LOOPS
	//				3)JUMP
	cout<<"\n-------------- DECISION MAKING STTRUCTURE-----------------------------";
	//THREE TYPES==>1)IF STATEMENT
	//				2)IF ELSE
	//				3)SWITCH
	//SYNTAX:IF==>  if (test_condition){
	//			    	body/statment
	//		      	}
	//		 ELSE==>else 	
	//					statement
	//    ELSE IF==>elseif{
	//			statement
	//			}
	cout<<"\n---------------------IF STATEMENT-----------------------------";

	string cube_1="solved";
	
	if (cube_1 == "solved"){
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE IF";
		cout<<"\n\tAPPERIATED";
	}
	
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE OF IF";
	
	cout<<"\n--------------------IF,ELSE STATEMENT-----------------------------";
	
	string cube_2="solved";
	
	if (cube_2 == "solved"){
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE IF";
		cout<<"\n\tAPPERIATED";
	}
	else{
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE ELSE";
		cout<<"\n\tSHAME";
	}
	
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE OF IF AND ELSE";
	
	cout<<"\n-----------------------NESTED IF-----------------------------";
	//if inside if
	int marks = 75;

	if (marks<=60){
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 1st IF";
		if (marks>=20){
			cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 2nd IF";
		}
	}
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE OF IF";
	
	cout<<"\n-----------------------WHY ELSE IF-----------------------------";
	
	int marks_1 = 45;
	if (marks_1 >= 80){
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 1st IF";
		cout<<"\n\tGRADE A1";
	}
	else{
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 1st ELSE";
		if (marks_1 >= 70){
			cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 2nd IF";
			cout<<"\n\tGRADE A";
		}
		else{
			cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 2nd ELSE";
			if (marks_1 >= 60){
				cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 3rd IF";
				cout<<"\n\tGRADE B";
			}
			else{
				cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 3rd ELSE";
				if (marks_1 >= 50){
					cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 4th IF";
					cout<<"\n\tGRADE C1";
				}
				else{
					cout<<"\n\tASSALAMUALIKUM...I AM INSIDE 4th ELSE";
					cout<<"\n\tFAIL";
				}
			}
		}
	}
	
	cout<<"\n--------------------IF,ELSE AND ELSE IF STATEMENT-----------------------------";
	
	string cube_3="half_solved";
	
	if (cube_3 == "solved"){
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE IF";
		cout<<"\n\tAPPERIATED";
	}
	else if (cube_3 == "half_solved"){
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE ELSE IF";
		cout<<"\n\tYOU CAN DO IT";
	}
	else{
		cout<<"\n\tASSALAMUALIKUM...I AM INSIDE ELSE";
		cout<<"\n\tSHAME";
	}
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE OF IF,ELSE AND ELSE IF";
	
	cout<<"\n--------------------EXAMPLE_1-----------------------------";
	//arthemitic operator
	int number = 277;
	if(number%2 == 0){
		cout<<"\n\t"<<number<<"is EVEN";
	}
	else{
		cout<<"\n\t"<<number<<"is ODD";
	}
	
	cout<<"\n--------------------EXAMPLE_2-----------------------------";
	//camparision operator
	int percentage = 65;
	
	if (percentage >= 80){
		cout<<"\n\tGRADE A1";
	}
	else if (percentage >=70){
		cout<<"\n\tGRADE B";
	}
	else if (percentage >=60){
		cout<<"\n\tGRADE C";
	}
	else if (percentage >=50){
		cout<<"\n\tGRADE D";
	}
	else{
		cout<<"\n\tFAIL";
	}
	
	cout<<"\n--------------------EXAMPLE_3-----------------------------";
	//true,false
	bool pass = false;
	if(pass == true){
		cout<<"\n\tASSALAMUALIKUM...I AM TRUE";
	}
	else if (pass == false ){
		cout<<"\n\tASSALAMUALIKUM...I AM FALSE ";
	}
	
	cout<<"\n--------------------EXAMPLE_4-----------------------------";
	//you can also use logical operator
	if((true)&&(true)){
		cout<<"\n\tASSALAMUALIKUM...I AM TRUE";
	}
	else{
		cout<<"\n\tASSALAMUALIKUM...I AM FALSE";
	}
	
	cout<<"\n--------------------EXAMPLE_5-----------------------------";
	int salary;
	cout<<"\n\tENETR SALARY::";
	cin >> salary;
	while(salary != 0){
		if ((salary > 0)&& (salary <= 40000)){
			cout<<"\n\tYOU ARE ELIGIBILE FOR WORKER POSITON IN OUR FACTORY";
		}
		else if ((salary >= 40000)&&(salary <=80000)){
			cout<<"\n\tYOU ARE ELIGIBILE FOR SUPERVISER POSITON IN OUR FACTORY";
		}
		else if ((salary >= 80000)&&(salary <=100000)){
			cout<<"\n\tYOU ARE ELIGIBILE FOR MANAGER POSITON IN OUR FACTORY";
		}
		else{
			cout<<"\n\t ITNA BUDJET NAHI HAI";
		}
		cout<<"\n\tENETR SALARY::";
		cin >> salary;
	}
	
	cout<<"\n--------------------ERROR-----------------------------";
	//IF(CONDITION){}
	//IF(CONDITION){}
	cout<<"\n--------------------SWITCH STATMENT-----------------------------";
	int day = 9;
	switch(day){
		case 1:
			cout<<"\n\tMONDAY";
			break;
		case 2:
			cout<<"\n\tTUESDAY";
			break;
		case 3:
			cout<<"\n\tWEDNESDAY";
			break;
		case 4:
			cout<<"\n\tTHURSDAY";
			break;
		case 5:
			cout<<"\n\tFRIDAY";
			break;
		case 6:
			cout<<"\n\tSATURDAY";
			break;
		case 7:
			cout<<"\n\tISUDAY";
			break; 
		 
			cout<<"\n\tINVALID DAY NUMBER";
	}
	cout<<"\n\tMOYE MOYE";
	return 0;
}
