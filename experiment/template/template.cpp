#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
T add (T a, T b){
    return a + b;
}

template <typename T>
class Box {
public:
    Box(T v) : value(v){}
    T get(){return value;}
private:
    T value;
};

// 例題1
template <typename T>
T maxValue (T a, T b){
    return std::max(a, b);
}

// 例題2
template <typename T>
class Holder{
public:
    Holder(T v) : value(v){}
    void setValue(T v){value = v;}
    T getValue(){return value;}
private:
    T value;
};

// 例題3
template <typename T>
T maxInArray(const std::vector<T>& vec){
    return *std::max_element(vec.begin(), vec.end());
}


int main(){
    std::cout << add(3, 4) << "\n";
    std::cout << add(3.5, 4.2) << "\n";

    Box<int> b1(10);
    Box<double> b2(3.5);

    std::cout << b1.get() << "\n";  // 10
    std::cout << b2.get() << "\n";  // 3.14

    std::cout << maxValue(3, 7) << "\n";           // int
    std::cout << maxValue(2.5, 1.7) << "\n";       // double
    std::cout << maxValue(std::string("a"), std::string("b")) << "\n";  // string

    Holder<int> h1(10);
    std::cout << h1.getValue() << "\n"; // 10
    h1.setValue(20);
    std::cout << h1.getValue() << "\n"; // 20

    Holder<std::string> h2("Hello");
    std::cout << h2.getValue() << "\n"; // Hello
    h2.setValue("World");
    std::cout << h2.getValue() << "\n"; // World

    std::vector<int> v = {3, 5, 2, 7, 1};
    std::cout << maxInArray(v) << "\n"; // 7

    std::vector<double> va = {2.5, 3.7, 1.2};
    std::cout << maxInArray(va) << "\n"; // 3.7
}