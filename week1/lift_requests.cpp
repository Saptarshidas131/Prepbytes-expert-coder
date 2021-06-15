#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int  n, q, c = 0;
		long long int floors = 0;

		cin >> n >> q;

		for(int i = 0; i < q; i++)
		{
			int f, d;

			cin >> f >> d;

			floors += abs(c - f) + abs(f - d);
			c = d;
		}

		cout << floors << "\n";
	}
	
	return 0;
}
