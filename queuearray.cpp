#include <iostream>
using namespace std;

class queueArray {
    private:
        int* arr;
        int size;
        int front, end;
    public:
        queueArray();
        bool isEmpty();
        bool isFull();
        void resize();
        void enqueue(int value);
        void dequeue();
        int peek();
        void print();
};

queueArray::queueArray() {
    // implement
    // lets initialize size to 3
    front=end=-1;
    arr = new int [size];
    size =3;


}

bool queueArray::isEmpty() {
    // implement
    return front=end=-1;
}

bool queueArray::isFull() {
    // implement
    return (end==(size-1));
}

void queueArray::resize() {
    // implement
    if(front == end){
        front=end=-1;
    }
}

void queueArray::enqueue(int value) {
    // implement
    if(isFull()){
        cout << "full" <<endl;
    }
    else{
        if(front == -1 && end == -1){
            
            front = end = 0;
            arr[end] = value;
        }
        else{
            end++;
            arr[end] = value;
        }
    }
}

void queueArray::dequeue() {
    // implement
    if(isEmpty()){
        cout << "empty" <<endl;
    }
    else if(front == end){
        front = end =-1;
    }
    else{ 
        front++;        
        }
}

int queueArray::peek() {
    // implement
    if(!isEmpty())
        return arr[front];
    return -1;
}

void queueArray::print() {
    // implement
    if(isEmpty()){
        cout << "empty" <<endl;
    }
    else {
        for(int i =0; i< end+1; i++){
            cout << arr[i] << endl;
        }
    }
}

int main() {
    queueArray q;

    q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);
     q.dequeue();
     q.dequeue();

     q.enqueue(50);
     std::cout << q.peek() << std::endl;

     q.print();

    return 0;
}