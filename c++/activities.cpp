#include<iostream>
using namespace std;
int main(){
	cout<<"---marksheet-----------------";
	float first_subject,second_subject,third_subject,fourth_subject,fifth_subject,total_marks,percentage;
	cout<<"\n\tENTER MARKS::";
	cin >> first_subject;
	cout<<"\n\tENTER MARKS::";
	cin >> second_subject;
	cout<<"\n\tENTER MARKS::";
	cin >> third_subject;
	cout<<"\n\tENTER MARKS::";
	cin >> fourth_subject;
	cout<<"\n\tENTER MARKS::";
	cin >> fifth_subject;
	cout<<"\n\tENTER TOTAL MARKS::";
	cin >> total_marks;
	percentage =((first_subject+second_subject+third_subject+fourth_subject+fifth_subject)*100)/total_marks;
	cout<<"\n\tYOUR PERCENTAGE IS ==>"<<percentage;
	return 0;
}
