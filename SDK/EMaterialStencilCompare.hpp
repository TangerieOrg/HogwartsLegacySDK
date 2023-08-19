#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialStencilCompare : uint8_t {
    MSC_Less = 0,
    MSC_LessEqual = 1,
    MSC_Greater = 2,
    MSC_GreaterEqual = 3,
    MSC_Equal = 4,
    MSC_NotEqual = 5,
    MSC_Never = 6,
    MSC_Always = 7,
    MSC_Count = 8,
    MSC_MAX = 9,
};
#pragma pack(pop)
