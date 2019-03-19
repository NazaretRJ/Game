/* Game : guess the number 
Author:M.Nazaret.R.J*/
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	const int GUARD=-1;
	int lifes=6;
	const int MAX=100;
	const string MESSAGE_SMALL="The number is smaller than or equal to ";
	const string MESSAGE_BIG="The number is bigger than ";
	int number,n=0;
	bool it_is_in_range,find=false;
	srand(time(NULL));
	number=rand() % (MAX+1);			/* this generate a number between 0 and 100 */
	cout<<number<<"\n";
		
	cout<<"\nPlease to give up push -1 ";

	while(lifes>0 && !find && n!=GUARD){
		cout<<"\nPlease type a number between 0 and 100   ";					
		cin>>n;
		it_is_in_range= n<=MAX && n>=0;
		find=n==number;
		lifes-=1;
		else if(it_is_in_range){
			cout << (n>number? MESSAGE_SMALL : MESSGE_BIG) << n;
		}else if(n!=GUARD)
			cout<<"The number is out of range,you lose a life";
		}
	}
	if(find)
		cout<<"\nYou win";
	else
		cout<<"\nGAME OVER";
}
