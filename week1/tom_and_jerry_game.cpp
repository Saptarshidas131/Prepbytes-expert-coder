#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		long long int  ts;

		cin >> ts;

		while(ts%2 != 1)
		{
			ts /= 2;
		}

		cout << (ts-1)/2 << "\n";
	}
	
	return 0;
}
