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
	
	int N, cmd, pushNum;
	cin >> N;
	Stack st(N);

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		switch (cmd)
		{
		case 1:
			cin >> pushNum;
			st.push(pushNum); break;
		case 2:
			cout << st.pop() << '\n'; break;
		case 3:
			st.printSize(); break;
		case 4:
			cout << st.isEmpty() << '\n'; break;
		case 5:
			st.printTop(); break;
		default:
			break;
		}
	}

	return 0;
}