#include <iostream>
#include <string>
#include <deque>
#include <vector>
using namespace std;
// Задание 1.1
/*
string s;
int n, x, c;
deque <int> ve;
void push(int x) {
	ve.push_back(x);
	cout << "ok\n";
	if (x > 0) {
		c = c + 1;
	}
}
void pop() {
	if ((int)ve.size() == 0) {
		cout << "error\n";
	}
	else {
		cout << ve.front() << '\n';
		ve.pop_front();
	}
}
void front() {
	if ((int)ve.size() == 0) {
		cout << "error\n";
	}
	else {
		cout << "Первое число в очереди: " << ve.front() << '\n';
	}
}
void size() {
	cout << "Размер очереди: " << (int)ve.size() << '\n';
}
void clear() {
	ve.clear();
	cout << "ok\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	while (cin >> s) {
		if (s == "exit") {
			cout << "bye\n";
			return 0;
		}
		if (s == "push") {
			cin >> x;
			push(x);
		}
		if (s == "pop") {
			pop();
		}
		if (s == "size") {
			size();
		}
		if (s == "front") {
			front();
		}
		if (s == "clear") {
			clear();
		}
		if (s == "count") {
			cout << "Положительных чисел: " << c << endl;
		}
	}
	return 0;
}
*/

// Задание 1.2
/*
int main() {
	setlocale(LC_ALL, "Russian");
	vector<pair<string, double>> stack;

	char addMore;
	do {
		string name;
		double price;

		cout << "Введите наименование товара: ";
		cin >> name;
		cout << "Введите цену товара: ";
		cin >> price;

		stack.push_back(make_pair(name, price));

		cout << "Добавить еще товар? (y/n): ";
		cin >> addMore;
	} while (addMore == 'y' || addMore == 'Y');

	cout << "\nДанные в стеке:\n";
	for (const auto& item : stack) {
		cout << "Товар: " << item.first << "\nЦена: " << item.second << endl;
	}

	double total = 0.0;
	for (const auto& item : stack) {
		total += item.second;
	}

	if (!stack.empty()) {
		double averagePrice = total / stack.size();
		cout << "\nСредняя цена товаров: " << averagePrice << endl;
	}
	else {
		cout << "Стек пуст, невозможно вычислить среднюю цену товаров." << endl;
	}

	return 0;
}
*/

