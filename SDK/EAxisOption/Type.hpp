#pragma once
#include <cstdint>
namespace EAxisOption {
#pragma pack(push, 1)
enum Type {
    X = 0,
    Y = 1,
    Z = 2,
    X_Neg = 3,
    Y_Neg = 4,
    Z_Neg = 5,
    Custom = 6,
    EAxisOption_MAX = 7,
};
#pragma pack(pop)
}
