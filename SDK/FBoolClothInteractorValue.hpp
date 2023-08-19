#pragma once
#include <cstdint>
#include "EBoolClothInteractorValueType.hpp"
#pragma pack(push, 1)
struct FBoolClothInteractorValue {
    EBoolClothInteractorValueType Type; // 0x0
    bool Value; // 0x1
}; // Size: 0x2
#pragma pack(pop)
