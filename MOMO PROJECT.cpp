#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	const int defaultpin = 0000;
	int attempts = 0;
	int select,pin;
	float amount;
	string reference;
	int numr;
	int o_pin;
	string new_pin, number, comfirmNumber;
	float balance;
	balance = 1000;
	
	while(true){
		cout<<"Main Menu"<<endl<<endl;
		cout<<"1.Check Balance"<<endl<<endl;
		cout<<"2.Transfer Money"<<endl<<endl;
		cout<<"3.Reset/Change pin"<<endl<<endl;
		cout<<"4.Exit"<<endl<<endl;
		
		cin>>select;
		
		if(select==1){
			do{
				cout<<"Enter your 4-digit pin : " <<endl<<endl;
				cin>>pin;
				
				attempts++;
				if(pin != defaultpin){
					cout<<"Incorrect pin.Try again"<<endl<<endl;
				}
				
				else if(pin==defaultpin){
					cout<<"Your balance is Gh"<<balance<<endl<<endl;
				}
			}
			while(pin!=defaultpin && attempts<3);
			if (attempts>=3){
				cout<<"Maximum attempts reached."<<endl;
				cout<<"Exiting program"<<endl;
			}
			
			
			sleep(6);
			system("cls");
		}
	    else if(select==2){
	    cout<<"Enter mobile number"<<endl<<endl;
		cin>>number;
		
		while(number.size() != 10){
			cout << "Invalid number" << endl;
			cin >> number;
		}
		
		cout<<"Confirm number"<<endl<<endl;
		cin>>comfirmNumber;
		
		
		while(number.size() != 10){
			cout << "Invalid number" << endl;
			cin >> comfirmNumber;
		}
		
		for(int i = 0; i < 3; i++){
			if (number != comfirmNumber){
				cout << "Numbers do not match" << endl<<endl;
				cout << "Re-enter number: "<<endl<<endl;
				cin >> comfirmNumber;
			}
		}
		
		cout<<"Enter amount to transfer"<<endl<<endl;
		cin>>amount;
		
		cout<<"Transfer Gh"<<amount<< " to " << number<<endl<<endl;
		cout<<"Enter reference"<<endl<<endl;
		cin>>reference;
		
		cout<<"Enter your pin"<<endl<<endl;
		cin>>pin;	
		
			attempts++;
			if(pin!=defaultpin){
				cout<<"Incorrect pin. Try again"<<endl;
			}
			
			else if(pin==defaultpin){
				cout<<"You have successfully sent an amount of " <<amount<< " to " << number<<endl<<endl;
				cout<<"Your new balance is " <<balance-amount<<endl;
			}
			
		
			
			while(pin!=defaultpin && attempts<3);
			if(attempts>3){
				cout<<"Maximum attempts reached."<<endl;
			}
			
				sleep(6);
			system("cls");
			
			switch(pin){
				break;
			}	
	    }
	    
	    else if(select==3){
	    	cout<<"Change pin"<< endl<<endl;
	    	
	    		cout<<"Enter old pin"<<endl<<endl;
	    		cin>>o_pin;
	
			while(o_pin==defaultpin){
				cout<<"Enter new pin"<<endl<<endl;
				cin>>new_pin;
				
				while(new_pin.size() != 4){
					cout << "Invalid pin" << endl<<endl;
					cout << "Re-enter pin: "<<endl<<endl;
					cin >> new_pin;
				}
				
				cout<<"Your pin has successfully been changed"<<endl;
				break;
			}
			
			while(o_pin!=defaultpin && attempts>3){
				cout<<"Incorrect pin. Try again"<<endl;
			}
			
				sleep(6);
			system("cls");
		
			}
			
         else if(select == 4){
			return 0;
		}	
		
		
	}
	
	
	return 0;
}
