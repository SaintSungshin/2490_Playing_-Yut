#include<iostream>
using namespace std;
 
int main()
{
	cout << "Enter the number : ";
	int list[3][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> list[i][j];
		}
	}

	//재이: 나는 sum을 구하는 배열을 따로 만들었는데 유나처럼 하면 코드가 훨씬 짧아져서 좋은 것 같다.
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			sum = sum + list[i][j];
		}
		//민진: switch-case를 추천합니다. (나오는 값이 모두 다른 정수라서)
		if (sum == 0)
			cout << "D" << endl;
		else if (sum == 1)
			cout << "C" << endl;
		else if (sum == 2)
			cout << "B" << endl;
		else if (sum == 3)
			cout << "A" << endl;
		else 
			cout << "E" << endl;
	}

	
	return 0;
}
