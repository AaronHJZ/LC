/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

class MyStack
{
	public:
		queue<int> que_main;
		queue<int> que_buffer;

		MyStack()
		{}

		void push(int x)
		{
			que_buffer.push(x);
			while (!que_main.empty())
			{
				que_buffer.push(que_main.front());
				que_main.pop();
			}

			swap(que_buffer, que_main);
		}

		int pop()
		{
			int val = que_main.front();
			que_main.pop();

			return val;
		}

		int top()
		{
			return que_main.front();
		}

		bool empty()
		{
			return que_main.empty();
		}
};
