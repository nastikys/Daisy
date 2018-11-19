#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fact(int n)
{
	for (int i = 0; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int n = 0;
	int result = 0;
	int fact = 0;
	cout << "Input n value: " << endl;
	cin >> n;

	for (int i = 3;; i++)
	{
		int result = i * (i - 1) * (i - 2);
		if (int result < int fact)
		{
			continue;
		}
		else if (int result == int fact)
		{
			cout << "Mult does not exist." << endl;
		}
		else
		{
			cout << "Mult exists." << endl;
		}
	}
	system("pause");
	return 0;
}