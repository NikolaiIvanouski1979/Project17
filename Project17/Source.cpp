# include <iostream>
using namespace std;

double power(double n, int p = 2);

int main()
{
	
	cout << "Please! Enter number: ";
	double num;
	cin >> num;
	cout << "will enter the degree of the number? (y/n): ";
	char ch;
	cin >> ch;
	if (ch == 'y')
	{
		cout << "Please! Enter the power of: ";
		int pow;
		cin >> pow;
		cout << "Number: " << power(num, pow) << endl;
	}
	else
		
		cout <<  power(num) << endl;
	
		system("pause");
	return 0;
}

double power(double n, int p)
{
	double result = 1.0;
	for (int j = 0; j < p; j++)
		result *= n;
	return result;
}