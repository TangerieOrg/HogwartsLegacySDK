#pragma once
#include <cstdint>
#include "FKeyHandleMap.hpp"
#pragma pack(push, 1)
struct FIndexedCurve {
    char pad_0[0x8];
    FKeyHandleMap KeyHandlesToIndices; // 0x8
}; // Size: 0x68
#pragma pack(pop)
