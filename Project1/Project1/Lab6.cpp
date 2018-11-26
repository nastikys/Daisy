#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const float eulerN = 2.71;
	int x = 1;
	float epsilon, y;
	cout << "Input x and epsilon values :" << endl;
	cin >> x >> epsilon;
	float result = 1, prevResult = 1;
	do {
		for (int i = 1;; i++)
		{
			int fact = 1;
			fact *= i;
			prevResult = result;
			result += pow(-x, i) / fact;
		}
	} while (abs(prevResult - result) > epsilon);

	if ((x >= 0) & (x <= 2))
	{
		y = result + pow(result, 2);
		cout << "Y = " << y << endl;
	}
	else
	{
		y = (1 / result * pow(eulerN, -5)) - (result*pow(eulerN, -2));
		cout << "Y = " << y << endl;
	}
	return 0;
	system("pause");


}