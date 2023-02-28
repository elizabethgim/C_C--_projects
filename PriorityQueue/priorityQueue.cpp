#include <iostream>
using namespace std;

#define MAX_ELEMENT 200

template <typename T>
struct Node{
private:
    int key;
    T data;
public:
    Node(){
        key = 0;
    }
    Node(int _key, T _data){
        key = _key;
        data = _data;
    }
    ~Node(){}

    int getKey(){
        return key;
    }
    void setKey(int _key){
        key = _key;
    }
    T getData(){
        return data;
    }
    void setData(T _data){
        data = _data;
    }
};

template <typename T>
class MaxHeap{
private:
    Node <T> node[MAX_ELEMENT];
    int size;
publice:
    MaxHeap(){
        size = 0;
    }
    ~MaxHeap(){}

    Node<T> & getParent(int index){
        return node[index/2];
    }
    Node<T> & getLeftChilde(int index){
        return node[index*2];
    }
    Node<T> & getRightChild(int index){
        return node[index*2+1];
    }

    void insert(int _key, T _data){
        if(isFull()){
            cout << "Heap is Full" << endl;
            return;
        }

        int index = ++size;

        while(index != 1 && key > getParent(index).getKey()){
            node[index] = getParent(index);
            index /= 2;
        }
    }
};