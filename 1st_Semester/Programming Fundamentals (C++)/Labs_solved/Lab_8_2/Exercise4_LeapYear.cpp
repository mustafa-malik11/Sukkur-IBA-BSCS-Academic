#include <iostream>
using namespace std;
int main(){int y;cin>>y;bool l=(y%400==0)?true:((y%100==0)?false:((y%4==0)?true:false));cout<<(l?"Leap":"Not Leap");return 0;}