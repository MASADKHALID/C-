#include<iostream>
using namespace std;
int main(){  
//use for comment
//just ignore 1,2,3,5,,cout()
	//; semicolon end statement
	cout<<"----------------VARIABLE & DATATYPE--------------------------\n";
	//syntax: datatype variable name  = value;
	//syntax: datatype variable name;(variable decleration)
	//        variable name  = value;(variable initilization)
	//        variable_name(convention)
	//DATATYPE int float string double boolean char
	int var;//(variable decleration)
	var =2;//(variable initilization)
	cout<<var<<"\n";
	//string
	string name = "muhammad asad khalid";
	cout<<name<<"\n";
	//int
	int age = 19;
	cout<<age<<"\n";
	//float
	float weight = 50.55;
	cout<<weight<<"\n";
	//boolean
	bool attendence = true;
	cout<<attendence<<"\n";
	//char
	char gender = 'M';
	cout<<gender<<"\n";
	//ERROR VARIABLE
	//int 2var
	cout<<"----------------EXAMPLE1--------------------------\n";
	//------------------------------------------
	//EXAMPLE
	//name ramsha
	//string
	string name1 = "ramsha junaid";
	cout<<name1<<"\n";
	//int
	int age1 = 16;
	cout<<age1<<"\n";
	//float
	float weight1 = 43.3;
	cout<<weight1<<"\n";
	//boolean
	bool attendence1 = true;
	cout<<attendence1<<"\n";
	//char
	char gender1 = 'f';
	cout<<gender1<<"\n";
	cout<<"----------------EXAMPLE2--------------------------\n";
	//-------------------------------------------
	//EXAMPLE
	//AEYSHA
	//Q)DECLARE A VARIABLE OF string DATATYPE THAN INITILIZE TO word?
	string subject;
	subject= "english";
	cout<<"----------------EXAMPLE3--------------------------\n";
	//-------------------------------------------
	cout<<"----------------MULTIVARIABLE DECLERATION & INITILIZATION--------------------------\n";
	//MULTI VARIABLE DECLERATION 
	//datatype must be same for all variable
	//syntax: datatype var1,var2,var3..var(n);
	int a,b,c,d;
	a=2;
	b=3;
	c=4;
	d=5;
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n";
	//MULTI VARIABLE INITILIation
	char a1='a',b1='b',c1='c',d1='d';
	cout<<a1<<"\n"<<b1<<"\n"<<c1<<"\n"<<d1<<"\n";
	cout<<"----------------EXAMPLE4--------------------------\n";
	//EXAMPLE
	//RAMSHA
	//DECLARE 3 VARIABLE WITH STRING DATATYPE IN SINGLE LINE,NEXT LINE USE TO INITILIZE to any name
	string person_1,person_2,person_3;
	person_1="ramsha";
	person_2="ayessha";
	person_3="wadia";
	cout<<person_1<<"\n"<<person_2<<"\n"<<person_3<<"\n";
	//-------------------------------------------
	cout<<"----------------CONSTANT VARIABLE--------------------------\n";
	//const ==> whose vALUE CANT CAHNGE
	//const variable are always capital(convention)
	//TYPES ==> literal ,define
	//syntax:  const/define datatype variable name  = value;
	const string SPPED_OF_LIGHT = "3X10^8";
	cout<<SPPED_OF_LIGHT<<"\n";
	//ERROR
	/*mmulti comment
	const string SPPED_OF_LIGHT = "3X10^9";
	cout<<SPPED_OF_LIGHT<<"\n";*/
	//-------------------------------------------
	return 0;
} 
