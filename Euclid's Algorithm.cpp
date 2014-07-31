#include <iostream.h>
int gcd(int u, int v)
{
	int t;
	while (u > 0)
	{
		if (u < v) { t = u; u = v; v = t; }
		u = u - v;
	}
	return v;
}
main()
{
	int x, y;
	while (cin >> x && cin >> y)
	if (x>0 && y > 0) cout << x << ' ' << y << ' ' << gcd(x, y) << '\n';
}