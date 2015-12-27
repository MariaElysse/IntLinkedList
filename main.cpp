#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    cout<<"starting"<<endl;
    LinkedList* ll = new LinkedList;
    cout<<"made linkedlist"<<endl;
    ll->append(5);
    cout<<"added 5 to list"<<endl;
    ll->append(50);
    cout<<"added 50 to list"<<endl;
    ll->append(25);
    cout<<"added 25 to list"<<endl;
    LinkedListMember* current = ll->getFirst();
    while(current!=nullptr){
        cout<<"current: "<<current->getData()<<endl;
        current = current->getNext();
    }
    cout<<"delete: "<<ll->getFirst()->getNext()->getData()<<endl;
    delete(ll->getFirst()->getNext());
    current = ll->getFirst();
    while(current!=nullptr){
        cout<<"current: "<<current->getData()<<endl;
        current = current->getNext();
    }

    delete(ll);
    return 0;
}