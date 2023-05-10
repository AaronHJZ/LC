class MyQueue {
public:
	stack<int> stk_main;
	stack<int> stk_buffer;

    MyQueue() 
	{}
    
    void push(int x) 
	{
		while (!stk_main.empty())
		{
			int elem = stk_main.top();
			stk_main.pop();
			stk_buffer.push(elem);
		}

		stk_main.push(x);

		while (!stk_buffer.empty())
		{
			int elem = stk_buffer.top();
			stk_buffer.pop();
			stk_main.push(elem);
		}
    }
    
    int pop() 
	{
		int elem = stk_main.top();
		stk_main.pop();
		return elem;
    }
    
    int peek() 
	{
		return stk_main.top();
    }
    
    bool empty() 
	{
		return stk_main.empty();
    }
};
