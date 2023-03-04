#include <iostream>

using namespace std;

int main(){
	int quant;
	int choice;
	
	//Q= quantities, 
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qchicken=0;
	//S=sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Schicken=0;
	//total price of item
	int Total_rooms=0, Total_pasta=0,Total_burger=0,Total_shake=0, Total_noodle=0, Total_chicken=0;
	
	cout<<"Quantity of items we have: \n\t";
	cout<<"\n Rooms Avalaible";
	cin>>Qrooms;
	cout<<"\n quantity of pasta: ";
	cin>>Qpasta;
	cout<<"\n quantity of burger: ";
	cin>>Qburger;
	cout<<"\n quantity of noodle: ";
	cin>>Qnoodle;
	cout<<"\n quantity of  shake: ";
	cin>>Qshake;
	cout<<"\n quantity of chicken: ";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t PLease select from the new menu options ";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) noodle";
	cout<<"\n5) shake";
	cout<<"\n6) chicken";
	cout<<"\n7) Information regarding sales and collection ";
	cout<<"\n8) Exit";
	
	cout<<"\n\n Please enter a choice! ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			cin>>quant;
			if(Qrooms-Srooms >=quant){
				Total_rooms=Total_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<"rooms/rooms have been alloted to you! ";
				
			}else{
				cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remainnig in hotel ";
				break;
			}
		case 2:
			cout<<"\n\n Enter pasta quantity: ";
			cin>>quant;
			if(Qpasta-Spasta >=quant){
				Spasta=Spasta+quant;
				Total_pasta=Total_pasta+quant*250;
				cout<<"\n\n\t\t"<<quant<<"Pasta is order! ";
				
			}else{
				cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta remainnig in hotel ";
				break;
			}
				case 3:
			cout<<"\n\n Enter burger quantity: ";
			cin>>quant;
			if(Qburger-Sburger >=quant){
				Sburger=Sburger+quant;
				Total_burger=Total_burger+quant*120;
				cout<<"\n\n\t\t"<<quant<<"burger is order! ";
				
			}else{
				cout<<"\n\tOnly"<<Qburger-Sburger<<"pasta remainnig in hotel ";
				break;
			}
				case 4:
			cout<<"\n\n Enter noodle quantity: ";
			cin>>quant;
			if(Qnoodle-Snoodle >=quant){
				Snoodle=Snoodle+quant;
				Total_noodle=Total_noodle+quant*140;
				cout<<"\n\n\t\t"<<quant<<"noodle is order! ";
				
			}else{
				cout<<"\n\tOnly"<<Qnoodle-Snoodle<<"noodle remainnig in hotel ";
				break;
			}
				case 5:
			cout<<"\n\n Enter shake quantity: ";
			cin>>quant;
			if(Qshake-Sshake >=quant){
				Sshake=Sshake+quant;
				Total_shake=Total_shake+quant*120;
				cout<<"\n\n\t\t"<<quant<<"shake is order! ";
				
			}else{
				cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remainnig in hotel ";
				break;
			}
				case 6:
			cout<<"\n\n Enter chicken quantity: ";
			cin>>quant;
			if(Qchicken-Schicken >=quant){
				Schicken=Schicken+quant;
				Total_chicken=Total_chicken+quant*150;
				cout<<"\n\n\t\t"<<quant<<"chicken is order! ";
				
			}else{
				cout<<"\n\tOnly"<<Qchicken-Schicken<<"shake remainnig in hotel ";
				break;
			}
			
			case 7:
				cout<<"Details of sales and collection ";
				cout<<"\n\n Number of room we had: "<<Qrooms;
				cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
				cout<<"\n\n remaining rooms: "<<Qrooms-Srooms;
				cout<<"\n\n total room collection for the day: "<<Total_rooms;
				

				cout<<"\n\n Number of pasta we had: "<<Qpasta;
				cout<<"\n\n Number of pasta we sold "<<Spasta;
				cout<<"\n\n remaining pasta: "<<Qpasta-Spasta;
				cout<<"\n\n total pasta collection for the day: "<<Total_pasta;

				cout<<"\n\n Number of burger we had: "<<Qburger;
				cout<<"\n\n Number of burger we sold "<<Sburger;
				cout<<"\n\n remaining burger: "<<Qburger-Sburger;
				cout<<"\n\n total burger collection for the day: "<<Total_burger;
				

				cout<<"\n\n Number of noodle we had: "<<Qnoodle;
				cout<<"\n\n Number of noodle we sold "<<Snoodle;
				cout<<"\n\n remaining noodle: "<<Qnoodle-Snoodle;
				cout<<"\n\n total noodle collection for the day: "<<Total_noodle;	
				
				cout<<"\n\n Number of shake we had: "<<Qshake;
				cout<<"\n\n Number of shake we sold "<<Sshake;
				cout<<"\n\n remaining shake: "<<Qshake-Sshake;
				cout<<"\n\n total shake collection for the day: "<<Total_shake;	
				
				cout<<"\n\n Number of chicken we had: "<<Qchicken;
				cout<<"\n\n Number of chicken we sold "<<Schicken;
				cout<<"\n\n remaining chicken: "<<Qchicken-Schicken;
				cout<<"\n\n total chicken collection for the day: "<<Total_chicken;			
			
			case 8:
				exit(0);
				default:
					cout<<"Please select the number mentioned above!";
	}
	goto m;
}
