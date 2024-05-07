#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Node {
    string key;
    string value;
    Node* left;
    Node* right;

    Node(string k, string v) : key(k), value(v), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;

    Node* insert(Node* node, string key, string value) {
        if (node == nullptr) {
            return new Node(key, value);
        }

        if (key < node->key) {
            node->left = insert(node->left, key, value);
        }
        else if (key > node->key) {
            node->right = insert(node->right, key, value);
        }
        else {
            node->value = value; // Обновить значение, если ключ уже существует
        }

        return node;
    }

    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    Node* remove(Node* node, string key) {
        if (node == nullptr) {
            return nullptr;
        }

        if (key < node->key) {
            node->left = remove(node->left, key);
        }
        else if (key > node->key) {
            node->right = remove(node->right, key);
        }
        else {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            }
            else if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            else {
                Node* minRight = findMin(node->right);
                node->key = minRight->key;
                node->value = minRight->value;
                node->right = remove(node->right, minRight->key);
            }
        }

        return node;
    }

    void inorderTraversal(Node* node) {
        if (node != nullptr) {
            inorderTraversal(node->left);
            cout << node->key << " : " << node->value << endl;
            inorderTraversal(node->right);
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(string key, string value) {
        root = insert(root, key, value);
    }

    void remove(string key) {
        root = remove(root, key);
    }

    string search(string key) {
        Node* current = root;
        while (current != nullptr) {
            if (key == current->key) {
                return current->value;
            }
            else if (key < current->key) {
                current = current->left;
            }
            else {
                current = current->right;
            }
        }
        return "Ключ не найден";
    }

    void display() {
        inorderTraversal(root);
    }
};

int main() {
    BinaryTree dictionary;
    ifstream file("dictionary.txt");
    string key, value;

    if (file.is_open()) {
        while (file >> key >> value) {
            dictionary.insert(key, value);
        }
        file.close();
    }
    else {
        cout << "Невозможно открыть файл";
        return 1;
    }

    int choice;
    do {
        cout << "\n1. Добавьте слово\n2. Удалите слово\n3. Найти слово\n4. Показать словарь\n5. Выйти\nВведите цифру, для дальнейшего действия: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Введите слово для добавление: ";
            cin >> key;
            cout << "Введите значение: ";
            cin >> value;
            dictionary.insert(key, value);
            break;
        case 2:
            cout << "Введите слово для удаления: ";
            cin >> key;
            dictionary.remove(key);
            break;
        case 3:
            cout << "Введите слово для поиска: ";
            cin >> key;
            cout << dictionary.search(key) << endl;
            break;
        case 4:
            cout << "Словарь:\n";
            dictionary.display();
            break;
        case 5:
            cout << "Выход из программы\n";
            break;
        default:
            cout << "Некорректный выбор. Пожалуйста, введите снова.\n";
        }
    } while (choice != 5);

    return 0;
}
