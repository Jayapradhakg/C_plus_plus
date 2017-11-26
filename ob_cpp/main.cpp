//
//  basic.cpp
//  cplusplus
//
//  Created by Jayapradha Kodihalli on 11/25/17.
//  Copyright © 2017 Jayapradha Kodihalli. All rights reserved.
//

/* Include files:
 #include - is a directive which causes preprocessor to include the header file contents to the file before compiling the code.
 */
#include "Header.h"
// class declaration and class functions

int exercise_programs() {
    std::cout << std::endl << "Exercise programs \n" << std::endl;
    // Inventory data: ex 2.5
    people p;
    p.run();
    // ex_variety
    ex exs;
    exs.run();
    return 0;
}


// main function
int main(int argc, const char * argv[]) {
    int val1, val2;
    float sum;
    // insert code here...
    std::cout << "Hello, World!\n" ;
    
    // backward compatible, Works with c functions, include stdio.h
    printf(" Enter the 2 numbers : ");
    
    /* scanf("%d", &val1, &val2);
     std::cout << val2;
     => just gives warning but the program executes, by default the val2 is assigned as 0.
     */
    scanf("%d", &val1);
    fflush(stdin);
    std::cin >> val2;
    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    std::cout << "Average of " << "2 numbers: "; // cascading of << - multiple use of << in 1 line
                                                 // parsed and excuted from right to left
    
    sum = (float)(val1 + val2) / 2;
    
    /* using ns_name::name; -  using-declaration: makes the symbol name from the namespace ns_name accessible for unqualified lookup as if declared in the same class scope, block scope, or namespace as where this using-declaration appears.
     
     Its not advisable to use this option. for eg:
     
     count = 10;
     using namespace std;
     :
     :
     
     cout << count; // throws an error as std::count is also accessible as count
     // and compiler doesnt to consider local or global symbol
     
     more in namespace.cpp
     */
    using std::endl;
    std::cout << sum << endl;
    
    try {
        int status =0;
        status = exercise_programs();
    }catch (std::exception e) {
        std::cout << e.what();
        return EXIT_FAILURE;
    }
    
    
    /*
     * main() returns an integer value to os: This is a remnant of the C/Unix legacy.
     
     If your program is being called within a script, it is useful for the script to know whether your program was successful. Thus, was born the convention of returning 0 for success from executable programs.
     
     C did not have native boolean types, so this was an integer. And this allowed us to return different numbers for different kinds of errors.
     In c++, once exception was introduced.its better practise to use exception.
     */
    return 0;
    // anything after return will not be executed,
    
}


/*
 Compile:
 
 cc <filename.c> => for c programs.
 For C++:
 CC <filename.cpp> or CC <filename.cpp> <filename.o>
 gcc <filename.cpp> or gcc <filename.cpp> <filename.o>
 g++ <filename.cpp> or g++ <filename.cpp> <filename.o>
 */

/*
 Output:
 
 Hello, World!
 Enter the 2 numbers : 2.3 4.5
 Average of 2 numbers: 1
 
 Exercise programs
 
 Program to get the detail of person and display the input
 Enter Name:sjshkjs
 Enter Age:55
 
 Most latest data entered: Name: sjshkjs	55 of age
 
 Enter 3 int values for Math, science and English in order: 5.6 7.8 9.0
 
 Enter 3 int values for Math, science and English in order: 4 5 6
 Values : Math - 4	 Science - 5	 English - 6
 Larger Number : 5
 WELL DONE
 WELL DONE
 WELL DONE
 WELL DONE
 WELL DONE
 WELL DONE
 
 result of m/s-e is : -4
 Enter Fahrenheit : 56
 13.3333
 Program ended with exit code: 0
 */

