#include<iostream>
using namespace std;
class calculator
{   
	int i;
	float num1,num2,num3;
	char choice;
	
    public:
    calculator()
    {
 	cout<<endl;
	cout << "enter first number" << endl;
	cin  >> num1;
	cout << "enter second number" << endl;
	cin  >> num2;
	cout << endl;
	cout <<"         " << "for addition enter '+' " << endl;
	cout <<"         " << "for substraction enter '-'" << endl;
	cout <<"         " << "for multiplication enter '*'" << endl;
	cout <<"         " << "for division enter '/'" << endl;
	cout << endl;
	cout << "enter your choice" << endl;
	cin  >> choice;
	
	switch(choice)
	{
		case '+':
			{
				num3 = num1 + num2; 
				cout <<"       " << "YOUR RESULT :" << num1 <<"+" << num2 <<"=" << num3 << endl;
				cout<<endl;
				break;
			}
			case '-':
				{
					num3 = num1 - num2;
					cout <<"       " << "YOUR RESULT :" << num1 <<"-" << num2 <<"=" << num3 << endl;
					break;
				}
			case '*':
			    {
			    num3 = num1 * num2;	
				cout <<"       " << "YOUR RESULT :" << num1 <<"*" << num2 <<"=" << num3 << endl;
				break;
				}	
			case '/':
			    {
				num3 = num1 / num2;
				cout <<"       " << "YOUR RESULT :" << num1 <<"/" << num2 <<"=" << num3 << endl;
				}
			default:
			    {
				cout<<"wrong choice"<<endl;
				}		
	}
}
};


int main()
{
	calculator obj;
return 0;
}
