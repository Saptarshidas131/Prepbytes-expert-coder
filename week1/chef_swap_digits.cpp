#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int a, b, a1, a2, b1, b2, maxi, x, y, z;

		cin >> a >> b;

		a1 = a/10;
		a2 = a%10;
		b1 = b/10;
		b2 = b%10;
		maxi = a+b;

		// both a and b are 2 digits
		if (a1 != 0 && b1 != 0)
		{
			// a1b1 + a2b2
			x = a1*10+b1 + a2*10+b2;
			// a1b2 + b1a2
			y = a1*10+b2 + b1*10+a2;
			// b2a2 + b1a1
			z = b2*10+a2 + b1*10+a1;

			//max = (max < x) ? x : ((max < y) ? y : ((max < z) ? z : max));
			maxi = max(max(x,y),z);
			cout << maxi << "\n";
		}

		// a is 2 digits but b is 1 digit
		else if (a1 != 0 && b1 == 0)
		{
			// a1b2 + a2
			x = a1*10+b2 + a2;
			// b2a2 + a1
			y = b2*10+a2 + a1;

			//max = (max < x) ? x : ((max < y) ? y : max);
			maxi = max(x,y);
			cout << maxi << "\n";
		}

		// a is 1 digit and b is 2 digits
		else if (a1 == 0 && b1 != 0)
		{
			// b1 + a2b2
			x = b1 + a2*10+b2;
			// b2 + b1a2
			y = b2 + b1*10+a2;

			//max = (max < x) ? x : ((max < y) ? y : max);
			maxi = max(x,y);
			cout << maxi << "\n";
		}

		// both are 1 digit
		else
		{
			cout << maxi << "\n";
		}
	}
	
	return 0;
}