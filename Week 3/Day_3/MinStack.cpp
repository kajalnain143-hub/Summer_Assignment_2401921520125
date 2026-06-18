#include<iostream>
 #include<stack>
 using namespace std;
class MinStack {
public:
stack<int>st;
      stack<int>MinSt; 
    MinStack() {
       
    }
    
    void push(int value) {
        st.push(value);
        if(MinSt.empty()){
            MinSt.push(value);
        }
        else{
            MinSt.push(min(MinSt.top(),value));
        }
    }
    
    void pop() {
        st.pop();
            MinSt.pop();
    }
    
    int top() {
       return st.top();
      
    }
    int getMin() {
       return MinSt.top();
    }
};
int main(){
     MinStack ms;

    ms.push(5);
    ms.push(2);
    ms.push(4);
    ms.push(1);

    cout << "Top: " << ms.top() << endl;
    cout << "Min: " << ms.getMin() << endl;

    ms.pop();

    cout << "After Pop" << endl;
    cout << "Top: " << ms.top() << endl;
    cout << "Min: " << ms.getMin() << endl;

}