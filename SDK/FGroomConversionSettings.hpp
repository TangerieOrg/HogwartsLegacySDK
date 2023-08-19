#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FGroomConversionSettings {
    FVector Rotation; // 0x0
    FVector Scale; // 0xc
}; // Size: 0x18
#pragma pack(pop)
