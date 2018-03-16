//
// Created by pgourdet on 1/8/2018.
//

#ifndef BST_BST_H
#define BST_BST_H

#include <iostream>

template <class T>
class BstFunc{
private:
    int numDupicateNode;
    struct Node{
        T data;
        Node* right;
        Node* left;
    }*head;
public:
    BstFunc(){
head = NULL;
    };
    Node* getHead(){

        return head;
    }
    Node* getNewNode(T data){Node *node = new Node;
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    void setNumDup(){ numDupicateNode = 0;}
    void BSTaddNode(Node*,T);
    void BSTInorder(Node*);
    void BSTsearch(Node*,T);
    void incrementDup(){

        numDupicateNode++;
    }
    void printNumDup(){
        std::cout << std::endl  << numDupicateNode << " duplicate nodes not inserted was ";
    }


};

template <class T>
void BstFunc<T>::BSTaddNode(Node * head1,T data){

    if( head1 == NULL){
        head = getNewNode(data);
    }
    else if(head1->data == data){
       incrementDup();

    }
    else if(head1->data > data){
        if(head1->left != NULL){
            BSTaddNode(head1->left , data);
        }else{
            head1->left =  getNewNode( data);
        }
    }
    else if(head1->data < data){
        if(head1->right != NULL){
            BSTaddNode(head1->right,data);
        }else{
            head1->right =  getNewNode(data);
        }
    }
}
template <class T>
void BstFunc<T>::BSTInorder(Node * root){
    if(root == NULL)
        return;
    BSTInorder(root->left);
    std::cout << root->data << " , ";
    BSTInorder(root->right);

}

template <class T>
void BstFunc<T>::BSTsearch(Node* root, T) {


}
#endif //BST_BST_H
