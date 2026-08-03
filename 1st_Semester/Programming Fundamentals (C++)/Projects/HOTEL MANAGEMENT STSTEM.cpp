

#include <iostream> // --> Used for cin (input) and output (cout) functionalities
#include <fstream>  
#include <string>
//#include <cstring>
//#include <cstdlib>
//#include <iomanip>

using namespace std;
int counter=0; 
int no[100];
string cn [100];
void display(){
	
	// You must use these two colors --> 4e and 8e
	system("Color 4E");
	cout << "\n\t\t****************************************************";
	cout << "\n\t\t* WELCOME TO PALM-PARADISE HOTEL MANAGEMENT STSTEM *";
	cout << "\n\t\t****************************************************";
}

void reserveRoom ()
{
		
		int room_no;
		char roomType[10];
		char roomClassfication[10];
	    char name[50];
	    char address[70];
	    char phone[15];
	    int days;
		int numberOfDaysToCheckout;
	    float charges;
	    
	    	cout << "\n----------------------";
	    	cout << "\nEnter Customer Details";
		    cout << "\n----------------------";
		
			
//     int r, flag;
		ofstream fout("Record.txt");
//		ifstream readfile("Record.txt" ); //ios::in
		
	    cout << "\nRoom no: ";
	    cin >> room_no;
	    fout <<"Room Number : "<<room_no<<endl;
	    cin.ignore();  // Clear the input buffer to avoid issues with getline
   
        cout << " \nRoom Type (Sing/Doub/Triple): ";
        cin.getline(roomType, 10);
        fout<<"Room Type : "<<roomType<<endl;
        
        cout << " \nAC/Non-AC: ";
        cin.getline(roomClassfication, 10);
        fout<<"AC/Non-AC : "<<roomClassfication<<endl;
        
        cout << " \nName: ";
        cin.getline(name, 50);  // Now reads the full name properly
        fout<<"Name : "<<name<<endl;

        cout << " \nAddress: ";
        cin.getline(address, 70);  // Now reads the full address properly
        fout<<"Address : "<<address<<endl;

        cout << " \nPhone No: ";
        cin.getline(phone, 15);
        fout<<"Phone : "<<phone<<endl;

        cout << " \nNo of Days to Checkout: ";
        cin >> days;
        fout<<"No.of Days to Checkout : "<<days<<endl;
        cin.ignore();  // Clear the input buffer again before calculating charges
        
        cout << "\n==========================";
		cout << " \nYour Total Charges: ";
		charges = days * 5000;  
		cout << charges;
		fout <<"Charges :  " << charges<<endl;
		
		cout << "\n==========================";
		cout << endl;
        cout << "\nDear " << name << ", your reservation for room number " << room_no << " is confrimed now.";
       no[counter]=room_no;
       cn[counter]=name;
	    counter++;
//        ofstream file ("allocate.txt" , ios::app);
//        file<<name<<endl;
//        file<<room_no<<endl;
        
        cout << "\n\n\n Press any key to continue.....!!";
    cin.get();
    fout.close();
    
    
}


void searchGuestRecord()
{
	char nameForSearch[30];
	string text;
	cout << "\n\nEnter Your Name:";
    cin>>nameForSearch;
   
	

   ifstream readfile("Record.txt" );	
	
	
    
    cout << "\n----------------------";
	cout << "\nGuest Details";
	cout << "\n----------------------";
	cout << endl;
	
    while(getline(readfile,text))
    {
    	cout<<text<<endl;
	}		
	
	cout << "\n\n\n Press any key to continue.....!!";
    cin.get();		
    
}

	
void numberOfRoomsToCheckout() 
{	
cout<<"the amount of booked rooms = "<<counter<<endl;

	string l;
	ifstream read("record.txt");
	while (getline (read,l))
	{
		cout<<l<<endl;
	}
	
	for(int i=0; i<counter; i++){
		cout<<"room no "<<no[i]<<"  Allocated to  "<<cn[i]<<endl;
		
	}
	
	cout << "\n\n\n Press any key to continue.....!!";
    cin.get();
	
	
}




    



int main ()
{
	system("Color 4E");
		display();
		int choice;
		int numberOfDaysToCheckout;	
		cout << "\n\n\n\t\t\t1.Reserve A Room"<<endl;
		cout << "\n\t\t\t2.Search Guest Record"<<endl;
		cout << "\n\t\t\t3.Update Guest Record"<<endl;
		cout << "\n\t\t\t4.Rooms Allocated"<<endl;
		cout << "\n\t\t\t5.Exit"<<endl;
		cout << "\n\n\t\t\tEnter Your Choice: ";;
		cin >> choice;
		
		while (choice!=5)
	{
		switch(choice){
			
			case 1: 
        			reserveRoom();
					break;
			case 2: 
        			searchGuestRecord();
					break;
			case 3:  
//        			updateGuestRecord();
        			
					break;
		
			case 4: 
        			numberOfRoomsToCheckout();
					break;
			case 5:	
        			system("exit");
		
		}
		cout << "\n\n\n\t\t\t1.Reserve A Room"<<endl;
		cout << "\n\t\t\t2.Search Guest Record"<<endl;
		cout << "\n\t\t\t3.Update Guest Record"<<endl;
		cout << "\n\t\t\t4.Rooms Allocated"<<endl;
		cout << "\n\t\t\t5.Exit"<<endl;
		cout << "\n\n\t\t\tEnter Your Choice: ";;
		cin >> choice;
		
	}
	
	
}
		



	

	

