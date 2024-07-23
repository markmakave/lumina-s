#pragma once

#include <cstdint>

// #define DECLARE(name, base)                                                     \
// template <base value>                                                           \
// struct name                                                                     \
// {                                                                               \
//     using base = base;                                                          \
//                                                                                 \
//     constexpr name operator+ (name rhs)  const { return {value + rhs.value}; }  \
//     constexpr name operator- (name rhs)  const { return {value - rhs.value}; }  \
//     constexpr name operator* (name rhs)  const { return {value * rhs.value}; }  \
//     constexpr name operator/ (name rhs)  const { return {value / rhs.value}; }  \
//     constexpr name operator% (name rhs)  const { return {value % rhs.value}; }  \
//     constexpr name operator& (name rhs)  const { return {value & rhs.value}; }  \
//     constexpr name operator| (name rhs)  const { return {value | rhs.value}; }  \
//     constexpr name operator^ (name rhs)  const { return {value ^ rhs.value}; }  \
//     constexpr name operator~()           const { return {~value}; }             \
//     constexpr name operator++()          const { return {value + 1}; }          \
//     constexpr name operator--()          const { return {value - 1}; }          \
//     constexpr name operator-()           const { return -value; }               \
//     constexpr bool operator== (name rhs) const { return value == rhs.value; }   \
//     constexpr bool operator!= (name rhs) const { return value != rhs.value; }   \
//     constexpr bool operator<  (name rhs) const { return value < rhs.value;  }   \
//     constexpr bool operator>  (name rhs) const { return value > rhs.value;  }   \
//     constexpr bool operator<= (name rhs) const { return value <= rhs.value; }   \
//     constexpr bool operator>= (name rhs) const { return value >= rhs.value; }   \
//     constexpr bool operator|| (name rhs) const { return value || rhs.value; }   \
//     constexpr bool operator&& (name rhs) const { return value && rhs.value; }   \
//     constexpr bool operator!() const { return !value; }                         \
//     constexpr name() = default;                                                 \
//     constexpr name operator= (base rhs) { value = rhs; return *this; }          \
// };

namespace lumina
{

// DECLARE(u8, uint8_t);
// DECLARE(u16, uint16_t);
// DECLARE(u32, uint32_t);
// DECLARE(u64, uint64_t);

// DECLARE(i8, int8_t);
// DECLARE(i16, int16_t);
// DECLARE(i32, int32_t);
// DECLARE(i64, int64_t);

// template <uint64_t value>
// using size_t = u64<value>;

using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

using size_t = u64;

}
