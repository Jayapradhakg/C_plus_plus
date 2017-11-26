//
//  eg_inventory_data.h
//  ob_cpp
//
//  Created by Jayapradha Kodihalli on 11/26/17.
//  Copyright © 2017 Jayapradha Kodihalli. All rights reserved.
//

#ifndef eg_inventory_data_h
#define eg_inventory_data_h
#define MAX_NAME 100

/*
 * Program to get the detail of people and display the result
 */
class people {
private:
    char name[MAX_NAME];
    int age;
    
public:
    void get_people_data() {
        std::cout << "\n Enter Name:";
        std::cin >> name;
        
        std::cout << "\t Enter Age:";
        std::cin >> age;
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        }
    }
    void display() {
        std::cout << "\n Most latest data entered: ";
        if(strlen(name) > 0) {
            std::cout << "Name: " << name << "\t";
        } else {
            std::cout << " No name entered \t";
        }
        if(age > 0) {
            std::cout << age << " of age \n";
        } else {
            std::cout << " No age entered \n";
        }
    }
    void run() {
        std::cout << " Program to get the detail of person and display the input ";
        get_people_data();
        display();
        //std::cin.clear();
        //std::cin.ignore(256, '\n');
    }
};

#endif /* eg_inventory_data_h */
