/* Game : guess the number 
Author:M.Nazaret.R.J*/
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;

bool Comprobar(int n){
	bool in_range=true;
	if (n>100 || n<-1)
		in_range=false;
	return in_range;
}

int main(){
	const int GUARD=-1;
	const int LIFES=6;
	const int MAX=100;
	const string MESSAGE_SMALL="The number is smaller than or equal to ";
	const string MESSAGE_BIG="The number is bigger than ";
	int number,n;
	bool it_is_in_range,find;
	srand(time(NULL));
	number=rand() % (MAX+1);			/* this generate a number between 0 and 100 */
	cout<<number<<"\n";
	if(number<=MAX/2)
		cout<<MESSAGE_SMALL<<MAX/2;
	else
		cout<<MESSAGE_BIG<<MAX/2;
		
	cout<<"\nPlease to give up push -1 ";

	for(int i=2;i<(LIFES+2) && !find && n!=GUARD  ;i++){
		cout<<"\nPlease type a number between 0 and 100   ";					
		cin>>n;
		it_is_in_range=Comprobar(n);
		if(n==number)
			find=true;
		else{
			if( it_is_in_range && n!= GUARD ){
				if(n>number)
					cout<<MESSAGE_SMALL<<n;
				else
					cout<<MESSAGE_BIG<<n;	
			}
			else
				if(!it_is_in_range)
					cout<<"The number is out of range,you lose a life";
		}
	}
	if(find)
		cout<<"\nYou win";
	else
		cout<<"\nGAME OVER";
}
