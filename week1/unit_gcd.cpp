#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int n, d;

		cin >> n;

		d = n/2;

		if (n == 1)
		{
			cout << "1\n";
			cout << "1 1\n";
		}
		else if (n == 2)
		{
			cout << "1\n";
			cout << "1 2\n";
		}
		else if (n == 3)
		{
			cout << "1\n";
			cout << "1 2 3\n";
		}
		else
		{
			cout << d << "\n";
			if (n%2 == 0)
			{
				for (int i = 1; i < n; i += 2)
				{
					cout << "2 " << i << " " << i+1 << "\n";
				}
			}
			else
			{
				cout <<"3 1 2 3\n";
				for (int i = 4; i < n; i += 2)
				{
					cout << "2 " << i << " " << i+1 << "\n";
				}
			}
		}


	}
	
	return 0;
}