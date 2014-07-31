char c; Stack acc(50); int x;
while (cin.get(c))
{
	x = 0;
	while (c == ' ') cin.get(c);
	if (c == '+') x = acc.pop() + ac.pop();
	if (c == '*') x = acc.pop() * acc.pop();
	while (c >= '0' && c <= '9')
	{
		x = 10 * x + (c - '0'); cin.get(c);
	}
	acc.push(x);
}
cout << acc.pop() << '\n';
