/*6:Write a program to print following pattern.
*
* *
* * *
* * * *
* * * * * */

#include<iostream>
using namespace std;

int main ()
{
	for(int i = 0; i<=5;i++){
			
		for(int j=0; j<i; j++){
			cout<<" *";
		}//cout<<" ";
		cout<<endl;
	}
}
