#include<bits/stdc++.h>
using namespace std;

void attempt2();
void attempt3();
//>>  attempt 1:

class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
   
    void push(int x) {
        q2.push(x);
        
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        q1.swap(q2);
    }
    
  
    int pop() {
        /*
        this is where i went wrong (first returned the value and then popping hows that possible
        control already went from there)

        return q1.front();
        q1.pop();
        */
        int x= q1.front();
        q1.pop();
        
        return x;

    }
    
 
    int top() {
        return q1.front();
    }
    
    
    bool empty() {
         if(q1.size()==0)
            return  1; 
         return 0;
        
    }
};

int main()
{
    MyStack st;
    attempt2();
    attempt3();
}

// >> attempt 2:
// using deque;

void attempt2()
{
    class stackqueue{
        public:
                deque<int> dq;

        void op_push()
        {
            int ele;
            cout<<"element to push"<<endl;
            cin>>ele;
            dq.push_back(ele);
        }
        void op_pop()
        {
            dq.pop_back();
        }
        // and so on
    };

}

void attempt3()
{
    class Stack {
public:
	queue<int> que;
	// Push element x onto stack.
	void push(int x) {
		que.push(x);
		for(int i=0;i<que.size()-1;++i){
			que.push(que.front());
			que.pop();
		}
	}

	// Removes the element on top of the stack.
	void pop() {
		que.pop();
	}

	// Get the top element.
	int top() {
		return que.front();
	}

	// Return whether the stack is empty.
	bool empty() {
		return que.empty();
	}
};
}

