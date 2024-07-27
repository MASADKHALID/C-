#include<iostream>
using namespace std;
int main(){
	cout<<"\n-------------------JUMP STATMENTS------------------------------";
	cout<<"\n-------------------BREAK STATMENT------------------------------";
	int  num = 1;
	while (num <= 5){
		if(num == 1){
			cout<<"\n\ti am "<<num;
		}
		else if(num == 2){
			cout<<"\n\ti am "<<num;
		}
		else if(num == 3){
			cout<<"\n\ti am "<<num;
			break;
		}
		else if(num == 4){
			cout<<"\n\ti am "<<num;
		}
		else if(num == 5){
			cout<<"\n\ti am "<<num;
		}
		num++;
	}
	cout<<"\n\t"<<num;
	
	cout<<"\n-------------------CONTINUE STATMENT------------------------------";
	int  number = 1;
	while (number <= 5){
		if(number == 1){
			cout<<"\n\ti am "<<number;
		}
		else if(number == 2){
			cout<<"\n\ti am "<<number;
		}
		else if(number == 3){
			cout<<"\n\ti am "<<number;
			number++;
			continue;
			number++;
		}
		else if(number == 4){
			cout<<"\n\ti am "<<number;
		}
		else if(number == 5){
			cout<<"\n\ti am "<<number;
		}
		number++;
	}
	cout<<"\n\t"<<number;
	cout<<"\n-------------------GOTO STATMENT------------------------------";
	cout<<"\n-------------------RETURN STATMENT------------------------------";
	cout<<"\n-------------------exit() STATMENT------------------------------";
}
