#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int s, w1, w2, w3, s1 = 0, s2 = 0;

		cin >> s >> w1 >> w2 >> w3;

		s1 = w1 + w2;
		s2 = w2 + w3;

		if ((w1 + w2 + w3) <= s)
			cout << 1;

		else if ((s1 <= s) || (s2 <= s))
			cout << 2;
		else
			cout << 3;
		cout << "\n";
	}
	
	return 0;
}