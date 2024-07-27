//OPER ATORS==> SYMBOL USE FOR SPECIFIC PURPOSE
#include<iostream>
using namespace std;
int main(){
	cout<<"-------------------OPERATORS----------------------------------------"<<"\n";
//SEVEN TYPES ==>ARTHEMITIC,INCREMENT/DECREMENT,RELATIONAL,LOGICAL,ASSIGNMENT
// ,ARTHEMETIC ASSIGNMENT
	cout<<"-------------------ARTHEMETIC----------------------------------------"<<"\n";
	//ARTHEMETIC==>ADDITION(+),SUBTRACTION(-),MULTIPLICATION(*),DIVISION(/),MODULUS(%)
	puts("-------------------CALCULATOR----------------------------------------");
	//==>+,-,*,/===>ANSWER IN SAME DAT_TYPE
	int first_number,second_number,add_result,sub_result,multi_result,reminder_result;//variable declare
	float div_result;
	cout<<"\tENTER FIRST  NUMBER ::";//print
	cin>>first_number;//input
	
	
	cout<<"\n\tENTER SECOND NUMBER ::";//print
	cin>>second_number;//input
	
	add_result=first_number+second_number;//formula==>backend
	cout<<"\n\tADDITION==>"<<add_result;//print
	
	sub_result=first_number-second_number;//formula==>backend
	cout<<"\n\tSUBTRACTION==>"<<sub_result;//print	
	
	multi_result=first_number*second_number;//formula==>backend
	cout<<"\n\tMULTIPLICATION==>"<<multi_result;//print
	
	div_result=first_number/second_number;//formula==>backend
	cout<<"\n\tDIVISION==>"<<div_result;//print
	
	reminder_result=first_number%second_number;//formula==>bac
	cout<<"\n\tREMINDER==>"<<reminder_result;//print
	
	cout<<"\n-------------------RELATIONAL OPERATORS-------------------------------"<<"\n";
	//RELATIONAL ==> CAMPARISON
	//RELATIONAL OPERATORS==>EQUAL TO(==),NOT EQUAL TO(!=),GREATER THAN EQUAL TO(>=)
	//,LESS THAN EQUAL TO(<=)GREATER THAN(>),LESS THAN(<),
	//RESULT SHOWS ONLY (0) OR (1)
	//always in bracket in cout==> because(IOII)
	int real_number_1=6,real_number_2=7;
	
	cout<<"\t\n"<<(real_number_1==real_number_2);
	cout<<"\t\n"<<(real_number_1!=real_number_2);
	cout<<"\t\n"<<(real_number_1>real_number_2);
	cout<<"\t\n"<<(real_number_1<real_number_2);
	cout<<"\t\n"<<(real_number_1>=real_number_2);
	cout<<"\t\n"<<(real_number_1<=real_number_2);
	
	cout<<"\n-------------------INCREMENT OPERATORS----------------------"<<"\n";
	//DOUBLE PLUS SIGN(++)
	//VARIABLE_NAME =VARIABLE_NAME + 1;
	//USE TO ADD ONE TO VARIABLE 
	//SYNTAX==>++VARIABLE_NAME;===> PREFIX INCREMENT OPERATOR
	//SYNTAX==>VARIABLE_NAME++;===> POSTFIX INCREMENT OPERATOR
	cout<<"\n-------------------PREFIX INCREMENT OPERATORS----------------------"<<"\n";
	//FIRST INCREMENT THAN PRINT
    int pre_in_variable = 5;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX INCREMENT IS="<<++pre_in_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX INCREMENT IS="<<++pre_in_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX INCREMENT IS="<<++pre_in_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX INCREMENT IS="<<++pre_in_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX INCREMENT IS="<<++pre_in_variable;
    
    cout<<"\n-------------------POSTFIX INCREMENT OPERATORS----------------------"<<"\n";
    //FIRST PRINT THAN NCREMENT
	int post_in_variable = 5;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX INCREMENT IS="<<post_in_variable++;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX INCREMENT IS="<<post_in_variable++;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX INCREMENT IS="<<post_in_variable++;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX INCREMENT IS="<<post_in_variable++;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX INCREMENT IS="<<post_in_variable++;
	
	cout<<"\n-------------------DECREMENT OPERATORS----------------------"<<"\n";
	//DOUBLE PLUS SIGN(--)
	//VARIABLE_NAME =VARIABLE_NAME - 1;
	//USE TO SUBTRACT ONE TO VARIABLE 
	//SYNTAX==>--VARIABLE_NAME;===> PREFIX INCREMENT OPERATOR
	//SYNTAX==>VARIABLE_NAME--;===> POSRFIX INCREMENT OPERATOR
	cout<<"\n-------------------PREFIX DECREMENT OPERATORS----------------------"<<"\n";
	//FIRST INCREMENT THAN PRINT
    int pre_de_variable = 10;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX DECREMENT IS="<<--pre_de_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX DECREMENT IS="<<--pre_de_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX DECREMENT IS="<<--pre_de_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX DECREMENT IS="<<--pre_de_variable;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING PREFIX DECREMENT IS="<<--pre_de_variable;
    
    cout<<"\n-------------------POSTFIX DECREMENT OPERATORS----------------------"<<"\n";
    //FIRST PRINT THAN NCREMENT
	int post_de_variable = 10;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX DECREMENT IS="<<post_de_variable--;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX DECREMENT IS="<<post_de_variable--;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX DECREMENT IS="<<post_de_variable--;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX DECREMENT IS="<<post_de_variable--;
    cout<<"\n\tTHE NEW VALUE OF PRE VARIABLE USING POSTFIX DECREMENT IS="<<post_de_variable--;
	
	cout<<"\n-------------------ATRHMETIC ASSIGNMENT OPERATORS----------------------"<<"\n";
	int num_0 = 1,num_1 = 2,num_2 = 2,num_3 = 2;
	float num_4 = 2;
	num_0 = num_0 +4;
	cout<<"\n\tNUMBER ::"<<num_0;
	//num_1 = num_1 + 1;
	num_1 +=5;//==>ADDITION_ASSIGNEMNT
	cout<<"\n\tNUMBER ::"<<num_1;
	//num_2 = num_2 - 1;
	num_2 -=5;//==>SUBTRACTION_ASSIGNEMNT
	cout<<"\n\tNUMBER ::"<<num_2;
	//num_3 = num_3 * 1;
	num_3 *=5;//==>MULTIPLICATION_ASSIGNEMNT
	cout<<"\n\tNUMBER ::"<<num_3;
	//num_4 = num_4 / 1;
	num_4 /=5;//==>DIVISION_ASSIGNEMNT
	cout<<"\n\tNUMBER ::"<<num_4;
	
	cout<<"\n-------------------LOGICAL OPERATORS----------------------"<<"\n";
	bool w = false,x = true ,y = false , z = true;
	cout<<"\n-------------------AND OPERATORS----------------------"<<"\n";
	cout<<"\n\tAND OPERATOR==>"<<((x)&&(z));//true,true
	cout<<"\n\tAND OPERATOR==>"<<((x)&&(y));//true,false
	cout<<"\n\tAND OPERATOR==>"<<((w)&&(y));//false,false
	cout<<"\n-------------------OR OPERATORS----------------------"<<"\n";
	cout<<"\n\tOR OPERATOR==>"<<((x)||(z));//true,true
	cout<<"\n\tOR OPERATOR==>"<<((x)||(y));//true,false
	cout<<"\n\tOR OPERATOR==>"<<((w)||(y));//false,false
	cout<<"\n-------------------NOT OPERATORS----------------------"<<"\n";
	cout<<"\n\tNOT OPERATOR==>"<<!(x);//true
	cout<<"\n\tNOT OPERATOR==>"<<!(y);//,false

	return 0;
}
