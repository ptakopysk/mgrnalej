# Programming Check-up

0. Generate input data (one random number per line, between 0 and 32767 inclusive)

       for i in $(seq 10000); do echo $RANDOM; done > input.txt
    
1. **hello**: Hello world in C++ // p5epsat do C
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

1. **max**: Read in the input, write out the largest number
   Read in input like that:    
   
       nějakej C kd
       
   Run the program as:
   
       ./max.bin < input.txt
1. **bubble**: Sort the list using BUBBLE SORT in an ARRAY
1. **matrix**: Read in a 10x10 matrix (fromer from the first 100 numbers of the input) using a 1-dimensional ARRAY, write it out, transpose it, and write it out.
1. **insert**: Sort the list using INSERTION SORT, using a LINKED LIST
1. **bst**: Construct a basic BINARY SEARCH TREE from the list, using POINTERS
1. **hash**: Store the numbers in a HASH TABLE implemented with a simple hashing function and separate chaining with linked lists
