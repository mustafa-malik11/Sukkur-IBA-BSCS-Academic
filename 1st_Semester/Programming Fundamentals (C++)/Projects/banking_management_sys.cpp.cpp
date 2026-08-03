#include <iostream>			//For basic Input and Output
#include <fstream>			// For Filing 
#include <windows.h>		//For Clear Screen & Colouring
#include <unistd.h>			//For Sleep
#include <conio.h>     		//For Getch
#include <iomanip>			//for spacing and decimal points
using namespace std;

	// Decelared Functions.
void detail();		// user's personal information
void displaydetails();	// Display user's personal information	
void deposit();		// deposit the money
void withdraw_money();	// withdraw money
void transfer_moeny();	// transfer monet
void payment(); 		// payment
	void payment_process();		// *function for payment process. 
void delete_account();	// deleting account 
void exit_program();	// exit the program
int main();			// main function is sometime called in the other functions
void back_menu();	// function to backward to main menu.
     
 	// global variables 
    string name,cnic,c_num, f_name,f_cnic,f_num,account;
	double balance=0;
		
	// backward	
	void back_menu(){
	cout<<"press b key to back main menu "<<endl;
	again:
	char input;
	cin>>input;
	if(input=='b'||input=='B' ){
	system("cls");
	main();		
	}else{
		cout<<"\t\t invalid input"<<endl;
		cout<<"press any key to take input again"<<endl;
		getch();
		goto again;
	}
	}
		// Function definations
		void detail() // User's details 
{
	system("color f0");
	
		cout<<"\t\t Your full name "<<endl;
		cin. ignore ();
		getline (cin, name);
		cout<<endl;
		
		cout<<"\t\t Enter your CNIC"<<endl;
		getline (cin, cnic);
				
		cout<<"\t\t Enter your phone number"<<endl;
		getline(cin,c_num);
		
		cout<<"\t\t Enter Your father's name "<<endl;
	cin. ignore ();
		getline (cin, f_name);
		
		cout<<"\t\t Enter your father's CNIC"<<endl;
		getline (cin, f_cnic);
				
		cout<<"\t\t Your father's contact number "<<endl;
		getline(cin,f_num);
			
		cout<<"\t\t Enter your account number "<<endl;
	cin. ignore ();
		getline(cin,account);
		
	  cout<<"\t\t Enter your balance "<<endl;
		cin>> balance;
		ofstream my_balance("balance.txt");
		my_balance<<balance;
		my_balance.close();
	
	// Write these details in a file
	ofstream my_file("my_account.txt",ios::app); //"Trunc" append means store data of multiple accounts
	if(my_file.is_open())
	{
		my_file<<"\t\t Name: "<<" \t\t "<< name <<endl;
		my_file<<"\t\t CNIC: "<<" \t\t "<< cnic <<endl;
		my_file<<"\t\t Contact number:  "<<" \t\t " <<  c_num <<endl;
		my_file<<"\t\t Father's name: "<< " \t\t " << f_name <<endl;
		my_file<<"\t\t Father's contact number: "<<" \t\t " <<  f_num <<endl;
		my_file<<"\t\t Acount number: "<<" \t\t " <<  account <<endl;
		my_file<<"\t\t Balance: "<< " \t\t " <<  balance <<endl;
		cout<<endl<<endl;
		my_file.close();			
	cout<<endl<<endl;
	back_menu();
	} else {
		cout<<"\t\t Error! "<<endl;
	}
}
		//  user's information
		void displaydetails() 
	{
	system("color f0");	
	ifstream my_file("my_account.txt");
	if(my_file.is_open())
	{
		string read;
		cout<<"\t\t\t\t Details of your account: "<< endl << endl;
		
		while(getline(my_file, read)){
			cout<<"\n\t\t\t\t" << read << endl;
		}
		my_file.close();
	}else {
		cout<<"\t\t\t No account is found! " <<endl;
	}
	cout<<endl<<endl<<endl;
	back_menu();
}
	// function for deposit
	void deposit_() {
		system("color f0");
		double deposit_amount;
		cout<<"Deposit "<<endl;
		cout<<"Enter your deposit amount "<<endl;
		cin>>deposit_amount;
	ifstream my_file("balance.txt");	
	double bal;
	my_file >> bal;
	balance=bal;
	my_file.close();	
		
		if(deposit_amount>0)
		{
			balance+=deposit_amount;
			cout<<"Amount is successfully deposited "<<endl;
			cout<<"Your new balance is : "<< balance <<endl;
			
		ofstream my_file("my_account.txt");
		if (my_file.is_open()){
		my_file<<"Name "<< name <<endl;
		my_file<<"CNIC "<< cnic <<endl;
		my_file<<"Contact number "<< c_num <<endl;
		my_file<<"Father's name "<< f_name <<endl;
		my_file<<"Father's contact number "<< f_num <<endl;
		my_file<<"Acount number "<< account <<endl;
		my_file<<"Balance "<< balance <<endl;
		my_file.close();
				
				// creating a seprate file for balance 
		ofstream my_balance("balance.txt");	
		my_balance<<balance<<endl;
		my_balance.close();
		cout<<endl<<endl;
		back_menu();
		}else {
			cout<<"Error! "<<endl;
			back_menu();
		}		
		}else {
		cout<<"Error! "<< right << setw(10)<< endl <<"\t\t Please wait........."<<endl;
		cout << sleep(2);
		cout<<endl<<endl;
		back_menu();
		}
	}
	
	// function for withdraw amount
	void withdraw_money()
	{
		system("color f0");
		double withdraw_amount;
		cout<<"Enter your withdraw anount: ";
		cin>>withdraw_amount;
	ifstream my_file("balance.txt");	
	double bal;
	my_file >> bal;
	balance=bal;
	my_file.close();
			if (withdraw_amount>0 && withdraw_amount<=balance)
		{
			balance = balance-withdraw_amount;
			cout<<"New balance " << balance <<endl;
			
			// update balance in file.
		ofstream my_file("my_account.txt");
		if (my_file.is_open()){
		my_file<<"Name "<< name <<endl;
		my_file<<"CNIC "<< cnic <<endl;
		my_file<<"Contact number "<< c_num <<endl;
		my_file<<"Father's name "<< f_name <<endl;
		my_file<<"Father's contact number "<< f_num <<endl;
		my_file<<"Acount number "<< account <<endl;
		my_file<<"Balance "<< balance <<endl;
		my_file.close();
		ofstream my_balance("balance.txt");	// creating a seprate file for balance 
		my_balance<<balance<<endl;
		my_balance.close();
		cout<<endl<<endl;
	back_menu();	
	} else {
			cout << "Error updating account." << endl;	
		back_menu();
		}	
	} else{
	cout << "Insufficient balance or invalid amount.	" << endl;
	cout<<endl;
	back_menu();	
	}
	
}
	// transering money
	void transfer_moeny(){
		system("color f0");
		double transfer_amount;
		cout<<"Enter your amount: 	 ";
		cin>>transfer_amount;
	ifstream my_file("balance.txt");	
	double bal;
	my_file >> bal;
	balance=bal;
	my_file.close();
	
		if(transfer_amount > 0 && transfer_amount <= balance)
		{
			balance -= transfer_amount;
			
			cout<<"Money transfered successfully. "<<endl;
			cout<<"Your new balance is "<< balance <<endl;
			
			//updated balance in the file
			ofstream my_file("my_account.txt");
		if (my_file.is_open())
		{
		my_file<<"Name "<< name <<endl;
		my_file<<"CNIC "<< cnic <<endl;
		my_file<<"Contact number "<< c_num <<endl;
		my_file<<"Father's name "<< f_name <<endl;
		my_file<<"Father's contact number "<< f_num <<endl;
		my_file<<"Acount number "<< account <<endl;
		my_file<<"Balance "<< balance <<endl;
		my_file.close();
		ofstream my_balance("balance.txt");	// creating a seprate file for balance 
		my_balance<<balance<<endl;
		my_balance.close();
	cout<<endl<<endl;
	back_menu();
		} 	else {
						cout << "Error updating account." << endl;
					back_menu();
					}
	}else {
			cout<<"Your balance is in sufficient "<<endl;
	cout<<endl<<endl;
	back_menu();			
			}
	}
		// payment process 
	void payment_process(){
			system("color f0");
			
			double payment_amount;
			cout<<"Enter your payment amount:	";
			cin>>payment_amount;
					
	ifstream my_file("balance.txt");	
	double bal;
	my_file >> bal;
	balance=bal;
	my_file.close();
			
			if(payment_amount>0 && payment_amount<=balance)
			{
				balance = balance - payment_amount;
				cout<<"Payment successful "<<endl;
				cout<<"Your new balance is:	  "<< balance <<endl;
		
				// updated balance in file
				ofstream my_file("my_account.txt");
				if (my_file.is_open()){
					my_file<<"Name "<< name <<endl;
					my_file<<"CNIC "<< cnic <<endl;
					my_file<<"Contact number "<< c_num <<endl;
					my_file<<"Father's name "<< f_name <<endl;
					my_file<<"Father's contact number "<< f_num <<endl;
					my_file<<"Acount number "<< account <<endl;
					my_file<<"Balance "<< balance <<endl;
					my_file.close();
					ofstream my_balance("balance.txt");	// creating a seprate file for balance 
					my_balance<<balance<<endl;
					my_balance.close();
	cout<<endl<<endl;
	back_menu();			
				}	else {
					cout << "Error updating account." << endl;
				back_menu();	
				}	
			}
			else 
			{
				cout<<"Insufficient balance  "<<endl;	
			cout<<endl<<endl;			
		back_menu();
			}
		}
		
	// main function of payment
	void payment(){
		int payment_choice;
		cout<<"Payment Menu "<<endl;
		cout<<endl<<endl<<endl;
		cout<<" 1)	Gas "<<endl;	
		cout<<" 2)	Utility bill "<<endl;	
		cout<<" 3)	University Challah/fee "<<endl;
		
		cout<<"Choose one:	";
		cin>>payment_choice;	
		switch(payment_choice){
			case 1:
				cout<<" 1)	Gas "<<endl;
				payment_process();
			break;
			
			case 2:
				cout<<" 2)	Utility bill "<<endl;	
				payment_process();
			break;
			
			case 3:
				cout<<" 3)	University Challah/fee "<<endl;
				payment_process();
			break;
			
			default:
				cout<<"No other option is available "<<endl;
			break;	
		}
	}	
			
	// function for deleting account
	void delete_account()
	{
		if(remove("my_account.txt")==0){
		cout<<"Account deleted successfully "<<endl;
		cout<<endl<<endl;
	back_menu();
		}
		else {
			cout<<"Error "<<endl;	
		back_menu();
		}
	}
	
	// Exiting the program
	void exit_program()
	{
	cout << endl<<endl<<endl;
	cout<<"	H     H      A   V       V  E E E E           A           NN    N  I   C C C  E E E E       D D D       A    Y     Y   "<<endl;
	cout<<"	H     H     A A   V     V   E                A A          N N   N  I  C       E             D    D     A A    Y   Y    "<<endl;
	cout<<"	H H H H    A   A   V   V    E E E E         A   A         N  N  N  I  C       E E E E       D     D   A   A     Y      "<<endl; 
	cout<<"	H     H   AAAAAAA   V V     E              AAAAAAA        N   N N  I  C       E             D    D   AAAAAAA    Y      "<<endl;
	cout<<"	H     H  A       A   V      E E E E       A       A       N    NN  I   C C C  E E E E       D D D   A       A   Y      "<<endl;	
	}
	
