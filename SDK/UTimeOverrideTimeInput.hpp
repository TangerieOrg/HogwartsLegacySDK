#pragma once
#include <cstdint>
#include "ETimeOverrideType.hpp"
#include "FTimeInput.hpp"
#include "UTimeOverrideTimeOnly.hpp"
#pragma pack(push, 1)
class UTimeOverrideTimeInput : public UTimeOverrideTimeOnly {
public:
    FTimeInput Time; // 0x30
    ETimeOverrideType Type; // 0x3c
    char pad_3d[0x3];
    float Priority; // 0x40
    bool bEnabled; // 0x44
    char pad_45[0x3];
    static UTimeOverrideTimeInput* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
