#pragma once

#include "tensor.hpp"

namespace lumina
{

template <typename T, typename S1, typename S2>
requires(
    S1::degree == 2 &&
    S2::degree == 2 &&
    S1::template get<1>() == S2::template get<0>()
)
constexpr
tensor<T, shape<S1::template get<0>(), S2::template get<1>()>> matmul(
    const tensor<T, S1>& lhs,
    const tensor<T, S2>& rhs)
{
    tensor<T, shape<S1::template get<0>(), S2::template get<1>()>> result{};

    for (size_t i = 0; i < S1::template get<0>(); i++)
    {
        for (size_t j = 0; j < S2::template get<1>(); j++)
        {
            for (size_t k = 0; k < S1::template get<1>(); k++)
            {
                result[i][j] += lhs[i][k] * rhs[k][j];
            }
        }
    }

    return result;
}

}
