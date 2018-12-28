//Boiko A. IP81. Var5, Lab6. 5. 5. 	Для заданого цілого х, використовуючи розкладання функції e-x в ряд Тейлора  e-x , обчислити із заданою точністю epsilon значення.   

#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int inputValueOfX() {
	int x;
	float epsilon;
	cout << "Input x value:" << endl;
	cin >> x;
	return x;
}
int inputValueOfEpsilon()
{
	float epsilon;
	cout << "Input epsilon value:" << endl;
	cin >> epsilon;
	return epsilon;
}

int tailorExpansion()
{
	float  epsilon, result = 1, prevResult = 1;
	int x = 1;
	do {
		for (int i = 1;; i++)
		{
			int fact = 1;
			fact *= i;
			prevResult = result;
			result += pow(-x, i) / fact;
		}
	} while (abs(prevResult - result) > epsilon);
	return result;
}

int yCalculation()
{
	const float eulerNumber = 2.71;
	int x = 1;
	float result = 1, y;
	if ((x >= 0) & (x <= 2))
	{
		y = result + pow(result, 2);
		cout << "Y = " << y << endl;
	}
	else
	{
		y = (1 / result * pow(eulerNumber, -5)) - (result*pow(eulerNumber, -2));
		cout << "Y = " << y << endl;
	}
	return y;
}
int main()
{
	int x = 1;
	float  epsilon, y, result = 1;
	x = inputValueOfX();
	epsilon = inputValueOfEpsilon();
	result = tailorExpansion();
	y = yCalculation();
	return 0;
	system("pause");

}
