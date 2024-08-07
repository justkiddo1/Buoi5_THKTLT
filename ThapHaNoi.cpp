#include <iostream>  

void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        std::cout << "Chuyển đĩa 1 từ " << from_rod << " sang " << to_rod << std::endl;
        return;
    }
 
    TowerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    std::cout << "Chuyển đĩa " << n << " từ " << from_rod << " sang " << to_rod << std::endl;

    TowerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;

    std::cout << "Nhập số lượng đĩa: ";
    std::cin >> n;

    TowerOfHanoi(n, 'A', 'C', 'B'); 

    return 0;
}