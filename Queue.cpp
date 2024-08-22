// #include<iostream>
// using namespace std;

// #define SIZE 10

// class Que 
// {
//     private:
//         int arr[SIZE];
//         int tos, bos;
    
//     public:
//         Que();
//         void enQue(int x);
//         int deQue();
//         void size();
//         bool isFull();
//         bool isEmpty();
// };

// Que::Que() {
//     tos = 0;
//     bos = 0;
// }

// void Que::enQue(int x) {
//     if (!isFull()) {
//         arr[tos++] = x;
//     } else {
//         cout << "The queue is full!" << endl;
//     }
// }

// int Que::deQue() {
//     if (!isEmpty()) {
//         return arr[bos++];
//     } else {
//         cout << "The queue is empty!" << endl;
//         return -1; // Indicating the queue is empty
//     }
// }

// void Que::size() {
//     cout << "The size of the queue is " << tos - bos << endl;
// }

// bool Que::isFull() {
//     if (tos == SIZE) {
//         return true;
//     } else {
//         return false;
//     }
// }

// bool Que::isEmpty() {
//     if (tos == bos) {
//         return true;
//     } else {
//         return false;
//     }
// }

// int main() {
//     Que q;
//     for (int i = 0; i < 5; i++) {
//         q.enQue(i);
//     }
    
//     q.size(); // Display the size of the queue

//     while (!q.isEmpty()) {
//         cout << q.deQue() << " ";
//     }
//     cout << endl;
    
//     q.size(); // Display the size of the queue after dequeuing all elements

//     return 0;
// }





// #include<iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node* prev;
// };

// node* head;

// class stackLL
// {
//     public:
//         stackLL() {
//             head = NULL;
//         }
//         void push(int x);
//         int pop();
//         void display(node*);
//         bool isEmpty();
// };

// void stackLL::push(int x) {
//     node* temp = new node;
//     temp->data = x;
//     temp->prev = head;
//     head = temp;
// }

// int stackLL::pop() {
//     int z = head->data;
//     node* temp = head;
//     head = head->prev;
//     delete temp;
//     return z;
// }

// void stackLL::display(node* temp = head) {
//     if(temp != NULL) {
//         cout << temp->data << " " << endl;
//         display(temp->prev);
//     }
// }

// bool stackLL::isEmpty() {
//     if(head == NULL) 
//         return true;
//     return false;
// }

// int main()
// {
//     stackLL s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.display();
//     cout << "Popped element is " << s.pop() << endl;
//     cout << "Popped element is " << s.pop() << endl;
//     s.display();
//     s.isEmpty();
//     return 0;
// }





#include <bits/stdc++.h>  
using namespace std;  

class base  
{  
    public:  
        virtual void print ()  
        { cout<< "print base class" <<endl; }  
        
        void show ()  
        { cout<< "show base class" <<endl; }  
};
class derived:public base  
{  
public:  
    void print () //print () is already virtual function in derivedclass, we could also declared as virtual void print () explicitly  
    { cout<< "print derived class" <<endl; }  
    
    void show ()  
    { cout<< "show derived class" <<endl; }  
};  
   
//main function  
int main()   
{  
    base *bptr;  
    derived d;  
    bptr = &d;  
        
    //virtual function, binded at runtime (Runtime polymorphism)  
    bptr->print();  
     // Non-virtual function, binded at compile time  
    bptr->show();   
   
    return 0;  
}   