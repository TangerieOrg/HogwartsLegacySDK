#pragma once
#include <cstdint>
namespace EArithmeticKeyOperation {
#pragma pack(push, 1)
enum Type {
    Equal = 0,
    NotEqual = 1,
    Less = 2,
    LessOrEqual = 3,
    Greater = 4,
    GreaterOrEqual = 5,
    EArithmeticKeyOperation_MAX = 6,
};
#pragma pack(pop)
}
