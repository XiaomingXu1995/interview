#include <iostream>

int main() {
    float a = 1.0e10f;  // 大数
    float b = 1.0f;     // 小数
    float c = -1.0e10f; // 负的大数

    float result1 = (a + b) + c;
    float result2 = (a + c) + b;

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "c = " << c << std::endl;
    std::cout << "(a + b) + c = " << result1 << std::endl;
    std::cout << "(a + c) + b = " << result2 << std::endl;

    if (result1 != result2) {
        std::cout << "a + b + c != a + c + b" << std::endl;
    } else {
        std::cout << "a + b + c == a + c + b" << std::endl;
    }

    return 0;
}

