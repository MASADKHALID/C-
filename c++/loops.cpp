#include<iostream>
using namespace std;
int main(){
	cout<<"\n-------------------LOOPS------------------------------";
	//loops==> 1)for ,2)while,do while
	cout<<"\n-------------------FOR LOOPS------------------------------";
	//start of loop ----know
	//SYNTAX;FOR(INITILIZATION ;CONDITION ; INCREMENT/DECREMENT){-----STATMENT---}
	cout<<"\n-------------------EXAMPLE_1-----------------------------";
	
	//initilization part execute first then enter loop if condition true
	for(bool pass =true; pass == true;pass = false){
		cout<<"\n\twelldone";
	} 
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE";
	
	cout<<"\n-------------------EXAMPLE_2-----------------------------";
	
	for(int count=1;count<=10;count++){
		cout<<"\n\t"<<count<<"iteration = "<<count;
	}
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE";
	       
	cout<<"\n-------------------EXAMPLE_3-----------------------------";
	
	for(int i = 1;i<=10;i++){  
		cout<<"\n\t"<<i<<"iteration "<<"2 x "<<i<<" = "<<(i*2); 
	}
	
	for(int j = 1;j<=10;j++){
		cout<<"\n\t3 x "<<j<<" = "<<(j*3);
	}
	cout<<"\n\tASSALAMUALIKUM...I AM OUTSIDE CODE";
	
	cout<<"\n-------------------NESTED LOOP-----------------------------";
	for(int i = 1 ;i<=3;i++){
		for(int j=1; j<=10;j++){
			cout<<"\n\t"<<i<<" x "<<j<<" = "<<(i*j);
		}
		cout<<"\n\titeration end for loop"<<i;
	}
	cout<<"\n-------------------EXAMPLE_5-----------------------------";
	int sum=0;
	for(int i = 1;i<=20;i++){
		sum  = sum+i;
	}
	cout<<"\n\t"<<sum;
	cout<<"\n-------------------EXAMPLE_6-----------------------------";
	
	for(int i = 1;i<=10;i++){
		int square  = i*i;
		cout<<"\n\t THE SQUARE OF"<<" "<<i<<" "<<"is"<<" "<<square;
	}
	cout<<"\n-------------------EXAMPLE_7-----------------------------";
	for (int i = 0 ;i<=5 ;i++){
		if (i == 1){
			cout<<"\n\t*";
		}
		else if (i == 2){
			cout<<"\n\t**";
		}
		else if (i == 3){
			cout<<"\n\t***";
		}
		else if (i == 4){
			cout<<"\n\t****";
		}
		else if (i == 5){
			cout<<"\n\t*****";
		}
	}
	return 0;
}
