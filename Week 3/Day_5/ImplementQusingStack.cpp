#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
private:
    stack<int> input;
    stack<int> output;

public:

    void push(int x) {
        input.push(x);
    }

    int pop() {

        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        int frontElement = output.top();
        output.pop();

        return frontElement;
    }

    int peek() {

        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};

int main() {

    MyQueue q;

    q.push(1);
    q.push(2);

    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;

    return 0;
}