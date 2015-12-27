//
// Created by jeremy on 12/25/15.
//  Only for positive numbers as we'll consider -1 an error value return. what are exceptions?

#ifndef LISTS_LINKEDLIST_H
#define LISTS_LINKEDLIST_H

#endif //LISTS_LINKEDLIST_H
#ifndef LISTS_LINKEDLISTMEMBER_H
#include "LinkedListMember.h"

#endif
#include <iostream>
using namespace std;
class LinkedList {
    LinkedListMember* first;
    LinkedListMember* last;

public:
    LinkedListMember* getFirst();
    LinkedListMember* getLast();
    void append(int newLast);
    ~LinkedList();
    LinkedList();
};


void LinkedList::append(int newLastData){
    LinkedListMember* prevLastMember = last;
    LinkedListMember* newLastMember = new LinkedListMember(newLastData, prevLastMember, nullptr);
    if (last==nullptr){
        first = newLastMember;
        last = newLastMember;
    } else {
        prevLastMember->setNext(newLastMember);
        last=newLastMember;
    }
}
LinkedList::~LinkedList() {
    first = first->getNext();
    while (first!=last){
        cout<<"delete: "<< first->getData()<<endl;
        delete first->getPrev();
        first = first->getNext();
    }
    cout<<"delete: "<<last->getPrev()->getData()<<endl;
    delete last->getPrev();
    cout<<"delete: "<<last->getData()<<endl;
    delete last;
}
LinkedList::LinkedList() {
    first = nullptr;
    last = nullptr;
}
LinkedListMember* LinkedList::getFirst(){
    return first;
}

LinkedListMember* LinkedList::getLast(){
    return last;
}