// Задание 2.1
//struct Node {
//	double data;
//	Node* next;
//	Node(double value) : data(value), next(nullptr) {}
//};
//
//class Queue {
//private:
//	Node* front;
//	Node* rear;
//public:
//	Queue() : front(nullptr), rear(nullptr) {}
//
//	void enqueue(double value) {
//		Node* newNode = new Node(value);
//
//		if (rear == nullptr) {
//			front = rear = newNode;
//		}
//		else {
//			rear->next = newNode;
//			rear = newNode;
//		}
//	}
//
//	void dequeue() {
//		if (front == nullptr) {
//			std::cout << "Очередь пуста. Невозможно удалить элемент." << std::endl;
//		}
//		else {
//			Node* temp = front;
//			front = front->next;
//			delete temp;
//		}
//	}
//
//	double calculateProduct() {
//		double product = 1.0;
//
//		Node* curr = front;
//		while (curr != nullptr) {
//			product *= curr->data;
//			curr = curr->next;
//		}
//
//		return product;
//	}
//};
//
//int main() {
//	Queue queue;
//
//	// Добавляем элементы в очередь
//	queue.enqueue(5.0);
//	queue.enqueue(3.0);
//	queue.enqueue(2.0);
//	queue.enqueue(4.0);
//
//	// Находим произведение элементов
//	double product = queue.calculateProduct();
//	std::cout << "Произведение элементов в очереди: " << product << std::endl;
//
//	// Удаляем элемент из очереди
//	queue.dequeue();
//
//	// Находим произведение элементов после удаления
//	double productAfterDequeue = queue.calculateProduct();
//	std::cout << "Произведение элементов после удаления: " << productAfterDequeue << std::endl;
//
//	return 0;
//}
//struct Node {
//	double data;
//	Node* next;
//	Node(double value) : data(value), next(nullptr) {}
//};
//
//class Queue {
//private:
//	Node* front;
//	Node* rear;
//public:
//	Queue() : front(nullptr), rear(nullptr) {}
//
//	void enqueue(double value) {
//		Node* newNode = new Node(value);
//
//		if (rear == nullptr) {
//			front = rear = newNode;
//		}
//		else {
//			rear->next = newNode;
//			rear = newNode;
//		}
//	}
//
//	void dequeue() {
//		if (front == nullptr) {
//			std::cout << "Очередь пуста. Невозможно удалить элемент." << std::endl;
//		}
//		else {
//			Node* temp = front;
//			front = front->next;
//			delete temp;
//		}
//	}
//
//	void printQueue() {
//		Node* current = front;
//		while (current != nullptr) {
//			std::cout << current->data << " ";
//			current = current->next;
//		}
//		std::cout << std::endl;
//	}
//
//	double calculateProduct() {
//		double product = 1.0;
//
//		Node* curr = front;
//		while (curr != nullptr) {
//			product *= curr->data;
//			curr = curr->next;
//		}
//
//		return product;
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	Queue queue;
//
//	// Добавляем элементы в очередь
//	queue.enqueue(-2.2);
//	queue.enqueue(2.3);
//	queue.enqueue(2.2);
//	queue.enqueue(5.1);
//	queue.enqueue(6.7);
//
//	std::cout << "Содержимое очереди: ";
//	queue.printQueue();
//
//	// Удаляем 3 элемента из очереди
//	queue.dequeue();
//	queue.dequeue();
//	queue.dequeue();
//
//	std::cout << "Содержимое очереди после удаления: ";
//	queue.printQueue();
//
//	// Добавляем число 1.9 в очередь
//	queue.enqueue(1.9);
//
//	std::cout << "Содержимое очереди после добавления 1.9: ";
//	queue.printQueue();
//
//	// Находим произведение элементов в очереди
//	double product = queue.calculateProduct();
//	std::cout << "Произведение элементов в очереди: " << product << std::endl;
//
//	return 0;
//}
//struct Node {
//	double data;
//	Node* next;
//};
//
//class Queue {
//private:
//	Node* head;
//	Node* tail;
//
//public:
//	Queue() {
//		head = nullptr;
//		tail = nullptr;
//	}
//
//	void enqueue(double value) {
//		Node* newNode = new Node{ value, nullptr };
//		if (head == nullptr) {
//			head = tail = newNode;
//		}
//		else {
//			tail->next = newNode;
//			tail = newNode;
//		}
//	}
//
//	double dequeue() {
//		if (head == nullptr) {
//			std::cout << "Ошибка: очередь пуста!" << std::endl;
//			return -1;
//		}
//		double value = head->data;
//		Node* temp = head;
//		head = head->next;
//		if (head == nullptr) {
//			tail = nullptr;
//		}
//		delete temp;
//		return value;
//	}
//
//	void print() {
//		Node* current = head;
//		while (current != nullptr) {
//			std::cout << current->data << " ";
//			current = current->next;
//		}
//		std::cout << std::endl;
//	}
//
//	double multiply() {
//		double product = 1;
//		Node* current = head;
//		while (current != nullptr) {
//			product *= current->data;
//			current = current->next;
//		}
//		return product;
//	}
//};
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	Queue queue;
//
//	queue.enqueue(-2.2);
//	queue.enqueue(2.3);
//	queue.enqueue(2.2);
//	queue.enqueue(5.1);
//	queue.enqueue(6.7);
//
//	std::cout << "Содержимое очереди: ";
//	queue.print();
//
//	queue.dequeue();
//	queue.dequeue();
//	queue.dequeue();
//
//	queue.enqueue(1.9);
//
//	std::cout << "Содержимое очереди после удаления 3 элементов и добавления 1.9: ";
//	queue.print();
//
//	double product = queue.multiply();
//	std::cout << "Произведение элементов очереди: " << product << std::endl;
//
//	return 0;
//}