// main body  
int main()
{
	system("color f0");
	cout<<endl<<endl<<endl;
	cout<<"\t\t\t\t ==== WELCOME AT BANKING MANAGMENT SYSTEM ==== "<<endl;
	cout<<endl<<endl<<endl<<endl;;
	cout<<"\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	cout<<endl<<endl;
	cout<<"\t\t\t\tChoose one of the following "<<endl;
	cout<<endl;
	
	int choice;	
	cout<<"\t\t\t\t\t1). create my account "<<endl;
	cout<<"\t\t\t\t\t2). Detail of my account "<<endl;
	cout<<"\t\t\t\t\t3). Cash deposit "<<endl;
	cout<<"\t\t\t\t\t4). Cash withdraw "<<endl;
	cout<<"\t\t\t\t\t5). Transfer money "<<endl;	
	cout<<"\t\t\t\t\t6). Payment "<<endl;	
	cout<<"\t\t\t\t\t7). Delete my account "<<endl;
	cout<<"\t\t\t\t\t8). Exit "<<endl;
	cout<<endl<<endl;
	cout<<"\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	
	cout<<"\t\tChoose only one option : ";
	cin>>choice;
	
	cout<<endl;
	cout<<"Please wait a moment............. " << endl;
	cout<<sleep(2);
	
	system("cls");
	cout<<endl<<endl;
	
	
	switch(choice)
{
		case 1:		
				cout<<" create my account \n\n"<<endl;
			 	detail();	
		break;
		
		case 2:		
				displaydetails();
		break;

		case 3:		
				cout<<"Cash deposit "<<endl;
				deposit_();
		break;

		case 4:
			cout<<"Cash withdraw \n\n "<<endl;
			withdraw_money();
			
		break;
		
		case 5:
		
			cout<<"Transfer money"<<endl;
			cout<<endl;
			transfer_moeny();
			
		break;
			
		case 6:	cout<<"Payment"<<endl;
				cout<<endl<<endl;
				payment();
		break;
			
		case 7:
			cout<<"Delete my account \n\n "<<endl;
			delete_account();
		break;

		case 8:
			exit_program();
		break;
						
		default:	
				cout<<"Error!"<<endl; 
		break;
					
	}		
}
