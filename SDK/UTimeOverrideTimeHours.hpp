#pragma once
#include <cstdint>
#include "ETimeOverrideType.hpp"
#include "UTimeOverrideTimeOnly.hpp"
class UObject;
#pragma pack(push, 1)
class UTimeOverrideTimeHours : public UTimeOverrideTimeOnly {
public:
    float Time; // 0x30
    ETimeOverrideType Type; // 0x34
    char pad_35[0x3];
    float Priority; // 0x38
    bool bEnabled; // 0x3c
    char pad_3d[0x3];
    static UTimeOverrideTimeHours* StaticClass();
    static void TimeOverrideTimeHoursCreate(UObject* Owner, UTimeOverrideTimeHours*& TimeOverride, float CreateTime, ETimeOverrideType CreateType, float CreatePriority, bool bCreateEnabled, bool bIsTransient);
}; // Size: 0x40
#pragma pack(pop)
