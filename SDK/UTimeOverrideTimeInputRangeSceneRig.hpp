#pragma once
#include <cstdint>
#include "ETimeOverrideType.hpp"
#include "FTimeInput.hpp"
#include "UTimeOverrideTimeOnly.hpp"
#pragma pack(push, 1)
class UTimeOverrideTimeInputRangeSceneRig : public UTimeOverrideTimeOnly {
public:
    FTimeInput StartTime; // 0x30
    FTimeInput EndTime; // 0x3c
    ETimeOverrideType Type; // 0x48
    char pad_49[0x3];
    float Priority; // 0x4c
    bool bUseEndTime; // 0x50
    char pad_51[0x7];
    static UTimeOverrideTimeInputRangeSceneRig* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
