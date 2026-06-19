class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    
    void push(int x) {

        s1.push(x);
        // while(!s1.empty()){
        //     s2.push(s1.top());
        //     s1.pop();
        // }
        // s1.push(x);
        // while(!s2.empty()){
        //     s1.push(s2.top());
        //     s2.pop();
        // }
    }
    
    int pop() {

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int popped = s2.top();
        s2.pop();
        return popped;
        // int ans = s1.top();
        // s1.pop();
        // return ans;
    }
    
    int peek() {
       if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return  s1.empty() && s2.empty();
    }
};

