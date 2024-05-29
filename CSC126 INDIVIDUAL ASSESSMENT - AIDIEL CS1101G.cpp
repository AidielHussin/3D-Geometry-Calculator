#include <iostream>
#include <math.h>
#include <unistd.h>
#include <Windows.h>
#include <iomanip>
using namespace std;

int main(){
	//declaration
	char reload = 'Y', option;
	float formula, side, length, width, height, radius;
	string geometry, detail, user, codes, unit;
	int pass, attempt = 3, status = 1;
	
	cout << "3D GEOMETRY SYSTEM" <<endl;
	//process
	while (toupper(reload) == 'Y') //system will repeat if reload == 'Y'
	{
		while ((user !="AidielHussin" || pass !=12345) && attempt > 0)
		{
			cout << "\nEnter username: ";	//user enter username
			cin >> user;
			cout << "Enter password: ";		//user enter password
			cin >> pass;
			cout << endl;
						
			if (user !="AidielHussin" || pass !=12345)	//system checking if username & password match or not
			 {
				cout << "Invalid username or password, please try again!" <<endl <<endl;
				attempt = attempt - 1;	//attempt decrease
					 	
					if (attempt <1)
					status = 0;				
			 }
			 
			else 
			{
				status = 1;
			}				 
		}
		system("cls");
					 
		if (status == 0)
		{
			//output
			cout << "You are not allowed to access THIS SYSTEM!!"; //system will end
			break;
		}
	
	
		else if (status == 1)
		{
			//system will display 3D geometry formula table
			cout << "Welcome to 3D Geometry System!";
			cout << "\n\n                3D GEOMETRY FORMULA                    " <<endl;
			cout << "=======================================================" <<endl;
			cout << "|  CODES  |        3D GEOMETRY        |     OPTION    |"  <<endl;
			cout << "=======================================================" <<endl;
			cout << "|    A    |            CUBE           |   1. VOLUME   |" <<endl;
			cout << "|    B    |      RECTANGLE SOLID      |   2. SURFACE  |" <<endl;
			cout << "|    C    |           SPHERE          |               |" <<endl;
			cout << "|    D    |  RIGHT CIRCULAR SYLINDER  |               |" <<endl;
			cout << "|    E    |    RIGHT CIRCULAR CONE    |               |" <<endl;
			cout << "|    F    |       SQUARE PYRAMID      |               |" <<endl;
			cout << "|    G    |    REGULAR TETRAHEDRON    |               |" <<endl;
			cout << "=======================================================" <<endl <<endl;
			
			while (codes != "A" && codes != "a" && codes != "B" && codes != "b" && codes != "C" && codes != "c" && codes != "D" && codes != "d" && codes != "E" && codes != "e" && codes != "F" && codes != "f" && codes != "G" && codes != "g")
			{
				//input
				cout << "Please enter codes: ";		//user enter input codes
				cin >> codes;
				
				if (codes == "A"||codes == "a")
				{
					while (option !='1' && option !='2')
					{
						//input
						cout << "Please enter an option: ";		//user enter input option
						cin >> option;
					
							if (option == '1')
							{
								//input
								cout << "\nEnter side (cm): ";	//user enter input side
								cin >> side;
								geometry = "CUBE";
								detail = "Volume";
								unit = "cm^3";
								formula = pow(side,3);
							}
		
							else if (option == '2')
							{
								//input
								cout << "\nEnter side (cm): ";	//user enter input side
								cin >> side;
								geometry = "CUBE";
								detail = "Surface";
								unit = "unit";
								formula = (6*pow(side,2));
							}
		
							else
							//output
								cout << "\nInvalid option, try again" <<endl;	//system will repeat until user enter correct input option
						
						}
				}
	
				else if (codes == "B" || codes == "b")
				{
					while (option !='1' && option !='2')
					{
						
					//input
					cout << "Please enter option: ";		//user enter input option
					cin >> option;
					
						if (option == '1')
						{
							//input
							cout << "\nEnter lenght (cm): ";	//user enter input length
							cin >> length;
							cout << "Enter width (cm): ";		//user enter input width
							cin >> width;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "RECTANGLE SOLID";
							detail = "Volume";
							unit = "cm^3";
							formula = length * width * height;	
						}
		
						else if (option == '2')
						{
							//input
							cout << "\nEnter lenght (cm): ";	//user enter input lenght
							cin >> length;
							cout << "Enter width (cm): ";		//user enter input width
							cin >> width;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "RECTANGLE SOLID";
							detail = "Surface";
							unit = "unit";
							formula = (2 * length * width) + (2 * length * height) + (2 * width * height);
						}
		
						else
							//output
							cout << "\nInvalid option, try again" <<endl; //system will repeat until user enter correct input option
					}
				}
	
				else if (codes == "C" || codes == "c")
				{
					while (option !='1' && option !='2')
					{
					//input
					cout << "Please enter option: ";		//user enter input option
					cin >> option;
					
						if (option == '1')
						{
							//input
							cout << "\nEnter radius (cm): ";		//user enter input radius
							cin >> radius;
							geometry = "SPHERE";
							detail = "Volume";
							unit = "cm^3";;
							formula = ((4* 3.142 * (pow(radius,2)))/3);
						}
		
						else if (option == '2')
						{
							//input
							cout << "\nEnter radius (cm): ";		//user enter input radius
							cin >> radius;
							geometry = "SPHERE";
							detail = "Surface";
							unit = "unit";
							formula = (4 * 3.142 * (pow(radius,2)));
						}
			
						else
							//output
							cout << "\nInvalid option, try again" <<endl; //system will repeat until user enter correct input option
					}
				}
	
				else if (codes == "D" || codes == "d")
				{
					while (option !='1' && option !='2')
					{
					//input
					cout << "Please enter option: ";		//user enter input option
					cin >> option;
	
						if (option == '1')
						{
							//input
							cout << "\nEnter radius (cm): ";		//user enter input radius
							cin >> radius;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "RIGHT CIRCULAR CYLINDER";
							detail = "Volume";
							unit = "cm^3";
							formula = 3.142 * pow(radius,2) * height;
						}
		
						else if (option == '2')
						{
							//input
							cout << "\nEnter radius (cm): ";		//user enter input radius
							cin >> radius;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "RIGHT CIRCULAR CYLINDER";
							detail = "Surface";
							unit = "unit";
							formula = (2 * 3.142 * radius * height) + (2 * 3.142 * pow(radius,2));
						}
		
						else
							//output
							cout << "\nInvalid option, try again" <<endl; //system will repeat until user enter correct input option
					}
				}
	
				else if (codes == "E" || codes == "e")
				{
					while (option !='1' && option !='2')
					{
					//input
					cout << "Please enter option: ";		//user enter input option
					cin >> option;
	
						if (option == '1')
						{
							//input
							cout << "\nEnter radius (cm): ";		//user enter input radius
							cin >> radius;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "RIGHT CIRCULAR CONE";
							detail = "Volume";
							unit = "cm^3";
							formula = ((1 * 3.142 * (pow(radius,2) * height))/3);
						}
		
						else if (option == '2')
						{
							//input
							cout << "\nEnter radius (cm): ";		//user enter input radius
							cin >> radius;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "RIGHT CIRCULAR CONE";
							detail = "Surface";
							unit = "unit";
							formula = ((3.142 * radius) * (sqrt((pow(radius,2)) + pow(height,2))) + (3.142 * pow(radius,2)));
						}
		
						else
							//output
							cout << "\nInvalid option, try again" <<endl; //system will repeat until user enter correct input option
					}
				}
	
				else if (codes == "F" || codes == "f")
				{
					while (option !='1' && option !='2')
					{
					//input
					cout << "Please enter option: ";		//user enter input option
					cin >> option;
	
						if (option == '1')
						{
							//input
							cout << "\nEnter side (cm): ";		//user enter input side
							cin >> side;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "SQUARE PYRAMID";
							detail = "Volume";
							unit = "cm^3";
							formula = ((1 * pow(side,2) * height)/3);
						}
		
						else if (option == '2')
						{
							//input
							cout << "\nEnter side (cm): ";		//user enter input side
							cin >> side;
							cout << "Enter height (cm): ";		//user enter input height
							cin >> height;
							geometry = "SQUARE PYRAMID";
							detail = "Surface";
							unit = "unit";
							formula = (side * (side + sqrt((pow(side,2))+(4*pow(height,2)))));
						}
		
						else
							//output
							cout << "\nInvalid option, try again" <<endl;	//system will repeat until user enter correct input option
					}
				}
	
				else if (codes == "G" || codes == "g")
				{
					while (option !='1' && option !='2')
					{
					//input
					cout << "Please enter option: ";		//user enter input option
					cin >> option;
	
						if (option == '1')
						{
							//input
							cout << "\nEnter side (cm): ";	//user enter input side
							cin >> side;
							geometry = "REGULAR TETRAHEDRON";
							detail = "Volume";
							unit = "cm^3";
							formula = ((1 * sqrt(2) * pow(side,3))/12);
						}
		
						else if (option == '2')
						{
							//input
							cout << "\nEnter side (cm): ";	//user enter input side
							cin >> side;
							geometry = "REGULAR TETRAHEDRON";
							detail = "Surface";
							unit = "unit";
							formula = (sqrt(3) * pow(side,2));
						}
		
						else
							//output
							cout << "\nInvalid option, try again" <<endl; //system will repeat until user enter correct input option
					}
				}
	
				else
					//output
					cout << "\nInvalid codes, try again" <<endl; //system will repeat until user enter correct input codes
			}

				//output
				cout << "\n3D GEOMETRY: " <<geometry <<endl;		//system display geometry from option user choose
				cout << "Option: " <<detail <<endl;		//system display option from option user choose
				cout << "Total: " <<setiosflags(ios::fixed) <<setprecision(2) <<formula << " " << unit <<endl;		//system display formula from option user choose
				cout << "\nDo you want coutinue the process?" <<endl;		
				cout << "Press Y to continue OR press any key to end session: ";		//system will ask if user want to repeat this system
				cin >> reload;
				
				//set the data into null (prevent data to be return)
				option = '0';
				codes = "0000";
				
				while (toupper(reload) != 'Y')
				{
					//output
					cout << "\n---------------------------------------------------";
					cout << "\nThank You for using this system!";
					sleep(3);
					break;	 //system end
				}
		}
		system("cls");
	}
return 0; 
}
