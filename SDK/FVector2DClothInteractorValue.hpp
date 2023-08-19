#pragma once
#include <cstdint>
#include "ECLothInteractorValueType.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FVector2DClothInteractorValue {
    ECLothInteractorValueType Type; // 0x0
    char pad_1[0x3];
    FVector2D Value; // 0x4
}; // Size: 0xc
#pragma pack(pop)
