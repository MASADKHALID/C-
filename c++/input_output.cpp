//BASIC STRUCTURE OF C++
//every statement must end with semicoloan(;)
/*SYNTAX; #include<iostream>====>EXTERNAL files /LIBRARIES
          using namespace std;==>STANDARD LIBRRY
          int main (){       ===>MAIN METHOD,,MOREOVER DISCUSS IN CHAPTER 5
		  	//statement//    ===>{(BODYSTART)STATEMENT;(BODYCLOSED)}
		  	return 0;        ===>EXIT LINE ,,DISCUSS IN CHAPTER 5
		  }
//COMMENT ==>IGNORED BY COMPILER,BUT USER CAN READ
          ==>SINGLE LINE COMMENT ==> USE (//)
          ==>MULTI LINE COMMENT  ==> USE(/*COMMENT*///)
#include<iostream>
          using namespace std;
          int main (){
			cout<<"----------------------INPUT/OUTPUTHANDLING------------------------------";
			//<iostream> ==>performs I/O==> mentioned on first line
			cout<<"----------------------OUTPUT FUNCTIION------------------------------";
			//SYNTAX: cout<<"statment";   ==> FOR PRINT
			//        cout<<variable_name;==>FOR SEE STORE VALUE
			//        puts(same_rule,15,16)
			//        use insertion operator(<<)
			cout<<"----------------------EXAMPLE_1------------------------------";
			cout<<"----------------------INPUT FUNCTION------------------------------";
			//USE CIN ==> SEE IN
			//SYNTAX  cin>>variable_name;
			int first_variable;
			cin>>first_variable;
			cout<<first_variable;
		  	return 0;
		  }
