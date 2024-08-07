#include <iostream>  
#include <string>  

int main() {
    std::string s1, s2;

    std::cout << "Nhập chuỗi s1: ";
    std::getline(std::cin, s1);

    std::cout << "Nhập chuỗi s2: ";
    std::getline(std::cin, s2);
 
    size_t position = s1.find(s2);

    if (position != std::string::npos) {
        std::cout << "Chuỗi s2 xuất hiện trong s1 tại vị trí: " << position << std::endl;
    }
    else {
        s1 += s2;
        std::cout << "Chuỗi s2 không có trong s1. Đã nối s2 vào cuối s1." << std::endl;
        std::cout << "Kết quả: " << s1 << std::endl;
    }

    return 0;
}