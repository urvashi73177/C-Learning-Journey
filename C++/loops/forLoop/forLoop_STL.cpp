 /* 
 
 Q- What is STL ? 
 STL stands for the Standard Template Library, which is a library in C++ that provides a collection of container classes, algorithms, and iterators. An STL container is a class template that provides a way to store and organize multiple objects of a certain type.

STL has 4 components:
Algorithms
Containers
Functors
Iterators

STL containers offer various data structures with different characteristics, allowing you to choose the most appropriate container for your specific needs. Here are some commonly used STL containers:

Vector: A dynamic array that can resize itself automatically when elements are added or removed. It provides random access and efficient insertion and deletion at the end.

List: A doubly-linked list that allows efficient insertion and deletion at any position. It does not provide random access but supports bidirectional traversal.

************CHECK STLnotes.txt file in C++_STL folder for more information***************


                        Using ForLoop in Vector container (STL)

What is vector container ? -
1) Vectors are the same as dynamic arrays with the ability to resize itself automatically
2) When an element is inserted or deleted, with their storage being handled automatically by the container. 
3)Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. 
4)In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. 
5)Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.

 
 */


#include <iostream>
using namespace std;

int main(){
    vector<int> v =  {1,2,3,4,5};
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        cout << *it << "\t";
    }
    return 0;
}

                       

