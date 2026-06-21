#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> dailyTemperatures(vector<int>& temp) {

    int n = temp.size();

    vector<int> answer(n, 0);

    stack<int> indexStack;

    for (int i = n - 1; i >= 0; i--) {

        while (!indexStack.empty() &&
               temp[indexStack.top()] <= temp[i]) {
            indexStack.pop();
        }

        if (!indexStack.empty()) {
            answer[i] = indexStack.top() - i;
        }

        indexStack.push(i);
    }

    return answer;
}

int main() {

    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> result = dailyTemperatures(temperatures);

    cout << "Output: ";

    for (int days : result) {
        cout << days << " ";
    }

    cout << endl;

    return 0;
}