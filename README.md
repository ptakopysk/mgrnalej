# mgrnalej

0. Generate input data

       for i in $(seq 10000); do echo $RANDOM; done > input.txt
    
1. **hello**: Hello world in C++
    1. Open editor
    
           nano hello.cpp
    1. Input code

           #include <iostream>
           using namespace std;
           
           int main() {
               cout << "Hello, World!" << endl;
               return 0;
           }
    1. Compile
     
           g++ hello.cpp -o hello.bin
    1. Run
    
           ./hello.bin

1. **max**: Read in some numbers, write out the largest one
1. **kbest**: Write out the K largest ones (if K is e.g. 3 can be done explicitly, or for a general K this should be done with a HEAP)
1. **bubble**: Sort the list in an ARRAY using something simple (bubble sort?)
1. **insert**: Sort the list in a LINKED LIST using something simple (insertion sort?)
1. **bst**: Construct a basic BINARY SEARCH TREE from the list (using pointers or an array, I don't know).
1. **hash**: Store the numbers in a HASH TABLE implemented with a simple hashing function and separate chaining with linked lists
