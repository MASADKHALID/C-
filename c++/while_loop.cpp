#include<iostream>
using namespace std;
int main(){
	cout<<"\n-------------------LOOPS------------------------------";
	//loops==> 1)for ,2)while,do while
	cout<<"\n-------------------WHILE LOOPS------------------------------";
	//WHEN WE DINT KNOW THE STARTING POINT
	//LOOP EXWCUTE TILL CONDITION IS FALSE
	//SYNTAX:while (condition){----INCREMENT/DECREMENT----}
	cout<<"\n-------------------EXAMPLE_1-----------------------------";
	
	bool pass = true;
	while(pass == true){
		cout<<"\n\twelldone";
		pass = false;
	}
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE";
	
	cout<<"\n-------------------EXAMPLE_2-----------------------------";
	
	int num = 1;
	while(num <= 10){
		cout<<"\n\tINSIDE WHILE LOOP"<<"i"<<num++;
	}
	cout<<"\n\tOUTSIDE WHILE LOOP"<<"i"<<num;
	
	cout<<"\n-------------------EXAMPLE_3-----------------------------";
	
	int count = 1;
	while(count <= 10){
		cout<<"\n\t2 X "<<count<<" "<<"="<<" "<<(count*2);
		count++;
	}
	cout<<"\n-------------------EXAMPLE_4-----------------------------";
	
	cout<<"\n\tDO YOU WANT TO CONTINUE::";
	string option;
	cin>>option;
	while(option == "yes"){
		cout<<"\n\tEXECUTE";
		option="no";
	}
	cout<<"\n\tSKIP WHILE LOOP";
	return 0;
}
