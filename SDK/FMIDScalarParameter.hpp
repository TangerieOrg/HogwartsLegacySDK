#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FMIDScalarParameter {
    FName Name; // 0x0
    float Value; // 0x8
}; // Size: 0xc
#pragma pack(pop)
