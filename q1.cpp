#include <iostream>
#include <conio.h>  
using namespace std;
void cm()	
{
	cout << "MENU: " << endl 
		 << "\t1.Add" << endl
		 << "\t2.Subtract" << endl
		 << "\t3.Multiply" << endl
		 << "\t4.Divide" << endl
		 << "\t5.Modulus" << endl;
}


int a(int x, int y)
	{
	return(x + y); 
}

int s(int x, int y)	
{
	return(x - y); 
}

int m(int x, int y)	
{
	return(x * y); 
}

int d(int x, int y)	
{
	return(x / y); 
}

int mod(int x, int y)	
{
	return(x % y); 
}

int main()
{
	int c, int1, int2; 
	char con;
	bool co = false; // Boolean condition for do-while loop

	do	{
		cm(); 
		cout << "Enter your choice (1-5): "; 	cin >> c;
		cout << "Enter your two integer numbers: ";		cin >> int1 >> int2; cout << endl;

		switch(c)	
		{
 			case 1:
				cout << "Result: " << a(int1, int2);
				break;
 		
			case 2: 
				cout << "Result: " << s(int1, int2);
				break;
 		
			case 3:
				cout << "Result: " << m(int1, int2);
				break;
 		
			case 4:
				cout << "Result: " << d(int1,int2);
				break;
 
 			case 5:
				cout << "Result: " << mod(int1, int2);
				break;
 
 			default:
				cout << "Invalid";
				break;
    	}
	
		cout << "\n\nContinue? Y or N? (Press Y if yes, N if no)";	cin >> con;
	
		switch(con)	
		{ 
			case 'Y':
 			case 'y':
 				 cout << endl;
				break;
 
			default:
 				cout << "\nThank you!";
				co = true;
				break;
		}
       	
	} while (!co);
  
  	_getch();
	return 0;
}
