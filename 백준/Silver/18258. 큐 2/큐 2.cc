#include <iostream>
using namespace std;

class Queue {
	int front;
	int rear;
	int size;
	int maxSize;
	int* arr;

public:
	Queue(int num):front(0), rear(0), size(0), maxSize(num) {
		arr = new int[num];
	}
	~Queue(){
		delete[] arr;
	}
	void push(int n);
	int pop();
	int getSize();
	bool isEmpty();
	bool isFull();
	int getFront();
	int getRear();
};

void Queue::push(int n) {
	arr[rear] = n;
	rear = (rear+1) % maxSize;
	size++;
}
int Queue::pop() {
	if (isEmpty()) {
		return -1;
	}
	else {
		size--;
		int popN = arr[front];
		front = (front + 1) % maxSize;
		return popN;
	}
}
bool Queue::isFull() {
	return (rear + 1) % maxSize == front;
}
bool Queue::isEmpty() {
	return front == rear;
}
int Queue::getSize() {
	return this->size;
}
int Queue::getFront() {
	if (isEmpty()) return -1;
	else return this->arr[front];
}
int Queue::getRear() {
	if (isEmpty()) return -1;
	else return this->arr[rear-1];
}

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, pushN;
	string cmd;
	cin >> n;
	Queue q(n);

	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> pushN;
			q.push(pushN);
		}
		else if (cmd == "pop") {
			cout << q.pop() << '\n';
		}
		else if (cmd == "size") {
			cout << q.getSize() << '\n';
		}
		else if (cmd == "empty") {
			cout << q.isEmpty() << '\n';
		}
		else if (cmd == "front") {
			cout << q.getFront() << '\n';
		}
		else if (cmd == "back") {
			cout << q.getRear() << '\n';
		}
	}
	return 0;
}