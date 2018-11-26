#include <iostream>
using namespace std;

int main() {

	//Create an array list
	const int ROW = 3;
	const int COL = 4;
	int list[ROW][COL];

	//Enter numbers
	for (int i = 0; i < ROW; i++) {
		
		for (int j = 0; j < COL; j++)
			cin >> list[i][j];
		
		cout << endl;
	}

	for (int m = 0; m < ROW; m++) {
		
		int count = 0;
		for (int n = 0; n < COL; n++) {
			count += list[i][j];
		}
		
		switch (count) {
			case 0: cout << 'E' << endl; break;
			case 1: cout << 'A' << endl; break;
			case 2: cout << 'B' << endl; break;
			case 3: cout << 'C' << endl; break;
			case 4: cout << 'D' << endl; break;
		}
		
		count = 0;
		cout << endl;
	}

	system("pause");
	return 0;
}
