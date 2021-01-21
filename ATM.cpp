#include <iostream>
using namespace std;

int main() {
	float balance,withdraw;
	cin >>withdraw>>balance ;
	if((int)withdraw%5!=0||(withdraw+0.5)>balance||withdraw<0)
	{
	    cout<<balance;
	}
	else
	    cout<<balance-withdraw-0.50;
	return 0;
}
