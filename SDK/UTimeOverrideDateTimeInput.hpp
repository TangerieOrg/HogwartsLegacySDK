#pragma once
#include <cstdint>
#include "FDateTimeInput.hpp"
#include "UTimeOverrideDateTime.hpp"
#pragma pack(push, 1)
class UTimeOverrideDateTimeInput : public UTimeOverrideDateTime {
public:
    FDateTimeInput DateTime; // 0x30
    float Priority; // 0x48
    bool bEnabled; // 0x4c
    char pad_4d[0x3];
    static UTimeOverrideDateTimeInput* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
