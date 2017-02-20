*******************************************************
*  Name      :  Melanie Woe        
*  Student ID:  105557790              
*  Class     :  CSC 2421           
*  HW#       :  2                
*  Due Date  :  Feb. 1, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “my_bag” is a set container class similar to program bag that can contain more than one copy of an item. But set can contain only one copy of any given item. By using the bag1 code and extend it to this program and then to verify the set class, a main function that takes two set of integers from an input file is needed, and store them into separate sets and apply the two operations.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program. This is the file that input the file called “input.dat” in which the file 
   contains a set of integers, and it will store the sets of integers into separate set.
Name:  my_bag.h
   Contains the definition for the class set.  

Name: my_bag.cpp
   Defines and implements the set class for implementing a class that can only contains   
   one copy of number.  
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on Xcode.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WoeHW2]

   Now you should see a directory named homework with the files:
        main.cpp
        my_random.h
        my_random.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WoeHW2] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[my_bag]

4. Delete the obj files, executables, and core dump by
   %./make clean
