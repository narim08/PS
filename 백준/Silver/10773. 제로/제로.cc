#include <iostream>
using namespace std;

class Stack { 
	int* arr;
	int top;
	int size;

public:
	Stack(int N);
	~Stack();
	void push(int n);
	int pop();
	void printSize();
	bool isEmpty();
	void printTop();
};
Stack::Stack(int N): top(-1), size(0) {
	arr = new int[N];
}
Stack::~Stack() {
	delete[] arr;
}
void Stack::push(int n) {
	arr[++top] = n;
	size++;
}
int Stack::pop() {
	if (!isEmpty()) {
		size--;
		return arr[top--];
	}
	else {
		return -1;
	}
}
void Stack::printSize() {
	cout << size << '\n';
}
bool Stack::isEmpty() {
	return top == -1;
}
void Stack::printTop() {
	if (isEmpty()) {
		cout << -1 << '\n';
	}
	else {
		cout << arr[top] << '\n';
	}
}

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int k, n, sum = 0;
	cin >> k;
	Stack st(k);
	for (int i = 0; i < k; i++) {
		cin >> n;
		if (n != 0) {
			st.push(n);
			sum += n;
		}
		else {
			int popNum = st.pop();
			sum -= popNum;
		}
	}
	cout << sum;
	return 0;
}