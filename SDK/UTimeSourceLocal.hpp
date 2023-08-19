#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "UTimeSourceVolume.hpp"
#pragma pack(push, 1)
class UTimeSourceLocal : public UTimeSourceVolume {
public:
    FDateTime CurrentTime; // 0x28
    float CurrentRate; // 0x30
    char pad_34[0x4];
    static UTimeSourceLocal* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
