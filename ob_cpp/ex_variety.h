//
//  ex_variety.h
//  ob_cpp
//
//  Created by Jayapradha Kodihalli on 11/26/17.
//  Copyright © 2017 Jayapradha Kodihalli. All rights reserved.
//

#ifndef ex_variety_h
#define ex_variety_h

class ex {
private:
    int m, s, e;
    float ft;
protected:
    void read_and_single_out();
    void find_larger_of_two();
    void print_n_num();
    void math_1();
    void cal_cel();
public:
    void run();
};

void ex::read_and_single_out() {
    int count = 0;
    do{
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        }        
        if(count < 3 ) {
            std::cout << "\n Enter 3 int values for Math, science and English in order: ";
            std::cin >> m >> s >> e;
            count++;
        }
        else {
            std::cout << "\n No use of continuing. Will END";
            return;
        }
    } while(std::cin.fail()) ;
    std::cout <<"Values : Math - " << m << "\t Science - " << s << "\t English - " << e;
}

void ex::find_larger_of_two() {
    int large = (m > s) ? m: s ;
    std::cout << "\n Larger Number : " << large << std::endl;
}

void ex::print_n_num() {
    if(e<=0) {
        std::cout << " n is 0 , so no printing";
        return;
    }
    int temp = e;
    while (temp > 0) {
        std::cout << "WELL DONE \n";
        temp--;
    }
}

void ex::math_1() {
    float result = (float)m/(s-e);
    std::cout << "\n result of m/s-e is : " << result;
}
void ex::cal_cel() {
    std::cout << "\n Enter Fahrenheit : ";
    std::cin >> ft;
    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<int>::max(), '\n');
    }
    float cel = (ft-32)*5/9;
    std::cout << cel << std::endl;
}
void ex::run () {
    read_and_single_out();
    find_larger_of_two();
    print_n_num();
    math_1();
    cal_cel();
}
#endif /* ex_variety_h */
