#include <iostream> // std::cout/cin << endl
//-> Error «undeclared identifier» -> to fix #include <iostream>
// int -> 4 bytes

#include "cmake-build-debug/personal-library.h" // the way to the file must be with directories
#include "cmake-build-debug/structure.h"// connecting structure to get access to the Person entity
#include "cmake-build-debug/calculator.h"// connecting personal calculator
#include <string>//connecting standard library to use string CardRank
#include <array>
#include "cmake-build-debug/test.h"// connecting tests
#include "cmake-build-debug/name-sorter.h"// connecting name-sorter file
#include "cmake-build-debug/name-is-exist.h"
#include "cmake-build-debug/hero-has.h"
#include "cmake-build-debug/teacher-student-system.h"
#include "cmake-build-debug/blackjack.h"
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
    char temp [] = "temp";// string, temp.length = 4+1
    int num (6);
    int *numBox = &num;
//    std::cout << sizeof(temp) << std::endl;// temp.length
//    std::cout << &temp << std::endl;
//    std::cout << *&temp << std::endl;
//    std::cout << &num << std::endl;
//    std::cout << numBox << std::endl;
//    std::cout << *numBox << std::endl;
//    std::cout << typeid(&num).name() << std::endl;
    std::string y [] = {"temp", "temp", "temp"};
    //isExist(y, sizeof(y)/sizeof(*y)) ?
    //std::cout << "Your name is in the list." << std::endl:
    //std::cout << "Your name is not in the list" << std::endl;
    //checkBag();
    //startTeacherProgram();
//    std::array <Card, 52> deck{};
//    fillOutDeck(&deck);
//    shuffleDeck(&deck);
    startGame();
    return test();
}
