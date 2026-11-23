#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
    
	char space[3][3] ={{'1','2','3'}, 
	                   {'4','5','6'}, 
	                   {'7','8','9'}};
	char round = 'X';
	int row,col;
	bool draw= false;
	
	
void display_space(){
	//to override the data
	system("cls");
	cout<<setw(56) <<"-------------------------" <<endl;
    cout<<setw(56) <<"TIC TAC TOE       "<<endl;
    cout<<setw(56) <<"-------------------------" <<endl;
    cout<<endl;
	cout<<setw(42) <<"Player1 [X]"<<endl;
	cout<<setw(42) <<"Player2 [O]"<<endl;
	cout<<endl;
	
	//board
	cout<<setw(53) <<"    |     |    \n";
	cout<<setw(40) <<space[0][0]<<" | "<<space[0][1]<<"   |  "<<space[0][2]<<" \n";
	cout<<setw(54) <<"____|_____|____ \n";
	cout<<setw(53) <<"    |     |    \n";
	cout<<setw(40) <<space[1][0]<<" | "<<space[1][1]<<"   |  "<<space[1][2]<<" \n";
    cout<<setw(54) <<"____|_____|____ \n";
    cout<<setw(53) <<"    |     |    \n";
    cout<<setw(40) <<space[2][0]<<" | "<<space[2][1]<<"   |  "<<space[2][2]<<" \n";
    cout<<setw(53) <<"    |     |    \n";  
}
  
  
   //player's round
   void player_round(){
   	int choice;

   
   	if(round=='X')
   	cout<<setw(60)<<"\n player1  round:";
   	
   	else if(round=='O')
   	cout<<setw(60)<<"\n  player2 round:";
   	
   	//numbers to put in board
   	cin>>choice;
   	switch(choice){
   		case 1: 
		    row=0; col=0;
   		break;
   		case 2: 
		    row=0; col=1;
   		break;
   		case 3:
		    row=0; col=2;
   		break;
   		case 4:
		    row=1; col=0;
   		break;
   		case 5: 
		   row=1; col=1;
   		break;
   		case 6: 
		   row=1; col=2;
   		break;
   		case 7:
		   row=2; col=0;
   		break;
   		case 8: 
		   row=2; col=1;
   		break;
   		case 9: 
		   row=2; col=2;
   		break;
   		
   		default:
   			cout<<"invalid";
   			break;
   		
	   }
	   
	   //put x or o on the given numbers
	   if(round=='X' && space[row] [col] !='X' && space[row] [col] !='O')
	   { space[row][col]= 'X';
	   round='O';
	   }
	   
	   else if(round=='O' && space[row] [col] !='X' && space[row] [col] !='O')
	   {  space[row][col]='O';
	   round='X';
	   }
	  
	
	   else 
	   {
	   	cout<<"box is already filled ...please try again "<<endl;
	   	player_round();
	   }
	    display_space();
   }
   
   //to make a match
   bool gameover(){
   	for(int i= 0; i< 3; i++) 
   	if (space [i][0]== space[i][1]  &&  space[i][0]== space[i][2]  ||space [0][i]== space[1][i]  &&  space[0][i]== space[2][i]   )
   	return false;
   	
   	if(space[0][0]== space[1][1] && space[0][0]== space[2][2] || space[0][2]== space [1][1] && space[0][0]== space[2][0])
   	return false;
   	 
   	 else if(space[0][2]==space[1][1] && space[0][2]== space[2][0]&& space)
   	 return false;
   	
   		for(int i= 0; i< 3; i++){
   				for(int j= 0; j< 3; j++){
   					 
   			if (space[i][j]!= 'X' && space[i][j]!='O')
			   return true;		 
				   }
		   }
		   
 draw=true;
 return false;		   
}

int main(){
	system("color 6");
	char n;
	do
	{
		
//	while(gameover())
//	{	
    display_space();
	player_round();
     gameover();
     
     //to check winner 
   if(round =='X' && draw== false ){
   	cout<<"player2 [O] wins!! CONGRATULATIONS..\n";} 
    
      else if(round=='O' && draw== false ){
     	cout<<"player1 [X] wins!! CONGRATULATIONS..\n";}
	 
	 else
	 { 
	 cout<<"GAME DRAW!\n";}
//    }
     cout<<" are you want to continue : ";
	 cin>>n;
    }
    while(n=='y'||n=='Y');
  }
