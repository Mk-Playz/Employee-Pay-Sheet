#include <iostream>
#include <string>
using namespace std;
int main(){
//-----------------------------------
//           Variables
//-----------------------------------
	int ID;
	string name;
	string designation;
	int days;
	float overtime;
	int basicsalary;
	int funds;
	float houserent;
	float medical;
	float conveyance;
	float totalofall;
	float otamount;
	float grosssalary;
	float tax;
	float fund=funds;
	float absdeduction;
	float totaldeduction;
	float netsalary;
//-----------------------------------
//            Printing
//-----------------------------------
cout<<"----------------------------------------------------------------"<<endl;
cout<<"                      Employee Pay Sheet                        "<<endl;
cout<<"----------------------------------------------------------------"<<endl;
	cout<<"Enter your ID no :";
	cin>>ID;
	cout<<"Enter your name :";
	cin>>name;
	cout<<"Enter your designation :";
	cin>>designation;
	cout<<"Enter your Pay Days :";
	cin>>days;
	cout<<"Enter your O.T hours :";
	cin >>overtime;
	cout<<"Enter your salary :";
	cin>>basicsalary;
//-----------------------------------
//         calculations
//-----------------------------------
	houserent=basicsalary*8.8/100;
	medical=basicsalary*9/100;
	conveyance=basicsalary*9.2/100;
	totalofall=houserent+medical+conveyance;
	otamount=basicsalary/30/overtime;
	grosssalary=basicsalary+totalofall+otamount;
	tax=grosssalary*3.4/100;
	absdeduction=(basicsalary/30)*(30-days);
	totaldeduction=tax+fund+absdeduction;
	netsalary=grosssalary-totaldeduction;
 
cout<<"-------------------------------------------------"<<endl;
cout<<"                Your Basic Info                  "<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"ID :"<<ID<<endl;
cout<<"Name :"<<name<<endl;
cout<<"Designation :"<<designation<<endl;
cout<<"O.T Hours :"<<overtime<<endl;
cout<<"Basic Salary :"<<basicsalary<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"                 Your Earnings                   "<<endl;
cout<<"-------------------------------------------------"<<endl;

	cout<<"H.Rent :"<<houserent<<endl;
	cout<<"Medical :"<<medical<<endl;
	cout<<"Conveyance :"<<conveyance<<endl;
	cout<<"O.T Amount :"<<otamount<<endl;
	cout<<"Gross Salary :"<<grosssalary<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"                Your Deductions                  "<<endl;
cout<<"-------------------------------------------------"<<endl;
	cout<<"your income tax:"<<tax<<endl;
	cout<<"your funds:"<<fund<<endl;
	cout<<"your absent day deduction:"<<absdeduction<<endl;
	cout<<"your total deduction:"<<totaldeduction<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"                Your Net Salary                  "<<endl;
cout<<"-------------------------------------------------"<<endl;
	cout<<"Net Salary :"<<netsalary<<endl;
	
	return 0;		
}
