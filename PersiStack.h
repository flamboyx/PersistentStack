#include <iostream>
#include <vector>

template<typename T>
struct Node {
    T value;
    Node<T> *prev;

    Node(T value, Node<T> *pointer) : value(value), prev(pointer) {}
};

template<typename T>
class PersiStack {

private:
    std::vector<Node<T> *> heads;

public:
    PersiStack() {
        heads.push_back(nullptr);
    };

    void Push(const int version, const T value) {
        if (version <= heads.size() - 1) {
            auto *newNode = new Node<T>(value, heads[version]);
            heads.push_back(newNode);
        }
        else throw std::runtime_error("There is no such version");
    };

    T Pop(const int version) {
        if (version <= heads.size() - 1) {
            T value = heads[version]->value;
            Node<T> *prev = heads[version]->prev;
            heads.push_back(prev);

            return value;
        }
        else throw std::runtime_error("There is no such version");
    };

    void Print(const int version) const {
        if (version <= heads.size() - 1) {
            Node<T> *cur = heads[version];

            while (cur != nullptr) {
                std::cout << cur->value << " ";
                cur = cur->prev;
            }

            std::cout << std::endl;
        }
        else throw std::runtime_error("There is no such version");
    };
};