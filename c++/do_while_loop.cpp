#include<iostream>
using namespace std;
int main(){
	cout<<"\n-------------------LOOPS------------------------------";
	//loops==> 1)for ,2)while,do while
	cout<<"\n-------------------DO WHILE LOOPS------------------------------";
	//post test loop
	//do{              }while;
	cout<<"\n-------------------EXAMPLE_1-----------------------------";
	int num = 1;
	do{
		cout<<"\n\t"<<"HELLO I AM DO BODY";
	}
	while(num == 2);{
		cout<<"\n\tinside loop";
	}
	cout<<"\n\thello";
	return 0;
}
