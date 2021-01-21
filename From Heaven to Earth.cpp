#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float t,n,v1,v2,timeTaken1,timeTaken2;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>v1>>v2;
	    timeTaken1 = (sqrt(2)*n)/v1;
	    timeTaken2 = (2*n)/v2;
	    if(timeTaken1>timeTaken2)
	        cout<<"Elevator"<<endl;
	    else
	        cout<<"Stairs"<<endl;
	}
	return 0;
}
