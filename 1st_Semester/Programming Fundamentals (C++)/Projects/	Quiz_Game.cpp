#include<iostream>
using namespace std;
 

void showrules();
void startquiz();
void cpp();
void ict();
void Eng();
int main(){
	int choise;
	do{
		cout<<"1: start-Quiz\n";
		cout<<"2: Show-Rules\n";
        cout<<"3:  C++\n";
		cout<<"4:  ICT\n";
		cout<<"5:  English\n";
		cout<<"6: Exit-Game\n";
		cout<<"enter your choise\n";
	cin>>choise;
	switch(choise){
		case 1: 
     startquiz();
		     break;
		case 2: 
		        showrules();
		        break;
		        break;
	    
	            
		case 3: cout<<"Thanks for playing game: Gud by\n";
		 default: cout<<" plz try again ";
	}
}
	while(choise!=3);
	return 0;
}
void  showrules(){

 cout<<"=========Quiz Game===========\n";
 cout<<"1: Here has 10 question\n";
 cout<<"2: 1 point of each corect ans\n";
 cout<<"3: No negative Marking\n";
 cout<<"4: Choose your subject\n";
 cout<<"============================\n\n";}
 void cpp(){
 	int score=0;
	char option;
	cout<<"Q1 : C++ is an example of which type of programming language"<<endl;
	cout<<"(a) procedural (b) object-Oriented (c) Assembly (d) Machine"<<endl;
	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"Q2 : Which is headerfile is used to print output in c++"<<endl;
	cout<<"(a) stdio.h (b) iostream (c) conio.h (d) string"<<endl;
	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
	score = score+0;
	}
	cout<<"Q3 :Which symbol is used for single-line comments in c++"<<endl;
	cout<<"(a)/*comment*/(b) # (c) // (d) --"<<endl;
	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"Q4 : Which of the following is used to take input from user"<<endl;
	cout<<"   (a) cout (b) print (c) cin (d) input" <<endl;
	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else {
		score = score+0;
	}
	cout<<"Q5 : What is the correct syntax  of main Function "<<endl; 
	cout<<"   (a) void main (b)  main() (c) function main() (d) int main()"<<endl;
	cin>>option;
	if(option=='d' || option=='D') {
		score= score+1; 
	}
	else {
		score = score+0;
	}
	cout<<"Q6 : which loop runs at least one time even if condition is false"<<endl;
	cout<<"(a) do-while loop (b) while loop (c) for loop (d) if loop "<<endl;
	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"Q7 : Which of the following is a correct variable name"<<endl;
	cout<<"     (a) 2value (b) my-name (c) value2 (d) int "<<endl;
	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<< "Q8 :  Which operator is used to compare two values"<<endl;
	cout<<"     (a) == (b) := (c) = (d) equal "<<endl;
	cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"Q9 : What is the size of an int in most compilers"<<endl;
	cout<<"     (a) 2 byte (b) 4 byte (c) 6 byte (d) 8 byte "<<endl;
	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"Q10 :  which keyword is used to declare a constant value "<<endl; 
	cout<<"     (a) let (b) constant  (c) val (d) const "<<endl;
	cin>>option;
	if(option=='d' ||option=='D') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"score"<<" "<<score<<endl;

 }
 void ict(){
 	char option;
 	int score=0;
 	cout<<"Q1: what is full form of ict\n";
 	cout<<"(a) Central Processing Unit (b) Control Program Unit (c) Computer Power Unit (d) Central Program Utility\n";
 	cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q2: Which one is an input device\n";
    cout<<"(a) Printer (b) Mouse (c) Speaker (d) Projector\n";
    	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q3: Which one is an output device\n";
    cout<<"(a) Keyboard (b) Scanner (c) Monitor (d) Joystick\n";
    	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q4: A hard disk is what type of storage\n";
    cout<<"(a) Optical storage (b) Magnetic storage (c)Solid-state storage (d) Cloud storage\n";
    	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q5: What is the full form of RAM\n";
    cout<<"(a) Read Access Memory (b) Random Access Memory (c) Rapid Access Machine (d) Readable Active Memory\n";
    	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q6: What do we use to browse the internet\n";
    cout<<"(a)Browser (b) Compiler (c) Antivirus (d)Paint\n";
    	cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q7: What is the full form of Email\n";
    cout<<"(a) Electronic Mail (b) Easy Mail (c) Electronic Message (d) Enter Mail\n";
    	cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q8: MS Word is what type of software\n";
    cout<<"(a) Operating system (b) Application software (c) Utility software (d) Programming software\n";
    	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q9: Which software removes computer viruses\n";
    cout<<"(a) Browser (b) Media Player (c) Editor (d) Antivirus\n";
    	cin>>option;
	if(option=='d' || option=='D') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q10: What is the full form of WWW\n";
    cout<<"(a) World Work Web (b) Wide World Web (c) World Wide Web (d) World Web Window\n";
	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
	cout<<"score"<<" "<<score<<endl;
	}
    
   void eng() {
   	char option;
   	int score=0;
   	cout<<"Q1: He opened ___ browser to search for information \n";
   	cout<<"(a) a (b) an (c) the (d) no article\n";
   	cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
   	cout<<"Q2: The antivirus software ___ a virus yesterday\n";
   	cout<<"(a) detect (b) detecting (c) detected (d) was detect \n";
   	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
   	cout<<"Q3: Sanjna bought ___ new mobile phone because her old one stopped working\n";
   	cout<<"(a) a (b) an (c) the (d) none\n";
   	cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
   	cout<<"Q4: The students ___ their homework when the teacher entered the classroom\n";
   	cout<<"(a) do (b) are doing (c) were doing (d) did\n";
   	cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q5: The children were playing happily ___ the garden when it suddenly began to rain\n";
    cout<<"(a) at (b) in (c) on (d) over\n";
    cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q6: The teacher gave us a very ___ explanation so that everyone could understand the topic clearly\n";
    cout<<"(a) clear (b) clearly (c) clarity (d) clearing\n";
    cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q7: I wanted to go for a walk, ___ it started raining heavily\n";
    cout<<"(a) or (b) but (c) so (d) and\n";
    cin>>option;
	if(option=='b' || option=='B') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q8: They ___ watching a movie\n";
    cout<<"(a) are (b) is (c) am (d) be\n";
    cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q9: Choose the correct sentence\n";
    cout<<"(a) She using the paint. (b) She use paint for drawing. (c) She is using Paint to draw. (d) She was use Paint.\n";
    cin>>option;
	if(option=='c' || option=='C') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"Q10: The compiler showed an error. Which is the noun?\n";
    cout<<"(a) compiler (b) showed (c) an (d) error\n";
    cin>>option;
	if(option=='a' || option=='A') {
		score= score+1; 
	}
	else{
		score = score+0;
	}
    cout<<"score"<<" "<<score<<endl;
   }                               
 void startquiz(){
 	
 	string name;
 	cout<<"Enter the your name\n";
 	cin>>name;
 	cout<<name;
 	string subject;
 	cout<<"enter the subject \n";
     if (subject=="cpp"){
     	cpp();
	 }
	 else if(subject=="ict"){
	 	ict();
	 }
	 else if(subject=="eng"){
	 	eng();
	 }
 	else {
 		cout<<"invalid subject\n";
	 }
 }

