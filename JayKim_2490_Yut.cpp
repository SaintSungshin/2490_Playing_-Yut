#include<iostream>
using namespace std;

int main()
{
	cout << "Enter three set of numbers. : " << endl;
	int set[3][4];
	int result[3];
	for (int i = 0;i < 3;i++)
	{
		int total = 0;

		for (int j = 0;j < 4;j++)
		{
			cin >> set[i][j];
			total += set[i][j];
		}
		result[i] = total;
	}
	for (int i = 0;i < 3;i++)
	{
		if (result[i] == 0)
			cout << "��" << endl;
		if (result[i] == 1)
			cout << "��" << endl;
		if (result[i] == 2)
			cout << "��" << endl;
		if (result[i] == 3)
			cout << "��" << endl;
		if (result[i] == 4)
			cout << "��" << endl;
	}

	system("pause");
	return 0;
}
