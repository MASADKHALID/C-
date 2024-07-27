//BASIC STRUCTURE OF C++
//every statement must end with semicoloan(;)==>terminater
/*SYNTAX; #include<iostream>====>EXTERNAL files /LIBRARIES
          using namespace std;==>STANDARD LIBRRY
          int main (){       ===>MAIN METHOD,,MOREOVER DISCUSS IN CHAPTER 5
		  	//statement;//    ===>{(BODYSTART)STATEMENT;(BODYCLOSED)}
		  	return 0;        ===>EXIT LINE ,,DISCUSS IN CHAPTER 5
		  }
//COMMENT ==>IGNORED BY COMPILER,BUT USER CAN READ
          ==>SINGLE LINE COMMENT ==> USE (//)
          ==>MULTI LINE COMMENT  ==> USE(/*COMMENT*///)
#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	
	cout<<"----------------------INPUT/OUTPUTHANDLING------------------------------"<<"\n";
	//<iostream> ==>performs I/O==> mentioned on first line
	cout<<"----------------------OUTPUT FUNCTIION------------------------------"<<"\n";
	//<<  ==> insertion
	//SYNTAX: cout<<"statment";   ==> FOR PRINT
	//        cout<<variable_name;==>FOR SEE STORE VALUE
	//        puts(same_rule,15,16)==> NEXT LINE AUTOMATICALLY
	//        use insertion operator(<<)
	cout<<"HI.. I AM COUT FOR PRINT"<<"\n";
	int zero_variable = 7;
	cout<<"NUMBER="<<zero_variable<<"\n";
	puts("HI--I AM PUTS");
	puts("new line");
	cout<<"----------------------EXAMPLE_1------------------------------"<<"\n";
	cout<<"AYESHA"<<"\n"<<"RAMSAH"<<"\n";
	cout<<"----------------------INPUT FUNCTION-----------------------------"<<"\n";
 	//USE CIN ==> SEE IN >> extractor
	//SYNTAX:  data_type variable_name = value;
	//         cin>>variable_name;
	int first_variable;
	puts("ENTER ANY REAL NUMBER::");
	cin>>first_variable;
	cout<<"HERES YOUR NUMBER::"<<first_variable<<"\n";
	cout<<"----------------------EXAMPLE_2------------------------------"<<"\n";
	//TAKE INPUT OF STRING DATATYPE AND PRINT IN NEW LINE?
	cout<<"HI---I m cin";
	string person1;
	cout<<"ENTER YOU NAME :";
	cin>>person1;
	cout<<person1<<"\n";
	
	cout<<"HI---I AM GETCH  AND I AM WAITING FOR ANY COMMAND TO EXECUTE";
	char ch =getch();
	cout<<"\n"<<",NOW I RUN BECAUSE USER HIT SOME CHARACTER,";
	cout<<"\n"<<",I DONT KNOW THE THE INPUT COMMAND SO I CANT TELL/PRINT YOU,";  
	return 0;
	}
