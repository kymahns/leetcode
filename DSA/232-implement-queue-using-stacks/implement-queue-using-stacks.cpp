class MyQueue {
public:
    stack<int> st;
    stack<int> stReverse;
    MyQueue() {
        st = stack<int>();
        stReverse = stack<int>();
    }
    
    void push(int x) {
        st = stack<int>();
        while(!stReverse.empty()){
            st.push(stReverse.top());
            stReverse.pop();
        }
        st.push(x);
        while(!st.empty()){
            stReverse.push(st.top());
            st.pop();
        }
    }
    
    int pop() {
        int val;
        val = stReverse.top();
        stReverse.pop();
        return val;
    }
    
    int peek() {
        return stReverse.top();
    }
    
    bool empty() {
        return stReverse.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */