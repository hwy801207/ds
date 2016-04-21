#ifndef CHAINNODE_H
#define CHAINNODE_H

template <class T>
struct chainNode
{
    T element;
    chainNode *next;
    //方法
    chainNode();
    chainNode(const T& element){ this->element = element;}
    chainNode(const T& element, chainNode<T>* next){
        this->element = element;
        this->next = next;
    }

};

#endif // CHAINNODE_H
