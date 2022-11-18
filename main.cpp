#include <iostream> // std::cout/cin << endl
//-> Error «undeclared identifier» -> to fix #include <iostream>
// int -> 4 bytes

#include "cmake-build-debug/personal-library.h" // the way to the file must be with directories
#include "cmake-build-debug/structure.h"// connecting structure to get access to the Person entity
#include "cmake-build-debug/calculator.h"// connecting personal calculator
#include <string>//connecting standard library to use string type
#include "cmake-build-debug/test.h"// connecting tests
#include "cmake-build-debug/name-sorter.h"// connecting name-sorter file
void newFunction();

int main() {
    double d(5.0);
    float f(5.0f);
    int i1 = 11;
    int i2 = 3;
    float x = static_cast<float>(i1) / i2;
    //std::string str ("temp"); // creating string value
                        // creating string value
    std::string str;
//    std::cout << "int to float casting result : " << x << std::endl;
//    libraryCall();
//    newFunction();
                        // create new element
//    int a ;
                        // a = user input until first space
    //std::cin >> a;
                        // str = user input, whole line
    //std::getline(std::cin, str);
                        //-> При вводе числовых значений нужно удалить символ новой строки
                        // из входного потока данных с помощью std::cin.ignore().
    //std::cin.ignore(32767, '\n');
//    std::cout  << a << " - has " << sizeof(a) << " bytes." << std::endl; // program output
                        //Structure creation
    Person tom;
                        //Structure fields set up
    tom.id = 001;
    tom.age = 27;
    tom.salary = 4324.87;
                        //Structure creation and initialization
    Person ted {002, 32, 5000.95};
    //std :: cout << getRandomNum(-10, 10) << std::endl;
    //std :: cout << getRandomNumber(-10, 10)<< std::endl;
//    std::cout << isdigit('9');
//    std::cout << calculatorRunner() << std::endl;
    //array creation
    int array[7];
//    sortNames();
    return test();
}
