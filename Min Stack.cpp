class MinStack {
public:
	void push(int x) {
		m_stack.push(x);
		if (m_minstack.empty() || m_minstack.top() >= x)
			m_minstack.push(x);
	}
	void pop() {
		if (!m_stack.empty())
		{
			if (!m_minstack.empty() && m_stack.top() == m_minstack.top())
				m_minstack.pop();
			m_stack.pop();
		}
	}
	int top() {
		if (!m_stack.empty())
			return m_stack.top();
	}
	int getMin() {
		if (!m_minstack.empty())
			return m_minstack.top();
	}
private:
	stack<int> m_stack;
	stack<int> m_minstack;
};