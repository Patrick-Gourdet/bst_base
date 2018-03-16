/* Patrick Gourdet
 * Basic BST Insertion only
 *
 * */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BST.h"
int main() {
    BstFunc<int> bst;
    int nodeValue = 0,nodeNumber = 0;
    //Get number of nodes
    std::cout << "Enter nuber of nodes" << std::endl;
    std::cin >> nodeNumber;
    //Create loop inserting node values at random creating the BST
    bst.setNumDup();
    for(int i = 0;i < nodeNumber;i++){
        nodeValue =  rand()%10;
        bst.BSTaddNode(bst.getHead(),nodeValue);
    }
    bst.BSTInorder(bst.getHead());
    bst.printNumDup();
    //Traverse BST to output values
    return 0;
}