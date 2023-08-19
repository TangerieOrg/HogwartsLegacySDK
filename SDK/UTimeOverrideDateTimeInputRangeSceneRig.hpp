#pragma once
#include <cstdint>
#include "FDateTimeInput.hpp"
#include "UTimeOverrideDateTime.hpp"
#pragma pack(push, 1)
class UTimeOverrideDateTimeInputRangeSceneRig : public UTimeOverrideDateTime {
public:
    FDateTimeInput StartDateTime; // 0x30
    FDateTimeInput EndDateTime; // 0x48
    float Priority; // 0x60
    bool bUseEndDateTime; // 0x64
    char pad_65[0x3];
    static UTimeOverrideDateTimeInputRangeSceneRig* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
