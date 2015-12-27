//
// Created by jeremy on 12/26/15.
//

#ifndef LISTS_LINKEDLISTMEMBER_H
#define LISTS_LINKEDLISTMEMBER_H

#endif //LISTS_LINKEDLISTMEMBER_H
class LinkedListMember {
    LinkedListMember* prev;
    LinkedListMember* next;
    int data;

public:
    LinkedListMember* getNext();
    LinkedListMember* getPrev();
    void setNext(LinkedListMember* next);
    void setPrev(LinkedListMember* prev);
    int getData();
    void setData(int data);
    LinkedListMember(int data,LinkedListMember* prev, LinkedListMember* next);
    ~LinkedListMember();


};
LinkedListMember::LinkedListMember(int data, LinkedListMember* prev, LinkedListMember* next) {
    this->data = data;
    this->next = next;
    this->prev = prev;
}
/*
 * The Destructor automatically re-connects the list.
 * So, to delete an element from the list, one simply calls the destructor.
 */
LinkedListMember::~LinkedListMember() {
    if (next==nullptr && prev!= nullptr ){
        prev->setNext(nullptr);
    }
    if (prev==nullptr && next!= nullptr){
        next->setPrev(nullptr);
    }
    if (prev!=nullptr && next!=nullptr){
        prev->setNext(next);
        next->setPrev(prev);
    }

}
LinkedListMember* LinkedListMember::getNext() {
    return next;
}
LinkedListMember* LinkedListMember::getPrev(){
    return prev;
}

void LinkedListMember::setData(int data) {
    this->data = data;
}
void LinkedListMember::setNext(LinkedListMember *next) {
    this->next = next;
}
void LinkedListMember::setPrev(LinkedListMember *prev) {
    this->prev = prev;
}
int LinkedListMember::getData(){
    return data;
}