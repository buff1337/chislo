#include <iostream>
#include<locale>
using namespace std;

int main()
{
	setlocale(0, "rus");
	int min = 1;
	int max = 1000;
	int number;
	char ch;
	cout << "\n\n���� <������ �����>\n\n";
	cout << "\n\n��������� ����� �� 1 �� 1000\n\n";

	for (int i = 0; i < 11; i++)
	{
		number = (min + max) / 2;
		cout << "���� ����� ������ " << number <<"?" <<  endl;
		cin >> ch;
		if (ch == 'n')
			min = number;
		if (ch == 'y')
			max = number;
	}
	cout << "�� �������� ����� " << number << endl;
}