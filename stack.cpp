class stack
{
private:
	itemType *stack;
	int p;
public:
	Stack(int max = 100)
	{
		stack = new itemType[max]; p = 0;
	}
	~Stack()
	{
		delete stack;
	}
	inline void push(itemtype v)
	{
		stack[p++] = v;
	}
	inline itemType pop()
	{
		return stack[--p];
	}
	inline int empty()
	{
		return !p;
	}
};