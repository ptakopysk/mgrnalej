# Programming Check-up

0. Generate input data (one random number per line, between 0 and 32767 inclusive)

       for i in $(seq 10000); do echo $RANDOM; done > input.txt
    
1. **hello**: Hello world in C
    1. Open editor
    
           nano hello.c
    1. Input code

           #include <stdio.h>
           
           int main() {
               printf("Hello, World!\n");
               return 0;
           }
    1. Compile
     
           gcc hello.c -o hello.bin
    1. Run
    
           ./hello.bin

1. **max**: Read in the input, write out the highest number. 
   
   Reading input and printing out numbers:    
   
       // read in stadard input, one integer per line
       int number;
       while (scanf("%d\n", &number) == 1) {
           printf("%d\n", number);
       }
       
   Run the program as:
   
       ./max.bin < input.txt
1. **bubble**: Sort the list using BUBBLE SORT in an ARRAY

   Reading in arguments and filling an array:

       #include <stdio.h>
       #include <stdlib.h>

       int main(int argc, char* argv[]) {
           int N = atoi(argv[1]);
           int numbers[N];

           for (int i = 0; i < N; i++) {
               scanf("%d\n", &numbers[i]);
               printf("%d ", numbers[i]);
           }
           printf("\n");
           
           return 0;
       }

1. **matrix**: Read in a 10x10 matrix (fromer from the first 100 numbers of the input) using a 1-dimensional ARRAY, write it out, transpose it, and write it out.
1. **insert**: Sort the list using INSERTION SORT, using a LINKED LIST
1. **bst**: Construct a basic BINARY SEARCH TREE from the list, using POINTERS
1. **hash**: Store the numbers in a HASH TABLE implemented with a simple hashing function and separate chaining with linked lists

# Recommended courses
* prográmko I
* C++
* [NSWI015 Unix/Linux Programming in C](https://is.cuni.cz/studium/eng/predmety/index.php?do=predmet&kod=NSWI015)
