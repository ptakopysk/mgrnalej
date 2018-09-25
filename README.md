# mgrnalej

1. Generate input data

       for i in $(seq 10000); do echo $RANDOM; done > input.txt
    
1. Hello world in C++
    1. Open editor
    
           nano hello.cpp
    1. Input code

           #include <iostream>
           using namespace std;
           
           int main() 
           {
               cout << "Hello, World!" << endl;
               return 0;
           }
    1. Compile
     
           g++ hello.cpp -o hello.bin
    1. Run
    
           ./hello.bin
