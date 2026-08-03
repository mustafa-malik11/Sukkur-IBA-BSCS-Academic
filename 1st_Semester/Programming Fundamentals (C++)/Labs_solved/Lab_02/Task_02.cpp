#include <iostream>
using namespace std;
int main(){int voltage; float current,resistance; cout<<"Enter Voltage (integer): "; cin>>voltage; cout<<"Enter Current (float): "; cin>>current; resistance=voltage/current; cout<<"Calculated Resistance (R): "<<resistance<<endl; return 0;}