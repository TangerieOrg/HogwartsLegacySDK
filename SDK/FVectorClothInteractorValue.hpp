#pragma once
#include <cstdint>
#include "ECLothInteractorValueType.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FVectorClothInteractorValue {
    ECLothInteractorValueType Type; // 0x0
    char pad_1[0x3];
    FVector Value; // 0x4
}; // Size: 0x10
#pragma pack(pop)
