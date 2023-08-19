#pragma once
#include <cstdint>
namespace ETextKeyOperation {
#pragma pack(push, 1)
enum Type {
    Equal = 0,
    NotEqual = 1,
    Contain = 2,
    NotContain = 3,
    ETextKeyOperation_MAX = 4,
};
#pragma pack(pop)
}
