#include<iostream>
using namespace std;
#include<cmath>
//cout<<"\n-------------------USER-DEFINED FUNCTIONS------------------------------";
//SYNTAX : RETURN DATA_TYPE FUNCTION_NAME (PARAMETERS);
//NON PARAMATRIZED
//no return type and no parameter
void print(void){
	cout<<"\n\tWELCOME asad";
}
//PARAMATRIZED
//no return type but with parameter
void print(string name){
	cout<<"\n\tWELCOME MR"<<" "<<name;
}
// return type but no  parameter
int add(void){
	int num_1 = 7;
	int num_2 = 9;
	int add = num_1 + num_2;
	return add;
}
// return type and parameter
int add(int num_1,int num_2){
	int add = num_1+num_2;
	return add;
}

int sub(int num_1,int num_2){
	int sub = num_1 - num_2;
	return sub;
}
//EXAMPLE_1
float percentage(float sub_1,float sub_2,float sub_3,float sub_4,float sub_5){
	float percentage = ((sub_1+sub_2+sub_3+sub_4+sub_5)*100)/500;
	return percentage;
}
//EXAMPLE_2
float percentage(){
	float sub_1,sub_2,sub_3,sub_4,sub_5;
	cout<<"\n\tENTER MARKS::";
	cin>>sub_1;
	cout<<"\n\tENTER MARKS::";
	cin>>sub_2;
	cout<<"\n\tENTER MARKS::";
	cin>>sub_3;
	cout<<"\n\tENTER MARKS::";
	cin>>sub_4;
	cout<<"\n\tENTER MARKS::";
	cin>>sub_5;
	float percentage = ((sub_1+sub_2+sub_3+sub_4+sub_5)*100)/500;
	return percentage;
}
//EXAMPLE_3
void even_odd(int number){
	if(number%2 == 0){
		cout<<"\n\t"<<number<<" "<<"is EVEN";
	}
	else{
		cout<<"\n\t"<<number<<" "<<"is ODD";
	}
}
//EXAMPLE_4
int factorial(int number_1){
	int fact=1;
	for(int i=1 ;i<=number_1;i++){
		fact*=i;
	}
	return fact;
}
//EXAMPLE_5
void box(int length,int height){
	for(int i=1;i<=height;i++){
		cout<<"\n\t";
		for(int j=1;j<=length;j++){
			cout<<"*";	
		}
	}
}
//EXAMPLE_6
//local variable are use inside one function ,cant share with different function
float area_circle(float radius){
	const float PIE = 3.14;//local variable
	float area=PIE*radius*radius;
	return area;
}

//EXAMPLE_7
/*ERROR==>
float area_circle(float radius){
	float area=PIE*radius*radius;
	return area;
 */

//GLOBAL VARIABLE==>YOU CAN USE WITH DIFFERENT FUNCTION
const float PIE = 3.14;//global variable / external variable

float area_circle_1(float radius){
	float area=PIE*radius*radius;
	return area;
}
float circumference(float radius){
	float circum=2*PIE*radius;
	return circum;
}

int main(){
	cout<<"\n-------------------FUNCTIONS------------------------------";
	//used to do specific task ,and  UNIQUE NAME
	//Code reusability
	//TYPES OF FUNCTION
	//pre-defined function
	//user-defined function
	
	/*FUNCTION HAD THREE PARTS
		1)FUNCTION DECLERATION 
		=>SYNTAX : RETURN DATA_TYPE FUNCTION_NAME (IF ANY PARAMETERS);
		2)FUNCTION DEFINITION  
		=>SYNTAX : RETURN DATA_TYPE FUNCTION_NAME (IF ANY PARAMETERS){STATMENT}
		3)FUNCTION CALL/INVOKE 
		=>SYNTAX:FUNCTIO_NAME(IF PARAMATRIZED );
		*/
		
	cout<<"\n-------------------PRE-DEFINED FUNCTIONS------------------";
	//ALMOST IN ALL HIGH LEVEL PROGRAMMING LANGUAGE
	//also called SYSTEM DEFINED /LIBRARY FUNCTION
	cout<<"\n\tTHE SQUARE ROOT OF 4 "<<sqrt(4);
	cout<<"\n\tTHE CUBE OF 4 "<<pow(4,3);
	cout<<"\n\tTHE ANGLE OF 0 is "<<sin(0);
	
	cout<<"\n-------------------USER-DEFINED FUNCTIONS-----------------";
	//SYNTAX : RETURN DATA_TYPE FUNCTION_NAME (PARAMETERS){STATMENT}
	//SYNTAX:FUNCTIO_NAME(IF PARAMATRIZED )FUNCTON CALL /INVOKE
	
	cout<<"\n---------------NO RETURN TYPE MEANS VOID------------------";
	cout<<"\n-------------------NON PARAMATRIZED-----------------------";
	cout<<"\n--------------NO RETURN TYPE AND NO PARAMETER-------------";
	print();
	print();
	
	cout<<"\n---------------------PARAMATRIZED-------------------------";
	cout<<"\n--------------NO RETURN TYPE BUT WITH PARAMETER-----------";
	print("RAMSHA");
	print("ASAD");
	
	cout<<"\n-------------RETURN TYPE MEANS ALL DATATYPE---------------";
	cout<<"\n--------------RETURN TYPE BUT NO PARAMETER----------------";
	int result=add();
	cout<<"\n\t"<<result;
	cout<<"\n\t"<<(add());
	
	cout<<"\n---------------RETURN TYPE AND PARAMETER------------------";
	cout<<"\n\t"<<(add(7,9));
	cout<<"\n\t"<<(sub(7,9));
	
	cout<<"\n--------------------EXAMPLE_1-----------------------------";
	cout<<"\n\t"<<(percentage(75,75,75,75,75));
	cout<<"\n\t"<<(percentage(75,45,65,78,98));
	cout<<"\n\t"<<(percentage(45,65,78,98,34));
	cout<<"\n\t"<<(percentage(76,45,46,76,87));
	
	cout<<"\n--------------------EXAMPLE_2-----------------------------";
	//cout<<"\n\t"<<(percentage());
	//cout<<"\n\t"<<(percentage());
	
	cout<<"\n--------------------EXAMPLE_3-----------------------------";    
	even_odd(4);
	even_odd(9);
	even_odd(78);
	 
	cout<<"\n--------------------EXAMPLE_4-----------------------------";
	cout<<"\n\tFACTORIAL == "<<(factorial(4));
	cout<<"\n\tFACTORIAL == "<<(factorial(5));
	cout<<"\n\tFACTORIAL == "<<(factorial(9));
	
	cout<<"\n--------------------EXAMPLE_5-----------------------------";
	box(10,4);
	cout<<"\n\t------------";
	box(3,3);
	
	cout<<"\n--------------------EXAMPLE_6-----------------------------";
	cout<<"\n\tAREA OF CIRCLE = "<<(area_circle(4));
	cout<<"\n\tAREA OF CIRCLE = "<<(area_circle(6));
	
	cout<<"\n--------------------EXAMPLE_7-----------------------------";
	cout<<"\n\tAREA OF CIRCLE = "<<(area_circle_1(3));
	cout<<"\n\tAREA OF CIRCLE = "<<(circumference(2));
	
	return 0;
}


