#include <iostream>

#include "tensor.hpp"
#include "matmul.hpp"

int main()
{

    constexpr lumina::tensor<float, lumina::shape<100,100>> t{};

    constexpr auto result = lumina::matmul(t, t);

    std::cout << result;

    return 0;
}