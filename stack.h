class Stack {
	public:
	virtual void push(int) = 0;
	virtual int pop() = 0;
	virtual int top() = 0;
	virtual int size() = 0;
	virtual bool isEmpty() = 0;
	// MUST NOT HAVE PRINT (WHY)
	virtual void print() = 0;
};