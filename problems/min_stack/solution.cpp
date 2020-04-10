class MinStack {
public:
    /** initialize your data structure here. */

    vector<int> stackVector;
    
    MinStack() {
          stackVector = {};     
    }
    
    void push(int x) {
        stackVector.push_back(x);
    }
    
    void pop() {
        stackVector.pop_back();
    }
    
    int top() {
        return stackVector.back();
    }
    
    int getMin() {
        return *min_element(stackVector.begin(), stackVector.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */