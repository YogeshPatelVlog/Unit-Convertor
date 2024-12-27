#include <iostream>
using namespace std;

class UnitConvertor{
	int choose;
	public:
		void MainDisplay(){
			cout<<"------------------------------------Welcome to Unit Convertor --------------------------------"<<endl;
			cout<<"----------------------------------------------------------------------------------------------\n"<<endl;
			cout<<"Enter Your Choose : \n";
			cout<<"1. Temperature[T] \n2. Currency[C] \n3. Mass[M]\n";
			cin>>choose;
			switch(choose){
			
				case 1:
					Temperature();
					break;
				
				case 2:
					Currency();
					break;
					case 3:
						MassConvertor();
						break;
				}
			}
			// For Temperature 
			void Temperature(){
				int value;
				cout<<"-------------------Welcome To Temperature----------------\n";
				cout<<"Enter Your Choose : \n1. Celcius To Fehrenheit \n2. Fehrenheit To Celcius \n3. Celcius To Kelvin\n";
				cin>>choose;
				switch(choose){
					case 1:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (Celcius to Ferenheit) value Is  : "<< value * 33.8;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Temperature();
							break;
					}
					
					break;
					case 2:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (Fehrenheit To Celcius) value Is  : "<< value * -17.2222;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Temperature();
							break;
					}
					case 3:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (Celcius To Kelvin) value Is  : "<< value * 255.928;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Temperature();
							break;
				}
			}
		}
		//For Currency
		void Currency(){
			int value;
				cout<<"-------------------Welcome To Currency----------------\n";
				cout<<"Enter Your Choose : \n1. Rs. to Dollar \n2. Dollar To Rs. \n3. Dollar To Euro\n";
				cin>>choose;
					switch(choose){
					case 1:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (Rs. To Dollar) value Is  : "<< value * 0.011727 <<" Dollar";
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Currency();
							break;
					}
					case 2:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (Dollar To Rs.) value Is  : "<< value * 85.67;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Currency();
							break;
					}
					case 3:
						cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (Dollar To Euro) value Is  : "<< value * 0.96;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Currency();
							break;
					}
		}
	}
	//for Mass Convertor
		void MassConvertor(){
			int value;
				cout<<"-------------------Welcome To Mass Covertor----------------\n";
				cout<<"Enter Your Choose : \n1. KG To Pound \n2. lbs to KG \n3. KG To Pound\n";
				cin>>choose;
				switch(choose){
					case 1:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (KG To Pound) value Is  : "<< value * 2.20462;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Currency();
							break;
					}
					case 2:
					cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (LBs TO KG) value Is  : "<< value * 0.453592;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							Currency();
							break;
					}
					case 3:
						cout<<"Enter Your Value : ";
					cin>>value;
					cout<<"Your (KG To Pound) value Is  : "<< value * 2.20462;
					cout<<"\nConvert Again press 1 or Exit 0 :";
					cout<<"\n";
					cin>>choose;
					switch(choose){
						case 1:
							MassConvertor();
							break;
					}
		}
	}
};


int main(){
	UnitConvertor obj;
	obj.MainDisplay();
}
