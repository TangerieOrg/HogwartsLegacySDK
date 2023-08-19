#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FEdGraphPinReference {
    char pad_0[0x8];
    FGuid PinId; // 0x8
}; // Size: 0x18
#pragma pack(pop)
