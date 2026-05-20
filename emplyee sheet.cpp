#include <iostream>
#include <string>
using namespace std;
int main(){
	//creating an employee pay sheet
	cout<< "Welcome To Employee Pay Sheet"<<endl;
	//declaring info items of user
	int ID;
	string name;
	string designation;
	int days;
	int overtime;
	int basicsalary;
	int funds;
	//taking info from the user
	cout<<"enter your id no"<<endl;
	cin>>ID;
	cout<<"enter your name"<<endl;
	cin>>name;
	cout<<"enter your designation"<<endl;
	cin>>designation;
	cout<<"enter your presents"<<endl;
	cin>>days;
	cout<<"enter your over time hours"<<endl;
	cin >>overtime;
	cout<<"enter your salary"<<endl;
	cin>>basicsalary;
	cout<<"Enter Your Funds"<<endl;
	cin>>funds;
	//calculating earning of him 
	cout<<"Your Earninig"<<endl;
	//declaring
	float houserent;
	float medical;
	float conveyance;
	float totalofall;
	float otamount;
	float grosssalary;
	//calculating
	houserent=basicsalary*8.8/100;
	medical=basicsalary*9/100;
	conveyance=basicsalary*9.2/100;
	totalofall=houserent+medical+conveyance;
	otamount=basicsalary/30/overtime;
	grosssalary=basicsalary+totalofall+otamount;
	//printing
	cout<<"your house rent:"<<houserent<<endl;
	cout<<"your medical Allowance:"<<medical<<endl;
	cout<<"your conveyance :"<<conveyance<<endl;
	cout<<"your overtime money:"<<otamount<<endl;
	cout<<"your totoal gross salary:"<<grosssalary<<endl;
	//calculating deduction of a person
	//declaring
	cout<<"Your Dedudction"<<endl;
	float tax;
	float fund=funds;
	float absdeduction;
	float totaldeduction;
	//calculating
	tax=grosssalary*3.4/100;
	absdeduction=(basicsalary/30)*(30-days);
	totaldeduction=tax+fund+absdeduction;
	//printing
	cout<<"your income tax:"<<tax<<endl;
	cout<<"your funds:"<<fund<<endl;
	cout<<"your absent day deduction:"<<absdeduction<<endl;
	cout<<"your total deduction:"<<totaldeduction<<endl;
	//Calculating Net Salary
	cout<<"Net salary:"<<endl;
	//declaring
	float netsalary;
	//calculating
	netsalary=grosssalary-totaldeduction;
	//printing
	cout<<"Your Net Salary="<<netsalary;
	
	return 0;		
}
