#include <iostream>
using namespace std;



int main()
{

	char fullName[100];			// assign size for variable 
	char *ptr = fullName;	


	cout << " \n Please enter full name " << endl;
	cin.getline(fullName, 100);


	cout << " " << fullName << endl;
	cout << " " << ptr << endl;
	cout << " " << ptr + 4 << endl;
	cout << " " << *ptr << endl;		//de-referrencing
	cout << " " << *(ptr + 5) << endl;

	//while loop to 
	while (*ptr != '\0')
	{
		//Condition to check if there's a space, if not add 1 to the ptr
		if (*ptr != ' ')
		{
			ptr = ptr + 1;
		}
		else if (*ptr == ' ')
		{
			ptr++;
			break;
		}
	}
	if (*ptr == '\0')
		cout << " \n Last name must be entered!"<< endl;
	cout << " \n Last name is: " << ptr << endl;



	system("pause");
	return 0;
}