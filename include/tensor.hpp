#pragma once

#include <array>

#include "types.hpp"

namespace lumina
{

template <size_t...>
class shape;

template <>
class shape<>
{
public:

    static constexpr size_t degree = 0;
};

template <size_t N, size_t... Rest>
requires (N > 0)
class shape<N, Rest...> : public shape<Rest...>
{
public:

    using base = shape<Rest...>;
    static constexpr size_t degree = base::degree + 1;

public:

    template <size_t index>
    requires(index > 0 && index < degree)
    static constexpr size_t get()
    {
        return base::template get<index - 1>();
    }

    template <size_t index>
    requires(index == 0)
    static constexpr size_t get()
    {
        return N;
    }

};


template <typename T, typename S>
class tensor;

template <typename T, typename S>
requires (S::degree == 1)
class tensor<T, S> : public std::array<T, S::template get<0>()>
{
public:

    friend std::ostream& operator<< (std::ostream& os, const tensor<T, S>& t)
    {
        os << "[";
        for (size_t i = 0; i < S::template get<0>(); i++)
        {
            os << t[i];
            if (i < S::template get<0>() - 1)
                os << ", ";
        }
        return os << "]";
    }
};

template <typename T, typename S>
requires (S::degree > 1)
class tensor<T, S> : public std::array<tensor<T, typename S::base>, S::template get<0>()>
{
public:

    friend std::ostream& operator<< (std::ostream& os, const tensor<T, S>& t)
    {
        os << "[";
        for (size_t i = 0; i < S::template get<0>(); i++)
        {
            os << t[i];
            if (i < S::template get<0>() - 1)
                os << ",\n";
        }
        return os << "]";
    }

};

}
